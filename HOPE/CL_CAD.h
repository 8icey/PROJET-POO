#pragma once
using namespace System;

namespace NS_Comp
{
	ref class CL_CAD
	{
	private:
		String^ sSql;												// Initialisation attribut qui stocke les requêtes
		String^ sCnx;												// Initialisation attribut qui stocke Chemin d'accès à la BDD
		Data::SqlClient::SqlConnection^ oCnx;						// Initialisation attribut qui stocke une instanciation de la classe SqlConnection
		Data::SqlClient::SqlCommand^ oCmd;							// Initialisation attribut qui stocke une instanciation de la classe SqlCommand
		Data::SqlClient::SqlDataAdapter^ oDA;						// Initialisation attribut qui stocke une instanciation de la classe DataAdapter
		Data::DataSet^ oDs;											// Initialisation attribut qui stocke une instanciation de la classe DataSet
	public:
		CL_CAD(void);														// Constructeur par défaut de la classe CLData
		Data::DataSet^ getRows(String^, String^);	// Méthode pour récupérer les Rows d'une table
		void actionRows(String^);									// Méthode permettant d'agir sur les Rows d'une table
		int actionRowsID(String^);									// Méthode permettant d'agir sur les Rows d'une table et de récupérer un identifiant
	};
}
