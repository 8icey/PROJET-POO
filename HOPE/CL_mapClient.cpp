#include "CL_mapClient.h"
#include "CL_svcClient.h"

namespace NS_Comp {

    String^ CL_mapClient::Select(void)
    {
        // Retourne la requête sql d'affichage du client

        return "SELECT [Client].[id_client], [Client].[Nom], [Client].[Prenom], [Adresse_liv].[Adresse] AS [Adresse livraison], [Adresse_liv].[Ville] AS [Ville livraison], [Adresse_liv].[Cp] AS [Code postal livraison], [Adresse_fact].[Adresse] AS [Adresse facturation], [Adresse_fact].[Ville] AS [Ville facturation], [Adresse_fact].[Cp] AS [Code postal facturation], [Date_anniv].[Date] AS [Date d'anniversaire], [Date_premier_achat].[Date] AS [Date premier achat]" +
            "FROM [Projet_POO].[dbo].[Client]" +
            "INNER JOIN [Projet_POO].[dbo].[Adresse] AS [Adresse_liv] ON [Client].[id_adresse] = [Adresse_liv].[id_adresse]" +
            "INNER JOIN [Projet_POO].[dbo].[Adresse] AS [Adresse_fact] ON [Client].[id_adresse_Facture_a] = [Adresse_fact].[id_adresse]" +
            "INNER JOIN [Projet_POO].[dbo].[Date] AS [Date_anniv] ON [Client].[id_date] = [Date_anniv].[id_date]" +
            "INNER JOIN [Projet_POO].[dbo].[Date] AS [Date_premier_achat] ON [Client].[id_date_premier_achat_le] = [Date_premier_achat].[id_date]";
    }

    String^ CL_mapClient::Insert(void)
    {
        // Retourne la requête sql d'ajout du client

        return "INSERT INTO [Projet_POO].[dbo].[Client] (Nom, Prenom, id_adresse, id_adresse_Facture_a, Id_date, Id_date_premier_achat_le)" +
            "VALUES ('" + this->Nom + "','" + this->Prenom + "','" + this->id_adresseLiv + "','" + this->id_adresseFact + "','" + this->id_dateAnniv + "','" + this->id_datePremierAchat + "');";
    }


    String^ CL_mapClient::Delete(void)
    {
        // Retourne la requête sql de suppression du client

        return
            "ALTER TABLE [Projet_POO].[dbo].[Client] NOCHECK CONSTRAINT ALL; " +
            "BEGIN TRANSACTION; " +
            "DELETE FROM [Projet_POO].[dbo].[Date] " +
            "WHERE Id_date IN ( " +
            "  SELECT c.Id_date " +
            "  FROM [Projet_POO].[dbo].[Client] c " +
            "  WHERE c.id_client = " + this->getIdClient() + "); " +
            "DELETE FROM [Projet_POO].[dbo].[Adresse] " +
            "WHERE id_adresse IN ( " +
            "  SELECT c.id_adresse_Facture_a " +
            "  FROM [Projet_POO].[dbo].[Client] c " +
            "  WHERE c.id_client = " + this->getIdClient() + "); " +
            "DELETE FROM [Projet_POO].[dbo].[Adresse] " +
            "WHERE id_adresse IN ( " +
            "  SELECT c.id_adresse " +
            "  FROM [Projet_POO].[dbo].[Client] c " +
            "  WHERE c.id_client = " + this->getIdClient() + "); " +
            "DELETE FROM [Projet_POO].[dbo].[Client] " +
            "WHERE id_client = " + this->getIdClient() + "; " +
            "COMMIT; " +
            "ALTER TABLE [Projet_POO].[dbo].[Client] WITH CHECK CHECK CONSTRAINT ALL;";




    }


    /// Mutateurs ///

    void CL_mapClient::setIdClient(int id_client)
    {
        this->id_client = id_client;
    }

    void CL_mapClient::setNom(String^ Nom)
    {
        this->Nom = Nom;
    }

    void CL_mapClient::setPrenom(String^ Prenom)
    {
        this->Prenom = Prenom;
    }

    void CL_mapClient::setIdAdresseLiv(int idAdresseLiv)
    {
        this->id_adresseLiv = idAdresseLiv;
    }

    void CL_mapClient::setIdAdresseFact(int idAdresseFact)
    {
        this->id_adresseFact = idAdresseFact;
    }

    void CL_mapClient::setIdDateAnniv(int idDateAnniv)
    {
        this->id_dateAnniv = idDateAnniv;
    }

    void CL_mapClient::setIdDatePremierAchat(int idDatePremierAchat)
    {
        this->id_datePremierAchat = idDatePremierAchat;
    }

    /// Accesseurs ///

    int CL_mapClient::getIdClient(void)
    {
        return this->id_client;
    }

    String^ CL_mapClient::getNom(void)
    {
        return this->Nom;
    }

    String^ CL_mapClient::getPrenom(void)
    {
        return this->Prenom;
    }

    int CL_mapClient::getIdAdresseLiv(void)
    {
        return this->id_adresseLiv;
    }

    int CL_mapClient::getIdAdresseFact(void)
    {
        return this->id_adresseFact;
    }

    int CL_mapClient::getIdDateAnniv(void)
    {
        return this->id_dateAnniv;
    }

    int CL_mapClient::getIdDatePremierAchat(void)
    {
        return this->id_datePremierAchat;
    }
}