#include "CL_mapCommande.h"


namespace NS_Comp {											// Définition namespace NS_Comp pour représenter la couche Composant de l'architecture ihm

	String^ CL_mapCommande::Select(void)
	{
		// Retourne la requête sql d'affichage de la commande

		return "SELECT Commande.Id_commande, Commande.Reference AS [Référence commande], DateEmission.Date AS [Date d'émission], DateLiv.Date AS [Date de livraison]" +	//, Contient.Nombre_articles AS [Nombre d'articles]
			" FROM Commande" +
			" INNER JOIN Date AS DateEmission ON DateEmission.Id_date = Commande.Id_date" +
			" INNER JOIN Date AS DateLiv ON DateLiv.Id_date = Commande.Id_date_livre_le";
	}

	String^ CL_mapCommande::Insert(void)
	{
		// Retourne la requête sql d'ajout de la commande

		return "INSERT INTO [Projet_POO].[dbo].[Commande] (Reference, Id_date, Id_date_livre_le, id_client)" +
			" VALUES ('" + this->Ref + "','" + this->id_dateEmission + "','" + this->id_dateLivraison + "','" + this->id_client + "');SELECT @@IDENTITY";
	}

	String^ CL_mapCommande::Delete(void)
	{

		return "ALTER TABLE Projet_POO.dbo.Commande NOCHECK CONSTRAINT ALL; " +
			"BEGIN TRANSACTION; " +
			"DELETE FROM Projet_POO.dbo.Date " +
			"WHERE Id_date IN ( " +
			"  SELECT c.Id_date " +
			"  FROM Projet_POO.dbo.Commande c " +
			"  WHERE c.Id_commande = " + this->getIdCommande() + "" +
			"); " +
			"DELETE FROM Projet_POO.dbo.Date " +
			"WHERE Id_date IN ( " +
			"  SELECT c.Id_date_livre_le " +
			"  FROM Projet_POO.dbo.Commande c " +
			"  WHERE c.Id_commande = " + this->getIdCommande() + "" +
			"); " +
			"DELETE FROM Projet_POO.dbo.Client " +
			"WHERE id_Client IN ( " +
			"  SELECT c.id_client " +
			"  FROM Projet_POO.dbo.Commande c " +
			"  WHERE c.Id_commande = " + this->getIdCommande() + "" +
			"); " +
			"DELETE FROM Projet_POO.dbo.Commande " +
			"WHERE Id_commande = " + this->getIdCommande() + " ; " +
			"COMMIT; " +
			"ALTER TABLE Projet_POO.dbo.Client WITH CHECK CHECK CONSTRAINT ALL;";

	}

	/// Mutateurs & Accesseurs///

	void CL_mapCommande::setIdCommande(int id_commande)
	{
		this->id_commande = id_commande;
	}

	void CL_mapCommande::setIdDateEmission(int id_dateEmission)
	{
		this->id_dateEmission = id_dateEmission;
	}

	void CL_mapCommande::setIdDateLivraison(int id_dateLivraison)
	{
		this->id_dateLivraison = id_dateLivraison;
	}

	int CL_mapCommande::getIdCommande(void)
	{
		return this->id_commande;
	}

	void CL_mapCommande::setIdClient(int id_client)
	{
		this->id_client = id_client;
	}

	int CL_mapCommande::getIdDateEmission(void)
	{
		return this->id_dateEmission;
	}

	int CL_mapCommande::getIdDateLivraison(void)
	{
		return this->id_dateLivraison;
	}

	void CL_mapCommande::setRef(String^ Ref)
	{
		this->Ref = Ref;
	}

	int CL_mapCommande::getIdClient(void)
	{
		return this->id_client;
	}


	void CL_mapCommande::setPrenomClient(String^ PrenomClient)
	{
		this->PrenomClient = PrenomClient;
	}

	void CL_mapCommande::setNomClient(String^ NomClient)
	{
		this->NomClient = NomClient;
	}

	void CL_mapCommande::setAnneeCommande(System::String^ AnneeCommande)
	{
		this->AnneeCommande = AnneeCommande;
	}

	void CL_mapCommande::setVilleLivraison(String^ VilleLivraison)
	{
		this->VilleLivraison = VilleLivraison;
	}

	String^ CL_mapCommande::getRef(void)
	{
		return this->Ref;
	}

	String^ CL_mapCommande::getPrenomClient(void)
	{
		return this->PrenomClient;
	}

	String^ CL_mapCommande::getNomClient(void)
	{
		return this->NomClient;
	}

	String^ CL_mapCommande::getAnneeCommande(void)
	{
		return this->AnneeCommande;
	}

	String^ CL_mapCommande::getVilleLivraison(void)
	{
		return this->VilleLivraison;
	}
}