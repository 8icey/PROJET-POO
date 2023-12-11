#pragma once

using namespace  System;
namespace NS_Comp													// Définition namespace NS_Comp pour représenter la couche Composant de l'architecture ihm
{
	ref class CL_mapPersonnel										// Définition de la classe CLmapTB_Personnel
	{
	private:
		System::String^ sSql;
		int id_personnel;											// Initialisation de l'attribut qui stocke l'id_personnel
		System::String^ Prenom;										// Initialisation de l'attribut qui stocke le prénom du personnel
		System::String^ Nom;										// Initialisation de l'attribut qui stocke le nom du personnel
		System::String^ Poste;										// Initialisation de l'attribut qui stocke le poste du personnel
		int id_adresse;												// Initialisation de l'attribut qui stocke l'id_adresse
		int id_date;												// Initialisation de l'attribut qui stocke l'id_date
	public:
		System::String^ Select(void);								// Initialisation de la méthode d'affichage du personnel
		System::String^ Insert(void);								// Initialisation de la méthode d'ajout du personnel
		System::String^ Delete(void);								// Initialisation de la méthode de suppression du personnel
		void setId_Personnel(int);									// Initialisation de la méthode de mutateur de l'id_personnel
		void setNom(System::String^);								// Initialisation de la méthode de mutateur de Nom
		void setPrenom(System::String^);							// Initialisation de la méthode de mutateur de Prenom
		void setPoste(System::String^);								// Initialisation de la méthode de mutateur de Poste
		void setId_adresse(int);									// Initialisation de la méthode de mutateur de Id_adresse
		void setId_date(int);										// Initialisation de la méthode de mutateur de Id_date
		int getId_Personnel(void);									// Initialisation de la méthode d'accesseur de l'id_personnel
		System::String^ getNom(void);								// Initialisation de la méthode d'accesseur de Nom
		System::String^ getPrenom(void);							// Initialisation de la méthode d'accesseur de Prenom
		System::String^ getPoste(void);								// Initialisation de la méthode d'accesseur de Poste
		int getId_adresse(void);									// Initialisation de la méthode d'accesseur de l'id_adresse
		int getId_date(void);										// Initialisation de la méthode d'accesseur de l'id_date
	};
}
