#pragma once
using namespace System;

namespace NS_Comp
{
	ref class CL_mapDate
	{
	private:
		int id_date;
		System::String^ Date;
	public:
		System::String^ Insert(void);
		System::String^ Update(void);
		System::String^ Delete(void);
		void setIdDate(int);
		void setDate(System::String^);
		System::String^ getDate(void);
		int getIdDate(void);
	};
}


