#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
namespace NS_Comp {
	ref class CL_mapstat
	{
	public:
		CL_mapstat();
		String^ stat1(void);
		String^ stat2(void);
		String^ stat3(void);
		String^ stat4(void);
		String^ stat5(void);
		String^ stat6(void);
		String^ stat7(void);
		String^ stat8(void);
		String^ stat9tva(void);
		String^ stat9margec(void);
		String^ stat9remise(void);
		String^ stat9dem(void);


	};

}