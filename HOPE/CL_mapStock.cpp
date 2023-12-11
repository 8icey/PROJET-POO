#include "CL_mapStock.h"

namespace NS_Comp {
    String^ CL_mapStock::Select(void)
    {
        // Retourne la requête sql d'affichage du stock

        return "SELECT *" +
            "FROM [Projet_POO].[dbo].[Articles]";
    }

    String^ CL_mapStock::Insert(void)    // Fonctionne mais ne veut pas prendre de virgule. Pourquoi???
    {
        // Retourne la requête sql d'ajout du stock

        return "INSERT INTO [Projet_POO].[dbo].[Articles] (Reference, Nature, Quantite, Seuil_Reapprovisionnement, Couleur, Taux_tva, Prix_unitaire_ht, Prix_unitaire_ttc, Prix_unitaire_tva)" +
            "VALUES ('" + this->Reference + "','" + this->Nature + "','" + this->Quantite + "','" + this->SeuilReap + "','" + this->Couleur + "','" + this->Taux_tva + "','" + this->Prix_unitaire_HT + "','" + this->Prix_unitaire_TTC + "','" + this->Prix_unitaire_TVA + "');";
    }

    String^ CL_mapStock::Update(void)
    {
        // Retourne la requête sql de modification du stock

        return "UPDATE [Projet_POO].[dbo].[Articles]" +
            "SET Reference='" + this->Reference + "', Nature='" + this->Nature + "', Quantite='" + this->Quantite + "', Seuil_Reapprovisionnement='" + this->Quantite + "', Couleur='" + this->Couleur + "', Taux_tva='" + this->Taux_tva + "', Prix_unitaire_ht='" + this->Prix_unitaire_HT + "', Prix_unitaire_ttc='" + this->Prix_unitaire_TTC + "', Prix_unitaire_tva='" + this->Prix_unitaire_TVA + "'" +
            "WHERE(Id_articles='" + this->id_articles + "');";
    }

    String^ CL_mapStock::Delete(void)
    {
        // Retourne la requête sql de suppression du stock

        return "DELETE FROM [Projet_POO].[dbo].[Articles]" +
            "WHERE(Id_articles='" + this->getIdArticles() + "');";
    }

    /// Mutateurs ///

    void CL_mapStock::setIdArticles(int id_articles)
    {
        this->id_articles = id_articles;
    }

    void CL_mapStock::setRef(System::String^ Ref)
    {
        this->Reference = Ref;
    }

    void CL_mapStock::setNature(String^ Nature)
    {
        this->Nature = Nature;
    }

    void CL_mapStock::setQuantite(int Quantite)
    {
        this->Quantite = Quantite;
    }

    void CL_mapStock::setSeuilReap(int SeuilReap)
    {
        this->SeuilReap = SeuilReap;
    }

    void CL_mapStock::setCouleur(String^ Couleur)
    {
        this->Couleur = Couleur;
    }

    void CL_mapStock::setTauxTVA(float TVA)
    {
        this->Taux_tva = TVA;
    }

    void CL_mapStock::setPrixUnitaireHT(float Prix_unitaire_HT)
    {
        this->Prix_unitaire_HT = Prix_unitaire_HT;
    }

    void CL_mapStock::setPrixUnitaireTTC(float Prix_unitaire_TTC)
    {
        this->Prix_unitaire_TTC = Prix_unitaire_TTC;
    }

    void CL_mapStock::setPrixUnitaireTVA(float Prix_unitaire_TVA)
    {
        this->Prix_unitaire_TVA = Prix_unitaire_TVA;
    }

    /// Accesseurs ///

    int CL_mapStock::getIdArticles(void)
    {
        return this->id_articles;
    }

    String^ CL_mapStock::getRef(void)
    {
        return this->Reference;
    }

    String^ CL_mapStock::getNature(void)
    {
        return this->Nature;
    }

    int CL_mapStock::getQuantite(void)
    {
        return this->Quantite;
    }

    int CL_mapStock::getSeuilReap(void)
    {
        return this->SeuilReap;
    }

   String^ CL_mapStock::getCouleur(void)
    {
        return this->Couleur;
    }

    float CL_mapStock::getTauxTVA(void)
    {
        return this->Taux_tva;
    }

    float CL_mapStock::getPrixUnitaireHT(void)
    {
        return this->Prix_unitaire_HT;
    }

    float CL_mapStock::getPrixUnitaireTTC(void)
    {
        return this->Prix_unitaire_TTC;
    }

    float  CL_mapStock::getPrixUnitaireTVA(void)
    {
        return this->Prix_unitaire_TVA;
    }
}