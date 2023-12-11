#pragma once
using namespace System;

namespace NS_Comp
{
	ref class CL_mapAdresse
	{
	private:
		String^ sSql;
		int id_adresse;
		String^ Adresse;
		String^ Ville;
		int Cp;
	public:
		CL_mapAdresse(void);
		String^ Insert(void);
		String^ Update(void);
		//String^ Delete(void);
		void setIdAdresse(int);
		void setAdresse(String^);
		void setVille(String^);
		void setCp(int);
		int getIdAdresse(void);
		String^ getAdresse(void);
		String^ getVille(void);
		int getCp(void);
	};
}

