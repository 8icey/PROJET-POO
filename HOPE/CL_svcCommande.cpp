#include "CL_svcCommande.h"


namespace NS_SVC {
	CL_svcCommande::CL_svcCommande(void)
	{
		this->oData = gcnew NS_Comp::CL_CAD();													// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
		this->oMappTB_Commande = gcnew NS_Comp::CL_mapCommande();								// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Commande
		this->oMappTB_DateEmission = gcnew NS_Comp::CL_mapDate();								// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Date
		this->oMappTB_DateLivraison = gcnew NS_Comp::CL_mapDate();							// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Date
	}

	Data::DataSet^ CL_svcCommande::selectionnerToutesLesCommandes(String^ dataTableName)
	{
		String^ sql;																	// Initialisation variable locale pour stocker les requêtes sql

		sql = this->oMappTB_Commande->Select();													// Stocke requête sql d'affichage des commandes
		return this->oData->getRows(sql, dataTableName);										// retourne les Rows obtenus par la fonction getRows
	}

	void CL_svcCommande::ajouterCommande(String^ PrenomClient, String^ NomClient, String^ DateCommande, String^ VilleLivraison, String^ dateEmission, String^ dateLivraison, int id_Client)
	{
		String^ sql;																	// Initialisation variable locale pour stocker les requêtes sql
		int id_dateEm;																			// Initialisation variable locale pour stocker l'id_dateEm
		int id_dateLiv;																			// Initialisation variable locale pour stocker l'id_dateLiv

		//////////////////////////////////////////////////////////Reference//////////////////////////////////////////////////////////
		this->oMappTB_Commande->setPrenomClient(PrenomClient);									// Stockage valeur paramètre PrenomClient dans attribut PrenomClient de l'objet oMappTB_Commande		
		this->oMappTB_Commande->setNomClient(NomClient);										// Stockage valeur paramètre NomClient dans attribut NomClient de l'objet oMappTB_Commande	
		this->oMappTB_Commande->setAnneeCommande(DateCommande);									// Stockage valeur paramètre DateCommande dans attribut DateCommande de l'objet oMappTB_Commande	
		this->oMappTB_Commande->setVilleLivraison(VilleLivraison);								// Stockage valeur paramètre VilleLivraison dans attribut VilleLivraison de l'objet oMappTB_Commande	
		this->setReference();																	// Exécution de la fonction mutateur de Reference

		//////////////////////////////////////////////////////////Date Emission//////////////////////////////////////////////////////////
		this->oMappTB_DateEmission->setDate(dateEmission);										// Stockage valeur paramètre dateEmission dans attribut Date de l'objet oMappTB_DateEmission

		sql = this->oMappTB_DateEmission->Insert();												// Stockage requête sql d'ajout d'une date
		id_dateEm = this->oData->actionRowsID(sql);												// Exécution de la requête sql stockée et stockage de l'id_date retourné dans la variable id_dateEm

		//////////////////////////////////////////////////////////Date livraison//////////////////////////////////////////////////////////
		this->oMappTB_DateLivraison->setDate(dateLivraison);									// Stockage valeur paramètre dateLivraison dans attribut Date de l'objet oMappTB_DateLivraison

		sql = this->oMappTB_DateLivraison->Insert();											// Stockage requête sql d'ajout d'une date
		id_dateLiv = this->oData->actionRowsID(sql);											// Exécution de la requête sql stockée et stockage de l'id_date retourné dans la variable id_dateLiv

		//////////////////////////////////////////////////////////Commande//////////////////////////////////////////////////////////
		this->oMappTB_Commande->setRef(this->getReference());									// Stockage valeur attribut Reference dans attribut Reference de l'objet oMappTB_Commande	
		this->oMappTB_Commande->setIdDateEmission(id_dateEm);									// Stockage valeur variable id_dateEm dans attribut id_dateEm de l'objet oMappTB_Commande	
		this->oMappTB_Commande->setIdDateLivraison(id_dateLiv);									// Stockage valeur variable id_dateLiv dans attribut id_dateLiv de l'objet oMappTB_Commande	
		this->oMappTB_Commande->setIdClient(id_Client);											// Stockage valeur paramètre id_client dans attribut id_client de l'objet oMappTB_Commande

		sql = this->oMappTB_Commande->Insert();													// Stockage requête sql d'ajout d'une date
		this->oData->actionRows(sql);															// Exécution de la requête sql stockée
	}

	void CL_svcCommande::modifierCommande(int id_commande, String^ PrenomClient, String^ NomClient, String^ DateCommande, String^ VilleLivraison,String^ dateEmission, String^ dateLivraison, int Id_Client)
	{
		String^ sql;																	// Initialisation variable locale pour stocker les requêtes sql

		this->oMappTB_Commande->setIdCommande(id_commande);										// Stockage valeur paramètre id_commande dans attribut id_commande de l'objet oMappTB_Commande
		this->oMappTB_Commande->setPrenomClient(PrenomClient);									// Stockage valeur paramètre PrenomClient dans attribut PrenomClient de l'objet oMappTB_Commande
		this->oMappTB_Commande->setNomClient(NomClient);										// Stockage valeur paramètre NomClient dans attribut NomClient de l'objet oMappTB_Commande	
		this->oMappTB_Commande->setAnneeCommande(DateCommande);									// Stockage valeur paramètre DateCommande dans attribut DateCommande de l'objet oMappTB_Commande	
		this->oMappTB_Commande->setVilleLivraison(VilleLivraison);								// Stockage valeur paramètre VilleLivraison dans attribut VilleLivraison de l'objet oMappTB_Commande	
		this->oMappTB_Commande->setIdClient(Id_Client);											// Stockage valeur paramètre Id_Client dans attribut id_client de l'objet oMappTB_Commande
		this->setReference();																	// Exécution de la fonction mutateur de Reference

		this->oMappTB_DateEmission->setDate(dateEmission);										// Stockage valeur paramètre dateEmission dans attribut Date de l'objet oMappTB_DateEmission

		this->oMappTB_DateLivraison->setDate(dateLivraison);									// Stockage valeur paramètre dateLivraison dans attribut Date de l'objet oMappTB_DateLivraison

		this->oMappTB_Commande->setRef(this->getReference());									// Stockage valeur attribut Reference dans attribut Reference de l'objet oMappTB_Commande

		// Stockage requête sql de modification des commandes suivante
		sql = "UPDATE Commande" +
			" SET Reference='" + this->oMappTB_Commande->getRef() + "'" +
			" WHERE(Commande.Id_commande='" + this->oMappTB_Commande->getIdCommande() + "')" +
			" UPDATE Date" +
			" SET Date='" + this->oMappTB_DateEmission->getDate() + "'" +
			" FROM Date INNER JOIN Commande ON Date.Id_date = Commande.Id_date"
			" WHERE(Commande.Id_commande='" + this->oMappTB_Commande->getIdCommande() + "')" +
			" UPDATE Date" +
			" SET Date='" + this->oMappTB_DateLivraison->getDate() + "'" +
			" FROM Date INNER JOIN Commande ON Date.Id_date = Commande.Id_date_livre_le"
			" WHERE(Commande.Id_commande='" + this->oMappTB_Commande->getIdCommande() + "')";

		this->oData->actionRows(sql);															// Exécution de la requête sql stockée
	}

	void CL_svcCommande::supprimerCommande(int id_commande)
	{
		String^ sql;																	// Initialisation variable locale pour stocker les requêtes sql

		this->oMappTB_Commande->setIdCommande(id_commande);										// Stockage valeur paramètre id_commande dans attribut id_commande de l'objet oMappTB_Commande

		sql = this->oMappTB_Commande->Delete();													// Stockage requête sql de suppression d'une commande
		this->oData->actionRows(sql);															// Exécution de la requête sql stockée
	}

	/// Mutateur de Reference ///

	void CL_svcCommande::setReference()
	{
		this->Reference = "";																	// Vide la variable Reference
		// Récupération 2 premières lettres prénom client
		for (int i = 0; i < 2; i++)
		{
			this->Reference += this->oMappTB_Commande->getPrenomClient()[i];
		}
		// Récupération 2 premières lettres nom client
		for (int i = 0; i < 2; i++)
		{
			this->Reference += this->oMappTB_Commande->getNomClient()[i];
		}
		// Récupération année commande
		for (int i = 0; i < 4; i++)
		{
			this->Reference += this->oMappTB_Commande->getAnneeCommande()[i];					//Ecrire Date de cette façon : YYYY-MM-DD
		}
		// Récupération 3 premières lettres ville livraison
		for (int i = 0; i < 3; i++)
		{
			this->Reference += this->oMappTB_Commande->getVilleLivraison()[i];
		}
		this->Reference += this->increment;														// Ajout increment
		this->increment++;																		// incrémentation
	}

	/// Accesseur de Reference ///

	System::String^ CL_svcCommande::getReference(void)
	{
		return this->Reference;
	}

}