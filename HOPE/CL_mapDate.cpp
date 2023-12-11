#include "CL_mapDate.h"

namespace NS_Comp {
    String^ CL_mapDate::Insert(void)
    {
        return "INSERT INTO Date (Date) VALUES ('" + this->Date + "');SELECT @@IDENTITY";
    }

    String^ CL_mapDate::Update(void)
    {
        return "UPDATE[Projet_POO].[dbo].[Date]" +
            "SET Date='" + this->getDate() + '"' +
            "WHERE(Id_date='" + this->getIdDate() + "');SELECT @@IDENTITY";
    }

    String^ CL_mapDate::Delete(void)
    {
        return "DELETE FROM Date " +
            "WHERE(id_date = " + this->getIdDate() + ");";
    }

    void CL_mapDate::setIdDate(int id_date)
    {
        this->id_date = id_date;
    }

    void CL_mapDate::setDate(String^ date)
    {
        this->Date = date;
    }

    String^ CL_mapDate::getDate(void)
    {
        return this->Date;
    }

    int CL_mapDate::getIdDate(void)
    {
        return this->id_date;
    }
}