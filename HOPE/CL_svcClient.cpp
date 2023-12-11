#include "CL_svcClient.h"

namespace NS_SVC {
    CL_svcClient::CL_svcClient(void)
    {
        this->oData = gcnew NS_Comp::CL_CAD();                                          // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
        this->oMappTB_Client = gcnew NS_Comp::CL_mapClient();                         // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Client
        this->oMappTB_Adresse_liv = gcnew NS_Comp::CL_mapAdresse();                   // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Adresse
        this->oMappTB_Adresse_fact = gcnew NS_Comp::CL_mapAdresse();                  // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Adresse
        this->oMappTB_Date_anniv = gcnew NS_Comp::CL_mapDate();                       // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Date
        this->oMappTB_Date_Premier_achat = gcnew NS_Comp::CL_mapDate();               // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Date
    }

    Data::DataSet^ CL_svcClient::selectionnerTousLesClients(String^ dataTableName)
    {
        String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

        sql = this->oMappTB_Client->Select();                                           // Stocke requête sql d'affichage du client
        return this->oData->getRows(sql, dataTableName);                                // retourne les Rows obtenus par la fonction getRows
    }

    void CL_svcClient::ajouterUnClient(String^ nom, String^ prenom, String^ adresse_liv, String^ ville_liv, int cp_liv, String^ adresse_fact, String^ ville_fact, int cp_fact, String^ date_anniv, String^ date_premier_achat)
    {
        String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql
        int id_adresseLiv;                                                              // Initialisation variable locale pour stocker l'id_adresseLiv
        int id_adresseFact;                                                             // Initialisation variable locale pour stocker l'id_adresseFact
        int id_dateAnniv;                                                               // Initialisation variable locale pour stocker l'id_dateAnniv
        int id_datePremierAchat;                                                        // Initialisation variable locale pour stocker l'id_datePremierAchat

        //////////////////////////////////////////////////////////Adresse livraison//////////////////////////////////////////////////////////
        this->oMappTB_Adresse_liv->setAdresse(adresse_liv);                             // Stockage valeur paramètre adresse_liv dans attribut Adresse de l'objet oMappTB_Adresse_liv
        this->oMappTB_Adresse_liv->setVille(ville_liv);                                 // Stockage valeur paramètre ville_liv dans attribut Ville de l'objet oMappTB_Adresse_liv
        this->oMappTB_Adresse_liv->setCp(cp_liv);                                       // Stockage valeur paramètre cp_liv dans attribut Cp de l'objet oMappTB_Adresse_liv

        sql = this->oMappTB_Adresse_liv->Insert();                                      // Stockage requête sql d'ajout d'une adresse
        id_adresseLiv = this->oData->actionRowsID(sql);                                 // Exécution de la requête sql stockée et stockage de l'id_adresse retourné dans la variable id_adresseLiv

        //////////////////////////////////////////////////////////Adresse facturation//////////////////////////////////////////////////////////
        this->oMappTB_Adresse_fact->setAdresse(adresse_fact);                           // Stockage valeur paramètre adresse_fact dans attribut Adresse de l'objet oMappTB_Adresse_fact
        this->oMappTB_Adresse_fact->setVille(ville_fact);                               // Stockage valeur paramètre ville_fact dans attribut Ville de l'objet oMappTB_Adresse_fact
        this->oMappTB_Adresse_fact->setCp(cp_fact);                                     // Stockage valeur paramètre cp_fact dans attribut Cp de l'objet oMappTB_Adresse_fact

        sql = this->oMappTB_Adresse_fact->Insert();                                     // Stockage requête sql d'ajout d'une adresse
        id_adresseFact = this->oData->actionRowsID(sql);                                // Exécution de la requête sql stockée et stockage de l'id_adresse retourné dans la variable id_adresseFact

        //////////////////////////////////////////////////////////Date anniversaire//////////////////////////////////////////////////////////
        this->oMappTB_Date_anniv->setDate(date_anniv);                                  // Stockage valeur paramètre date_anniv dans attribut Date de l'objet oMappTB_Date_anniv

        sql = this->oMappTB_Date_anniv->Insert();                                       // Stockage requête sql d'ajout d'une date
        id_dateAnniv = this->oData->actionRowsID(sql);                                  // Exécution de la requête sql stockée et stockage de l'id_date retourné dans la variable id_dateAnniv
        //////////////////////////////////////////////////////////Date premier achat//////////////////////////////////////////////////////////
        this->oMappTB_Date_Premier_achat->setDate(date_premier_achat);                  // Stockage valeur paramètre date_premier_achat dans attribut Date de l'objet oMappTB_Date_Premier_achat

        sql = this->oMappTB_Date_Premier_achat->Insert();                               // Stockage requête sql d'ajout d'une date
        id_datePremierAchat = this->oData->actionRowsID(sql);                           // Exécution de la requête sql stockée et stockage de l'id_date retourné dans la variable id_datePremierAchat
        //////////////////////////////////////////////////////////Client//////////////////////////////////////////////////////////
        this->oMappTB_Client->setNom(nom);                                              // Stockage valeur paramètre nom dans attribut Nom de l'objet oMappTB_Client
        this->oMappTB_Client->setPrenom(prenom);                                        // Stockage valeur paramètre nom dans attribut Prenom de l'objet oMappTB_Client
        this->oMappTB_Client->setIdAdresseLiv(id_adresseLiv);                           // Stockage valeur variable id_adresseLiv dans attribut id_adresseLiv de l'objet oMappTB_Personnel
        this->oMappTB_Client->setIdAdresseFact(id_adresseFact);                         // Stockage valeur variable id_adresseFact dans attribut id_adresseFact de l'objet oMappTB_Personnel
        this->oMappTB_Client->setIdDateAnniv(id_dateAnniv);                             // Stockage valeur variable id_dateAnniv dans attribut id_dateAnniv de l'objet oMappTB_Personnel
        this->oMappTB_Client->setIdDatePremierAchat(id_datePremierAchat);               // Stockage valeur variable id_datePremierAchat dans attribut id_datePremierAchat de l'objet oMappTB_Personnel

        sql = this->oMappTB_Client->Insert();                                           // Stockage requête sql d'ajout d'un client
        this->oData->actionRows(sql);                                                   // Exécution de la requête sql stockée
    }

    void CL_svcClient::modifierUnClient(int id_client, String^ nom, String^ prenom, String^ adresse_liv, String^ ville_liv, int cp_liv, String^ adresse_fact, String^ ville_fact, int cp_fact, String^ date_anniv, String^ date_premier_achat)
    {
        String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

        this->oMappTB_Client->setIdClient(id_client);                                   // Stockage valeur paramètre id_client dans attribut id_client de l'objet oMappTB_Client

        //////////////////////////////////////////////////////////Adresse livraison//////////////////////////////////////////////////////////
        this->oMappTB_Adresse_liv->setAdresse(adresse_liv);                             // Stockage valeur paramètre adresse_liv dans attribut Adresse de l'objet oMappTB_Adresse_liv 
        this->oMappTB_Adresse_liv->setVille(ville_liv);                                 // Stockage valeur paramètre ville_liv dans attribut Ville de l'objet oMappTB_Adresse_liv
        this->oMappTB_Adresse_liv->setCp(cp_liv);                                       // Stockage valeur paramètre cp_liv dans attribut Cp de l'objet oMappTB_Adresse_liv

        //////////////////////////////////////////////////////////Adresse facturation//////////////////////////////////////////////////////////
        this->oMappTB_Adresse_fact->setAdresse(adresse_fact);                           // Stockage valeur paramètre adresse_fact dans attribut Adresse de l'objet oMappTB_Adresse_fact
        this->oMappTB_Adresse_fact->setVille(ville_fact);                               // Stockage valeur paramètre ville_fact dans attribut Ville de l'objet oMappTB_Adresse_fact
        this->oMappTB_Adresse_fact->setCp(cp_fact);                                     // Stockage valeur paramètre cp_fact dans attribut Cp de l'objet oMappTB_Adresse_fact

        //////////////////////////////////////////////////////////Date anniversaire//////////////////////////////////////////////////////////
        this->oMappTB_Date_anniv->setDate(date_anniv);                                  // Stockage valeur paramètre date_anniv dans attribut Date de l'objet oMappTB_Date_anniv

        //////////////////////////////////////////////////////////Date premier achat//////////////////////////////////////////////////////////
        this->oMappTB_Date_Premier_achat->setDate(date_premier_achat);                  // Stockage valeur paramètre date_premier_achat dans attribut Date de l'objet oMappTB_Date_Premier_achat

        //////////////////////////////////////////////////////////Client//////////////////////////////////////////////////////////
        this->oMappTB_Client->setNom(nom);                                              // Stockage valeur paramètre nom dans attribut Nom de l'objet oMappTB_Client
        this->oMappTB_Client->setPrenom(prenom);                                        // Stockage valeur paramètre nom dans attribut Prenom de l'objet oMappTB_Client

        // Stockage et définition de la requête sql de modification d'un client
        sql = "UPDATE Client" +
            " SET Nom ='" + oMappTB_Client->getNom() + "', Prenom = '" + oMappTB_Client->getPrenom() + "'" +
            " WHERE(id_client ='" + oMappTB_Client->getIdClient() + "')" +
            "UPDATE Adresse" +
            " SET Adresse ='" + oMappTB_Adresse_liv->getAdresse() + "', Ville = '" + oMappTB_Adresse_liv->getVille() + "', Cp ='" + oMappTB_Adresse_liv->getCp() + "'" +
            " FROM Adresse INNER JOIN Client ON Adresse.id_adresse = Client.id_adresse" +
            " WHERE(id_client ='" + oMappTB_Client->getIdClient() + "')" +
            "UPDATE Adresse" +
            " SET Adresse ='" + oMappTB_Adresse_fact->getAdresse() + "', Ville = '" + oMappTB_Adresse_fact->getVille() + "', Cp ='" + oMappTB_Adresse_fact->getCp() + "'" +
            " FROM Adresse INNER JOIN Client ON Adresse.id_adresse = Client.id_adresse_Facture_a" +
            " WHERE(id_client ='" + oMappTB_Client->getIdClient() + "')" +
            "UPDATE Date" +
            " SET Date ='" + oMappTB_Date_anniv->getDate() + "'" +
            " FROM Date INNER JOIN Client ON Date.Id_date = Client.Id_date" +
            " WHERE(id_client ='" + oMappTB_Client->getIdClient() + "')" +
            "UPDATE Date" +
            " SET Date ='" + oMappTB_Date_Premier_achat->getDate() + "'" +
            " FROM Date INNER JOIN Client ON Date.Id_date = Client.Id_date_premier_achat_le" +
            " WHERE(id_client ='" + oMappTB_Client->getIdClient() + "')";
        this->oData->actionRows(sql);                                                   // Exécution de la requête sql stockée
    }

    void CL_svcClient::supprimerUnClient(int id_client)
    {
        String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

        this->oMappTB_Client->setIdClient(id_client);                                   // Stockage valeur paramètre id_client dans attribut id_client de l'objet oMappTB_Client

        sql = this->oMappTB_Client->Delete();                                           // Stockage requête sql de suppression d'un client
        this->oData->actionRows(sql);                                                   // Exécution de la requête sql stockée
    }
}