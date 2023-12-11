#include "CL_mapAdresse.h"

namespace NS_Comp {

    CL_mapAdresse::CL_mapAdresse(void)
    {
    }

    String^ CL_mapAdresse::Insert(void)
    {
        return "INSERT INTO Adresse (Adresse, Ville, Cp) VALUES ('" + this->Adresse + "','" + this->Ville + "','" + this->Cp + "');SELECT @@IDENTITY";
    }

    String^ CL_mapAdresse::Update(void)
    {
        return "UPDATE [Projet_POO].[dbo].[Adresse]" +
            "SET Adresse='" + this->getAdresse() + "', Ville='" + this->getVille() + "', Cp='" + this->getCp() + '"' +
            "WHERE(id_adresse='" + this->getIdAdresse() + "');SELECT @@IDENTITY";
    }

    /*String^ CL_mapAdresse::Delete(void)
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }*/

    void CL_mapAdresse::setIdAdresse(int id_adresse)
    {
        this->id_adresse = id_adresse;
    }

    void CL_mapAdresse::setAdresse(String^ adresse)
    {
        this->Adresse = adresse;
    }

    void CL_mapAdresse::setVille(String^ ville)
    {
        this->Ville = ville;
    }

    void CL_mapAdresse::setCp(int cp)
    {
        this->Cp = cp;
    }

    int CL_mapAdresse::getIdAdresse(void)
    {
        return this->id_adresse;
    }

    String^ CL_mapAdresse::getAdresse(void)
    {
        return this->Adresse;
    }

    String^ CL_mapAdresse::getVille(void)
    {
        return this->Ville;
    }

    int CL_mapAdresse::getCp(void)
    {
        return this->Cp;
    }
}