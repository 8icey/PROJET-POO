#include "CL_svcPersonnel.h"

namespace NS_SVC {
	CL_svcPersonnel::CL_svcPersonnel(void)
	{
		this->oData = gcnew NS_Comp::CL_CAD();									// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
		this->oMappTB_Personnel = gcnew NS_Comp::CL_mapPersonnel();			// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Personnel
		this->oMappTB_Adresse = gcnew NS_Comp::CL_mapAdresse();				// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Adresse
		this->oMappTB_Date = gcnew NS_Comp::CL_mapDate();						// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Date
	}
	Data::DataSet^ CL_svcPersonnel::selectionnerToutesLesPersonnes(String^ dataTableName)
	{
		String^ sql;													// Initialisation variable locale pour stocker les requ�tes sql

		sql = this->oMappTB_Personnel->Select();								// Stocke requ�te sql d'affichage du personnel
		return this->oData->getRows(sql, dataTableName);						// retourne les Rows obtenus par la fonction getRows
	}
	void CL_svcPersonnel::ajouterUnePersonne(String^ nom, String^ prenom, String^ poste, String^ adresse, String^ ville, int cp, String^ date)
	{
		String^ sql;													// Initialisation variable locale pour stocker les requ�tes sql
		int Id_date;															// Initialisation variable locale pour stocker l'id_date
		int Id_adresse;															// Initialisation variable locale pour stocker l'id_adresse

		///////////////////////////////////////////////Adresse///////////////////////////////////////////////
		this->oMappTB_Adresse->setAdresse(adresse);								// Stockage valeur param�tre adresse dans attribut Adresse de l'objet oMappTB_Adresse
		this->oMappTB_Adresse->setVille(ville);									// Stockage valeur param�tre ville dans attribut Ville de l'objet oMappTB_Adresse
		this->oMappTB_Adresse->setCp(cp);										// Stockage valeur param�tre cp dans attribut Cp de l'objet oMappTB_Adresse

		sql = this->oMappTB_Adresse->Insert();									// Stockage requ�te sql d'ajout d'une adresse
		Id_adresse = this->oData->actionRowsID(sql);							// Ex�cution de la requ�te sql stock�e et stockage de l'id_adresse retourn� dans la variable Id_adresse

		///////////////////////////////////////////////Date///////////////////////////////////////////////
		this->oMappTB_Date->setDate(date);										// Stockage valeur param�tre date dans attribut Date de l'objet oMappTB_Date

		sql = this->oMappTB_Date->Insert();										// Stockage requ�te sql d'ajout d'une date
		Id_date = this->oData->actionRowsID(sql);								// Ex�cution de la requ�te sql stock�e et stockage de l'id_date retourn� dans la variable Id_date

		///////////////////////////////////////////////Personnel///////////////////////////////////////////////
		this->oMappTB_Personnel->setNom(nom);									// Stockage valeur param�tre nom dans attribut Nom de l'objet oMappTB_Personnel
		this->oMappTB_Personnel->setPrenom(prenom);								// Stockage valeur param�tre prenom dans attribut Prenom de l'objet oMappTB_Personnel
		this->oMappTB_Personnel->setPoste(poste);								// Stockage valeur param�tre poste dans attribut Poste de l'objet oMappTB_Personnel
		this->oMappTB_Personnel->setId_date(Id_date);							// Stockage valeur variable Id_date dans attribut id_date de l'objet oMappTB_Personnel
		this->oMappTB_Personnel->setId_adresse(Id_adresse);						// Stockage valeur variable Id_adresse dans attribut id_adresse de l'objet oMappTB_Personnel

		sql = this->oMappTB_Personnel->Insert();								// Stockage requ�te sql d'ajout d'un personnel
		this->oData->actionRows(sql);											// Ex�cution de la requ�te sql stock�e
	}

	void CL_svcPersonnel::modifierPersonnel(int id_personnel, String^ nom, String^ prenom, String^ poste, String^ adresse, String^ ville, int cp, String^ date_embauche)
	{
		String^ sql;													// Initialisation variable locale pour stocker les requ�tes sql

		this->oMappTB_Personnel->setId_Personnel(id_personnel);					// Stockage valeur param�tre id_personnel dans attribut Id_Personnel de l'objet oMappTB_Personnel



		//Update Adresse
		this->oMappTB_Adresse->setAdresse(adresse);								// Stockage valeur param�tre adresse dans attribut Adresse de l'objet oMappTB_Adresse
		this->oMappTB_Adresse->setVille(ville);									// Stockage valeur param�tre ville dans attribut Ville de l'objet oMappTB_Adresse
		this->oMappTB_Adresse->setCp(cp);										// Stockage valeur param�tre cp dans attribut Cp de l'objet oMappTB_Adresse

		//Update Date
		this->oMappTB_Date->setDate(date_embauche);								// Stockage valeur param�tre date_embauche dans attribut Date de l'objet oMappTB_Date

		//Update Personnel
		this->oMappTB_Personnel->setNom(nom);									// Stockage valeur param�tre nom dans attribut Nom de l'objet oMappTB_Personnel
		this->oMappTB_Personnel->setPrenom(prenom);								// Stockage valeur param�tre prenom dans attribut Prenom de l'objet oMappTB_Personnel
		this->oMappTB_Personnel->setPoste(poste);								// Stockage valeur param�tre poste dans attribut Poste de l'objet oMappTB_Personnel

		// Stockage et d�finition de la requ�te sql de modification d'un personnel
		sql = "UPDATE Personnel" +
			" SET Nom='" + this->oMappTB_Personnel->getNom() + "', Prenom='" + this->oMappTB_Personnel->getPrenom() + "'" +
			" WHERE(id_personnel ='" + this->oMappTB_Personnel->getId_Personnel() + "')" +
			" UPDATE Adresse" +
			" SET Adresse ='" + this->oMappTB_Adresse->getAdresse() + "', Ville = '" + this->oMappTB_Adresse->getVille() + "', Cp ='" + this->oMappTB_Adresse->getCp() + "'" +
			" FROM Adresse INNER JOIN Personnel ON Adresse.id_adresse = Personnel.id_adresse" +
			" WHERE(id_personnel ='" + this->oMappTB_Personnel->getId_Personnel() + "')" +
			" UPDATE Date" +
			" SET Date ='" + this->oMappTB_Date->getDate() + "'" +
			" FROM Date INNER JOIN Personnel ON Date.Id_date = Personnel.Id_date" +
			" WHERE(id_personnel ='" + this->oMappTB_Personnel->getId_Personnel() + "')";
		this->oData->actionRows(sql);											// Ex�cution de la requ�te sql stock�e

	}

	void CL_svcPersonnel::supprimerPersonnel(int id_personnel)
	{
		String^ sql;													// Initialisation variable locale pour stocker les requ�tes sql

		this->oMappTB_Personnel->setId_Personnel(id_personnel);					// Stockage valeur param�tre id_personnel dans attribut Id_Personnel de l'objet oMappTB_Personnel

		sql = this->oMappTB_Personnel->Delete();								// Stockage requ�te sql de suppression d'un personnel
		this->oData->actionRows(sql);											// Ex�cution de la requ�te sql stock�e
	}
}