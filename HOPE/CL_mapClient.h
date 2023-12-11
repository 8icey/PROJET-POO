#pragma once
#include "CL_mapAdresse.h"
#include "CL_mapDate.h"

using namespace System;

namespace NS_Comp												// Définition namespace NS_Comp pour représenter la couche Composant de l'architecture ihm
{
	ref class CL_mapClient									// Définition de la classe CLmapTB_Client
	{
	private:
		String^ sSql;
		int id_client;											// Initialisation de l'attribut qui stocke l'id_client
		String^ Nom;									// Initialisation de l'attribut qui stocke le Nom du client
		String^ Prenom;									// Initialisation de l'attribut qui stocke le Prénom du client
		int id_adresseLiv;										// Initialisation de l'attribut qui stocke l'id de l'adresse de livraison du client
		int id_adresseFact;										// Initialisation de l'attribut qui stocke l'id de l'adresse de facturation du client
		int id_dateAnniv;										// Initialisation de l'attribut qui stocke l'id de la date d'anniversaire du client
		int id_datePremierAchat;								// Initialisation de l'attribut qui stocke l'id de la date de premier achat du client
	public:
		String^ Select(void);							// Initialisation de la méthode d'affichage du client
		String^ Insert(void);							// Initialisation de la méthode d'ajout du client
		String^ Delete(void);							// Initialisation de la méthode de suppression du client
		void setIdClient(int);									// Initialisation de la méthode de mutateur de l'id_client
		void setNom(String^);							// Initialisation de la méthode de mutateur du Nom
		void setPrenom(String^);						// Initialisation de la méthode de mutateur du Prenom
		void setIdAdresseLiv(int);								// Initialisation de la méthode de mutateur de l'id_adresseLiv
		void setIdAdresseFact(int);								// Initialisation de la méthode de mutateur de l'id_adresseFact
		void setIdDateAnniv(int);								// Initialisation de la méthode de mutateur de l'id_dateAnniv
		void setIdDatePremierAchat(int);						// Initialisation de la méthode de mutateur de l'id_datePremierAchat
		int getIdClient(void);									// Initialisation de la méthode d'accesseur de l'id_client
		String^ getNom(void);							// Initialisation de la méthode d'accesseur du Nom
		String^ getPrenom(void);						// Initialisation de la méthode d'accesseur du Prenom
		int getIdAdresseLiv(void);								// Initialisation de la méthode d'accesseur de l'id_adresseLiv
		int getIdAdresseFact(void);								// Initialisation de la méthode d'accesseur de l'id_adresseFact
		int getIdDateAnniv(void);								// Initialisation de la méthode d'accesseur de l'id_dateAnniv
		int getIdDatePremierAchat(void);						// Initialisation de la méthode d'accesseur de l'id_datePremierAchat
	};
}

