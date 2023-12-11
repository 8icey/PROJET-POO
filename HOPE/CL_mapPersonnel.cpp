#include "CL_mapPersonnel.h"
#include"CL_mapAdresse.h"
#include"CL_mapDate.h"


namespace NS_Comp {

    String^ CL_mapPersonnel::Select(void)
    {
        // Retour de la requête SQL permettant d'afficher le personnel

        return "SELECT [Personnel].[id_personnel], [Personnel].[Nom], [Personnel].[Prenom], [Personnel].[Poste], [Adresse].[Adresse], [Adresse].[Ville], [Adresse].[Cp] AS [Code postal], [Date].[Date] AS [Date d'embauche]"
            + "FROM [Projet_POO].[dbo].[Personnel]"
            + "INNER JOIN [Projet_POO].[dbo].[Adresse] ON [Personnel].[id_adresse] = [Adresse].[id_adresse]"
            + "INNER JOIN [Projet_POO].[dbo].[Date] ON [Personnel].[id_date] = [Date].[Id_date]";
    }

    String^ CL_mapPersonnel::Insert(void)
    {
        // Retour de la requête SQL permettant d'ajouter le personnel

        return "INSERT INTO Personnel (Nom, Prenom, Poste, id_adresse, Id_date)" +
            "VALUES('" + this->Nom + "','" + this->Prenom + "','" + this->Poste + "','" + this->id_adresse + "','" + this->id_date + "');SELECT @@IDENTITY;";
    }

    String^ CL_mapPersonnel::Delete(void)
    {
        // Retour de la requête SQL permettant de supprimer le personnel

        return

            "BEGIN TRANSACTION; "
            "DELETE FROM [Projet_POO].[dbo].[Date] "
            "WHERE Id_date IN ( "
            "SELECT p.id_date "
            "FROM [Projet_POO].[dbo].[Personnel] p "
            "WHERE p.id_personnel = " + this->getId_Personnel() + "); "
            "DELETE FROM [Projet_POO].[dbo].[Adresse] "
            "WHERE id_adresse IN ( "
            "SELECT p.id_adresse "
            "FROM [Projet_POO].[dbo].[Personnel] p "
            "WHERE p.id_personnel = " + this->getId_Personnel() + "); "
            "DELETE FROM [Projet_POO].[dbo].[Personnel] "
            "WHERE id_personnel = " + this->getId_Personnel() + "; "
            "COMMIT;";



    }

    /// Mutateurs ///

    void CL_mapPersonnel::setId_Personnel(int Id)
    {
        this->id_personnel = Id;
    }

    void CL_mapPersonnel::setNom(String^ Nom)
    {
        this->Nom = Nom;
    }

    void CL_mapPersonnel::setPrenom(String^ Prenom)
    {
        this->Prenom = Prenom;
    }

    void CL_mapPersonnel::setPoste(String^ poste)
    {
        this->Poste = poste;
    }

    void CL_mapPersonnel::setId_adresse(int id_adresse)
    {
        this->id_adresse = id_adresse;
    }

    void CL_mapPersonnel::setId_date(int id_date)
    {
        this->id_date = id_date;
    }

    /// Accesseurs ///

    int CL_mapPersonnel::getId_Personnel(void)
    {
        return this->id_personnel;
    }

    String^ CL_mapPersonnel::getNom(void)
    {
        return this->Nom;
    }

    String^ CL_mapPersonnel::getPrenom(void)
    {
        return this->Prenom;
    }

    String^ CL_mapPersonnel::getPoste(void)
    {
        return this->Poste;
    }

    int CL_mapPersonnel::getId_adresse(void)
    {
        return this->id_adresse;
    }

    int CL_mapPersonnel::getId_date(void)
    {
        return this->id_date;
    }

}