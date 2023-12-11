#pragma once
#include "CL_CAD.h"
#include "CL_mapCommande.h"
#include "CL_mapDate.h"

using namespace System;

namespace NS_SVC																																	// Définition namespace NS_Svc pour représenter la couche Service de l'architecture ihm
{
	ref class CL_svcCommande																														// Définition de la classe CLServiceCommande
	{
	private:
		NS_Comp::CL_CAD^ oData;																														// Instanciation de la classe CLData dynamique managée
		NS_Comp::CL_mapCommande^ oMappTB_Commande;																								// Instanciation de la classe CLmapTB_Commande dynamique managée
		NS_Comp::CL_mapDate^ oMappTB_DateEmission;																								// Instanciation de la classe CLmapTB_Date dynamique managée
		NS_Comp::CL_mapDate^ oMappTB_DateLivraison;																								// Instanciation de la classe CLmapTB_Date dynamique managée
		String^ Reference;																													// Initialisation attribut Reference
		int increment;																																// Initialisation attribut increment
	public:
		CL_svcCommande(void);																													// Initialisation méthode constructeur par défaut
		Data::DataSet^ selectionnerToutesLesCommandes(String^);																		// Initialisation méthode d'affichage des commandes
		void ajouterCommande(String^, String^, String^,String^, String^, String^, int);			// Initialisation méthode d'ajout des commandes
		void modifierCommande(int, String^, String^, String^, String^, String^, String^, int);		// Initialisation méthode de modification des commandes
		void supprimerCommande(int);																												// Initialisation méthode de suppression des commandes

		///////////Référence///////////
		void setReference();																														// Initialisation mutateur de Reference
		String^ getReference(void);																											// Initialisation accesseur de Reference
	};
}