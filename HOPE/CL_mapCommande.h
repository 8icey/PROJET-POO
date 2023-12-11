#pragma once

using namespace System;

namespace NS_Comp												// D�finition namespace NS_Comp pour repr�senter la couche Composant de l'architecture ihm
{
	ref class CL_mapCommande									// D�finition de la classe CLmapTB_Commande
	{
	private:
		String^ sSql;
		int id_commande;										// Initialisation de l'attribut qui stocke l'id_commande
		int id_dateEmission;									// Initialisation de l'attribut qui stocke l'id_dateEmission de la commande
		int id_dateLivraison;									// Initialisation de l'attribut qui stocke l'id_dateLivraison de la commande
		int id_client;											// Initialisation de l'attribut qui stocke l'id_client de la commande
		//////POUR REFERENCE//////
		String^ Ref;									// Initialisation de l'attribut qui stocke la r�f�rence de la commande
		String^ PrenomClient;							// Initialisation de l'attribut qui stocke le pr�nom du client de la commande
		String^ NomClient;								// Initialisation de l'attribut qui stocke le nom du client de la commande
		String^ AnneeCommande;							// Initialisation de l'attribut qui stocke l'ann�e de la commande
		String^ VilleLivraison;							// Initialisation de l'attribut qui stocke la ville de livraison de la commande
		static int increment;									// Initialisation de l'attribut qui s'incr�mente pour la r�f�rence de la commande
		//////////////////////////
	public:
		String^ Select(void);							// Initialisation de la m�thode d'affichage de la commande				
		String^ Insert(void);							// Initialisation de la m�thode d'ajout de commande
		String^ Delete(void);							// Initialisation de la m�thode de suppression de commande
		void setIdCommande(int);								// Initialisation de la m�thode de mutateur de l'id_commande
		void setIdDateEmission(int);							// Initialisation de la m�thode de mutateur de l'id_dateEmission
		void setIdDateLivraison(int);							// Initialisation de la m�thode de mutateur de l'id_dateLivraison
		void setIdClient(int);									// Initialisation de la m�thode de mutateur de l'id_client
		int getIdCommande(void);								// Initialisation de la m�thode d'accesseur de l'id_commande
		int getIdDateEmission(void);							// Initialisation de la m�thode d'accesseur de l'id_dateEmission
		int getIdDateLivraison(void);							// Initialisation de la m�thode d'accesseur de l'id_dateLivraison
		int getIdClient(void);									// Initialisation de la m�thode d'accesseur de l'id_client
		//////POUR REFERENCE//////
		void setRef(String^);							// Initialisation de la m�thode de mutateur de la r�f�rence
		void setPrenomClient(String^);					// Initialisation de la m�thode de mutateur de PrenomClient
		void setNomClient(String^);						// Initialisation de la m�thode de mutateur de NomClient
		void setAnneeCommande(String^);					// Initialisation de la m�thode de mutateur de AnneeCommande
		void setVilleLivraison(String^);				// Initialisation de la m�thode de mutateur de VilleLivraison
		String^ getRef(void);							// Initialisation de la m�thode d'accesseur de la R�f�rence
		String^ getPrenomClient(void);					// Initialisation de la m�thode d'accesseur de PrenomClient
		String^ getNomClient(void);						// Initialisation de la m�thode d'accesseur de NomClient
		String^ getAnneeCommande(void);					// Initialisation de la m�thode d'accesseur de AnneCommande
		String^ getVilleLivraison(void);				// Initialisation de la m�thode d'accesseur de VilleLivraison
		//////////////////////////
	};
}
