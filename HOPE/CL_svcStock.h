#pragma once
#include "CL_CAD.h"
#include "CL_mapStock.h"

using namespace System;

namespace NS_SVC																												// D�finition namespace NS_Svc pour repr�senter la couche Service 
{
	ref class CL_svcStock																									// D�finition de la classe CLServiceStock
	{
	private:
		NS_Comp::CL_CAD^ oData;																									// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CL_mapStock^ oMappTB_Stock;																					// Instanciation de la classe CLmapTB_Stock dynamique manag�e
	public:
		CL_svcStock(void);																									// Initialisation m�thode constructeur par d�faut
		System::Data::DataSet^ selectionnerTousLesStocks(System::String^); // Selectionner tous les articles					// Initialisation m�thode d'affichage du stock
		void ajouterArticle(System::String^, System::String^, int, int, System::String^, float, float, float, float);			// Initialisation m�thode d'ajout du stock
		void modifierArticle(int, System::String^, System::String^, int, int, System::String^, float, float, float, float);		// Initialisation m�thode de modification du stock
		void supprimerArticle(int);																								// Initialisation m�thode de suppression du stock
	};
}