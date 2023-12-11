#pragma once
#include "CL_mapPersonnel.h"
#include "CL_mapAdresse.h"
#include "CL_mapDate.h"
#include "CL_CAD.h"

using namespace System;

namespace NS_SVC																																// Définition namespace NS_Svc pour représenter la couche Service de l'architecture ihm
{
	ref class CL_svcPersonnel																													// Définition de la classe CLServicePersonnel
	{
	private:
		NS_Comp::CL_CAD^ oData;																														// Instanciation de la classe CLData dynamique managée
		NS_Comp::CL_mapPersonnel^ oMappTB_Personnel;																								// Instanciation de la classe CLmapTB_Personnel dynamique managée
		NS_Comp::CL_mapAdresse^ oMappTB_Adresse;																									// Instanciation de la classe CLmapTB_Adresse dynamique managée
		NS_Comp::CL_mapDate^ oMappTB_Date;																										// Instanciation de la classe CLmapTB_Date dynamique managée
	public:
		CL_svcPersonnel(void);																													// Initialisation méthode constructeur par défaut
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);																		// Initialisation méthode d'affichage du personnel
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);			// Initialisation méthode d'ajout du personnel
		void modifierPersonnel(int, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);		// Initialisation méthode de modification du personnel
		void supprimerPersonnel(int);																												// Initialisation méthode de suppression du personnel
	};
}
