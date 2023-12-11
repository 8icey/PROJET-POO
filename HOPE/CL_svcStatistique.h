#pragma once
#include "CL_CAD.H"
#include "CL_mapStatistique.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
namespace NS_SVC {

	ref class CL_svcStatistique
	{
	private:
		NS_Comp::CL_CAD^ cad;
		NS_Comp::CL_mapstat^ stat;
		double t, r, m, d;
		int month;
		int c;
		DataSet^ ds;
	public:
		
		CL_svcStatistique(void);
		DataSet^ sstat1(String^);
		DataSet^ sstat2(String^,int);
		DataSet^ sstat3(String^);
		DataSet^ sstat4(String^,int);
		DataSet^ sstat5(String^);
		DataSet^ sstat6(String^);
		DataSet^ sstat7(String^);
		DataSet^ sstat8(String^);
		DataSet^ sstat9t(String^, String^, int);
		DataSet^ sstat9m(String^, String^, int);
		DataSet^ sstat9r(String^, String^, int);
		DataSet^ sstat9d(String^, String^,int);





	};

}