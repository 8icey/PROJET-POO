#pragma once
#include "CL_CAD.h"
#include "CL_mapStock.h"

using namespace System;

namespace NS_SVC																												// Définition namespace NS_Svc pour représenter la couche Service 
{
	ref class CL_svcStock																									// Définition de la classe CLServiceStock
	{
	private:
		NS_Comp::CL_CAD^ oData;																									// Instanciation de la classe CLData dynamique managée
		NS_Comp::CL_mapStock^ oMappTB_Stock;																					// Instanciation de la classe CLmapTB_Stock dynamique managée
	public:
		CL_svcStock(void);																									// Initialisation méthode constructeur par défaut
		System::Data::DataSet^ selectionnerTousLesStocks(System::String^); // Selectionner tous les articles					// Initialisation méthode d'affichage du stock
		void ajouterArticle(System::String^, System::String^, int, int, System::String^, float, float, float, float);			// Initialisation méthode d'ajout du stock
		void modifierArticle(int, System::String^, System::String^, int, int, System::String^, float, float, float, float);		// Initialisation méthode de modification du stock
		void supprimerArticle(int);																								// Initialisation méthode de suppression du stock
	};
}