#pragma once
#include "CL_mapClient.h"
#include "CL_mapAdresse.h"
#include "CL_mapDate.h"
#include "CL_CAD.h"

using namespace System;
namespace NS_SVC																																											// D�finition namespace NS_Svc pour repr�senter la couche Service de l'architecture ihm
{
	ref class CL_svcClient																																								// D�finition de la classe CLServiceClient
	{
	private:
		NS_Comp::CL_CAD^ oData;																																								// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CL_mapClient^ oMappTB_Client;																																			// Instanciation de la classe CLmapTB_Client dynamique manag�e
		NS_Comp::CL_mapAdresse^ oMappTB_Adresse_liv;		//livraison																														// Instanciation de la classe CLmapTB_Adresse dynamique manag�e
		NS_Comp::CL_mapAdresse^ oMappTB_Adresse_fact;		//facturation																													// Instanciation de la classe CLmapTB_Adresse dynamique manag�e
		NS_Comp::CL_mapDate^ oMappTB_Date_anniv;			//date anniv																													// Instanciation de la classe CLmapTB_Date dynamique manag�e
		NS_Comp::CL_mapDate^ oMappTB_Date_Premier_achat;	//date premier achat																											// Instanciation de la classe CLmapTB_Date dynamique manag�e
	public:
		CL_svcClient(void);																																								// Initialisation m�thode constructeur par d�faut
		Data::DataSet^ selectionnerTousLesClients(String^);																													// Initialisation m�thode d'affichage du client
		void ajouterUnClient(String^, String^, String^, String^, int, String^, String^, int, String^, String^);				// Initialisation m�thode d'ajout du client
		void modifierUnClient(int, String^, String^, String^, String^, int, String^, String^, int, String^, String^);		// Initialisation m�thode de modification du client
		void supprimerUnClient(int);																																						// Initialisation m�thode de suppression du client
	};
}
