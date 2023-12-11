#pragma once
#include "CL_CAD.h"
#include "CL_mapCommande.h"
#include "CL_mapDate.h"

using namespace System;

namespace NS_SVC																																	// D�finition namespace NS_Svc pour repr�senter la couche Service de l'architecture ihm
{
	ref class CL_svcCommande																														// D�finition de la classe CLServiceCommande
	{
	private:
		NS_Comp::CL_CAD^ oData;																														// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CL_mapCommande^ oMappTB_Commande;																								// Instanciation de la classe CLmapTB_Commande dynamique manag�e
		NS_Comp::CL_mapDate^ oMappTB_DateEmission;																								// Instanciation de la classe CLmapTB_Date dynamique manag�e
		NS_Comp::CL_mapDate^ oMappTB_DateLivraison;																								// Instanciation de la classe CLmapTB_Date dynamique manag�e
		String^ Reference;																													// Initialisation attribut Reference
		int increment;																																// Initialisation attribut increment
	public:
		CL_svcCommande(void);																													// Initialisation m�thode constructeur par d�faut
		Data::DataSet^ selectionnerToutesLesCommandes(String^);																		// Initialisation m�thode d'affichage des commandes
		void ajouterCommande(String^, String^, String^,String^, String^, String^, int);			// Initialisation m�thode d'ajout des commandes
		void modifierCommande(int, String^, String^, String^, String^, String^, String^, int);		// Initialisation m�thode de modification des commandes
		void supprimerCommande(int);																												// Initialisation m�thode de suppression des commandes

		///////////R�f�rence///////////
		void setReference();																														// Initialisation mutateur de Reference
		String^ getReference(void);																											// Initialisation accesseur de Reference
	};
}