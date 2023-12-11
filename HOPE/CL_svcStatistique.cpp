
#include "CL_svcStatistique.h"
using namespace System;
namespace NS_SVC {

	CL_svcStatistique::CL_svcStatistique(void) {

		this->cad = gcnew NS_Comp::CL_CAD();
		this->stat = gcnew NS_Comp::CL_mapstat();
	}

	DataSet^ CL_svcStatistique::sstat1(String^ tab1) {
		String^ sql;

		sql = "SELECT AVG(totale_remise) AS panier_moyen_apres_remise FROM(SELECT AVG(ar.Prix_ht * (1 - ar.remis) * (1 + ar.Taux_Tva)) AS totale_remise FROM Commande c JOIN contient co ON c.id_commande = co.id_commande JOIN Article ar ON co.id_article = ar.id_article) AS totale;";
		return this->cad->getRows(sql, tab1);
	}
	DataSet^ CL_svcStatistique::sstat2(String^ tab2, int month) {
		String^ sql;

		sql = "SELECT SUM(total_amount_after_discount) AS chiffre_affaires FROM(SELECT c.id_commande, SUM(a.Prix_ht * co.quantite * (1 - a.remis)) AS total_amount_after_discount FROM Commande c JOIN contient co ON c.id_commande = co.id_commande JOIN Article a ON co.id_article = a.id_article JOIN Dates d ON c.date_livr = d.id_date WHERE MONTH(d.D) = " +month+ "GROUP BY c.id_commande) AS monthly_totals; ";
		return this->cad->getRows(sql, tab2);
	}
	DataSet^ CL_svcStatistique::sstat3(String^ tab3) {
		String^ sql;

		sql = "SELECT * FROM Article WHERE Stock < Seuil_Reapprovisionnement;";
		return this->cad->getRows(sql, tab3);
	}
	DataSet^ CL_svcStatistique::sstat4(String^ tab4, int c) {
		String^ sql;

		sql = "SELECT c.id_Client, cl.Nom, cl.Prenom, SUM(a.Prix_ht * co.quantite * (1 - a.remis)) AS total_amount_purchases FROM Client cl INNER JOIN Commande c ON cl.id_Client = c.id_Client LEFT JOIN contient co ON c.id_commande = co.id_commande LEFT JOIN Article a ON co.id_article = a.id_article WHERE c.id_Client = "+ c + " GROUP BY c.id_Client, cl.Nom, cl.Prenom; ";
		return this->cad->getRows(sql, tab4);
	}
	DataSet^ CL_svcStatistique::sstat5(String^ tab5) {
	String^ sql;

	sql = "SELECT TOP 10 Article.Id_article, Article.nom_article, SUM(contient.quantite) AS total_vendu FROM contient JOIN Article ON contient.Id_article = Article.Id_article GROUP BY Article.Id_article, Article.nom_article ORDER BY total_vendu DESC;";
		return this->cad->getRows(sql, tab5);
	}
	DataSet^ CL_svcStatistique::sstat6(String^ tab6) {
		String^ sql;

		sql = "SELECT TOP 10 Article.Id_article, Article.nom_article, SUM(contient.quantite) AS total_vendu FROM contient JOIN Article ON contient.Id_article = Article.Id_article GROUP BY Article.Id_article, Article.nom_article ORDER BY total_vendu ASC;";
		return this->cad->getRows(sql, tab6);
	}
	DataSet^ CL_svcStatistique::sstat7(String^ tab7) {
		String^ sql;

		sql = "SELECT SUM(a.Stock * a.Prix_ht * (1 - a.remis)) AS total_commercial_value FROM Article a;";
		return this->cad->getRows(sql, tab7);
	}
	DataSet^ CL_svcStatistique::sstat8(String^ tab8) {
		String^ sql;

		sql = "SELECT SUM(a.Stock * a.Prix_ht) AS total_purchase_value FROM Article a;";
		return this->cad->getRows(sql, tab8);
	}
	DataSet^ CL_svcStatistique::sstat9t(String^ tab9, String^ t,int  id) {
		String^ sql;

		sql = "UPDATE Article SET Taux_Tva = Taux_Tva + '" + t +"' WHERE id_article = '"+ id  +"' ; ";
		return this->cad->getRows(sql, tab9);
	}
	DataSet^ CL_svcStatistique::sstat9m(String^ tab91, String^ m, int id) {
		String^ sql;

		sql = "UPDATE Article SET Prix_ht = Prix_ht * '"+  m  +"'  WHERE id_article = '" + id + "' ; ";
		return this->cad->getRows(sql, tab91);
	}
	DataSet^ CL_svcStatistique::sstat9r(String^ tab92, String^ r, int id ) {
		String^ sql;

		sql = "UPDATE Article SET remis = remis + '" + r + "' WHERE id_article = '" + id + "' ; ";
		return this->cad->getRows(sql, tab92);
	}
	DataSet^ CL_svcStatistique::sstat9d(String^ tab93, String^ d, int id ) {
		String^ sql;
		sql= "UPDATE Article SET Prix_ht = Prix_ht * '" + d + "' WHERE id_article =  '" + id + "' ; ";
		/*sql = this->stat->stat9dem();*/
		return this->cad->getRows(sql, tab93);
	}


}