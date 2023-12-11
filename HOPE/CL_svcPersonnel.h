#pragma once
#include "CL_mapPersonnel.h"
#include "CL_mapAdresse.h"
#include "CL_mapDate.h"
#include "CL_CAD.h"

using namespace System;

namespace NS_SVC																																// D�finition namespace NS_Svc pour repr�senter la couche Service de l'architecture ihm
{
	ref class CL_svcPersonnel																													// D�finition de la classe CLServicePersonnel
	{
	private:
		NS_Comp::CL_CAD^ oData;																														// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CL_mapPersonnel^ oMappTB_Personnel;																								// Instanciation de la classe CLmapTB_Personnel dynamique manag�e
		NS_Comp::CL_mapAdresse^ oMappTB_Adresse;																									// Instanciation de la classe CLmapTB_Adresse dynamique manag�e
		NS_Comp::CL_mapDate^ oMappTB_Date;																										// Instanciation de la classe CLmapTB_Date dynamique manag�e
	public:
		CL_svcPersonnel(void);																													// Initialisation m�thode constructeur par d�faut
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);																		// Initialisation m�thode d'affichage du personnel
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);			// Initialisation m�thode d'ajout du personnel
		void modifierPersonnel(int, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);		// Initialisation m�thode de modification du personnel
		void supprimerPersonnel(int);																												// Initialisation m�thode de suppression du personnel
	};
}
