#include "CL_CAD.h"

namespace NS_Comp {

	CL_CAD::CL_CAD(void)
	{
		this->sCnx = "Data Source=ICEY\\SQLEXPRESS;Initial Catalog=POoPOo;User ID = icey\\wbnsn;Integrated Security=True";	// Lien vers database du projet

		this->sSql = "Rien";																							// Pas de requ�te

		this->oCnx = gcnew Data::SqlClient::SqlConnection(this->sCnx);											// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe SqlConnection
		this->oCmd = gcnew Data::SqlClient::SqlCommand(this->sSql, this->oCnx);									// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe SqlCommand
		this->oDA = gcnew Data::SqlClient::SqlDataAdapter();													// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe SqlDataAdapter
		this->oDs = gcnew Data::DataSet();																		// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe DataSet

		this->oCmd->CommandType = Data::CommandType::Text;														// D�finit le type de commande en Text
	}
	Data::DataSet^ CL_CAD::getRows(String^ sSql, String^ sDataTableName)
	{
		this->oDs->Clear();																								// Vide les donn�es contenus dans l'attribut oDs
		this->sSql = sSql;																								// Initialise attribut � la requ�te en param�tre
		this->oCmd->CommandText = this->sSql;																			// Initialise commande � la requ�te contenue dans sSql
		this->oDA->SelectCommand = this->oCmd;																			// Selectionne la commande
		this->oDA->Fill(this->oDs, sDataTableName);																		// Ajoute la table en param�tre � l'attribut oDs

		return this->oDs;																								// Retourne la valeur de oDs (soit les Rows obtenus)
	}
	void CL_CAD::actionRows(String^ sSql)
	{
		this->sSql = sSql;																								// Initialise attribut � la requ�te en param�tre
		this->oCmd->CommandText = this->sSql;																			// Initialise commande � la requ�te contenue dans sSql
		this->oDA->SelectCommand = this->oCmd;																			// Selectionne la commande
		this->oCnx->Open();																								// Ouvre la BDD
		this->oCmd->ExecuteNonQuery();																					// Execute la requ�te SQL
		this->oCnx->Close();																							// Ferme la BDD
	}
	int CL_CAD::actionRowsID(String^ sSql)
	{
		int id;																											// Initialisation variable id
		this->sSql = sSql;																								// Initialise attribut � la requ�te en param�tre
		this->oCmd->CommandText = this->sSql;																			// Initialise commande � la requ�te contenue dans sSql
		this->oDA->SelectCommand = this->oCmd;																			// Selectionne la commande
		this->oCnx->Open();																								// Ouvre la BDD
		id = System::Convert::ToInt32(this->oCmd->ExecuteScalar());														// Stocke la valeur retourn�e de la fonction ExecuteScalar qui ex�cute la requ�te et retourne la premi�re colonne de la premi�re ligne du jeu de r�sultats retourn� par la requ�te
		this->oCnx->Close();																							// Ferme la BDD
		return id;																										// retourne id
	}
}