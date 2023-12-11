#pragma once
#include "CL_mapClient.h"
#include "CL_mapAdresse.h"
#include "CL_mapDate.h"
#include "CL_CAD.h"

using namespace System;
namespace NS_SVC																																											// Définition namespace NS_Svc pour représenter la couche Service de l'architecture ihm
{
	ref class CL_svcClient																																								// Définition de la classe CLServiceClient
	{
	private:
		NS_Comp::CL_CAD^ oData;																																								// Instanciation de la classe CLData dynamique managée
		NS_Comp::CL_mapClient^ oMappTB_Client;																																			// Instanciation de la classe CLmapTB_Client dynamique managée
		NS_Comp::CL_mapAdresse^ oMappTB_Adresse_liv;		//livraison																														// Instanciation de la classe CLmapTB_Adresse dynamique managée
		NS_Comp::CL_mapAdresse^ oMappTB_Adresse_fact;		//facturation																													// Instanciation de la classe CLmapTB_Adresse dynamique managée
		NS_Comp::CL_mapDate^ oMappTB_Date_anniv;			//date anniv																													// Instanciation de la classe CLmapTB_Date dynamique managée
		NS_Comp::CL_mapDate^ oMappTB_Date_Premier_achat;	//date premier achat																											// Instanciation de la classe CLmapTB_Date dynamique managée
	public:
		CL_svcClient(void);																																								// Initialisation méthode constructeur par défaut
		Data::DataSet^ selectionnerTousLesClients(String^);																													// Initialisation méthode d'affichage du client
		void ajouterUnClient(String^, String^, String^, String^, int, String^, String^, int, String^, String^);				// Initialisation méthode d'ajout du client
		void modifierUnClient(int, String^, String^, String^, String^, int, String^, String^, int, String^, String^);		// Initialisation méthode de modification du client
		void supprimerUnClient(int);																																						// Initialisation méthode de suppression du client
	};
}
