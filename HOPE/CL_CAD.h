#pragma once
using namespace System;

namespace NS_Comp
{
	ref class CL_CAD
	{
	private:
		String^ sSql;												// Initialisation attribut qui stocke les requ�tes
		String^ sCnx;												// Initialisation attribut qui stocke Chemin d'acc�s � la BDD
		Data::SqlClient::SqlConnection^ oCnx;						// Initialisation attribut qui stocke une instanciation de la classe SqlConnection
		Data::SqlClient::SqlCommand^ oCmd;							// Initialisation attribut qui stocke une instanciation de la classe SqlCommand
		Data::SqlClient::SqlDataAdapter^ oDA;						// Initialisation attribut qui stocke une instanciation de la classe DataAdapter
		Data::DataSet^ oDs;											// Initialisation attribut qui stocke une instanciation de la classe DataSet
	public:
		CL_CAD(void);														// Constructeur par d�faut de la classe CLData
		Data::DataSet^ getRows(String^, String^);	// M�thode pour r�cup�rer les Rows d'une table
		void actionRows(String^);									// M�thode permettant d'agir sur les Rows d'une table
		int actionRowsID(String^);									// M�thode permettant d'agir sur les Rows d'une table et de r�cup�rer un identifiant
	};
}
