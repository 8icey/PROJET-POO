#include "CL_mapStatistique.h"
namespace NS_Comp {
	CL_mapstat::CL_mapstat() {

	}
	String^ CL_mapstat::stat1(void) {
		return "SELECT AVG(totale_remise) AS panier_moyen_apres_remise FROM( SELECT AVG(ar.Prix_ht * (1 - ar.remis) * (1 + ar.Taux_Tva)) AS totale_remise FROM Commande c JOIN contient co ON c.id_commande = co.id_commande JOIN Article ar ON co.id_article = ar.id_article) AS totale;";
			
				
				
				
				
		

	}
	String^ CL_mapstat::stat2(void) {
		return "SELECT SUM(total_amount_after_discount) AS chiffre_affaires FROM(SELECT c.id_commande, SUM(a.Prix_ht * co.quantite * (1 - a.remis)) AS total_amount_after_discount FROM Commande c JOIN contient co ON c.id_commande = co.id_commande JOIN Article a ON co.id_article = a.id_article JOIN Dates d ON c.date_livr = d.id_date WHERE MONTH(d.D) =  GROUP BY c.id_commande) AS monthly_totals;";

	}
	String^ CL_mapstat::stat3(void) {
		return "SELECT * FROM Article WHERE Stock < Seuil_Reapprovisionnement;";
	}
	String^ CL_mapstat::stat4(void) {
		return "SELECT c.id_Client, cl.Nom, cl.Prenom, SUM(a.Prix_ht * co.quantite * (1 - a.remis)) AS total_amount_purchases FROM Client cl INNER JOIN Commande c ON cl.id_Client = c.id_Client LEFT JOIN contient co ON c.id_commande = co.id_commande LEFT JOIN Article a ON co.id_article = a.id_article WHERE c.id_Client = 8 GROUP BY c.id_Client, cl.Nom, cl.Prenom;";
	}
	String^ CL_mapstat::stat5(void) {
		return "SELECT TOP 10 Article.Id_article, Article.nom_article, SUM(contient.quantite) AS total_vendu FROM contient JOIN Article ON contient.Id_article = Article.Id_article GROUP BY Article.Id_article, Article.nom_article ORDER BY total_vendu DESC;";

	}
	String^ CL_mapstat::stat6(void) {
		return"SELECT TOP 10 Article.Id_article, Article.nom_article, SUM(contient.quantite) AS total_vendu FROM contient JOIN Article ON contient.Id_article = Article.Id_article GROUP BY Article.Id_article, Article.nom_article ORDER BY total_vendu ASC;";
	}
	String^ CL_mapstat::stat7(void) {
		return "SELECT SUM(a.Stock * a.Prix_ht * (1 - a.remis)) AS total_commercial_value FROM Article a;";
	}
	String^ CL_mapstat::stat8(void) {
		return "SELECT SUM(a.Stock * a.Prix_ht) AS total_purchase_value FROM Article a;";
	}
	String^ CL_mapstat::stat9tva(void) {
		return "UPDATE Article SET Taux_Tva = Taux_Tva + 0.01 WHERE id_article IN(2);";
		
	}

	String^ CL_mapstat::stat9margec(void) {
		return "UPDATE Article SET Prix_ht = Prix_ht * 1.05  WHERE id_article IN(2);";

	}

	String^ CL_mapstat::stat9remise(void) {
		return  "UPDATE Article SET remis = remis + 0.05  WHERE id_article IN(2); ";

	}

	String^ CL_mapstat::stat9dem(void) {
		return "UPDATE Article SET Prix_ht = Prix_ht * 0.98 WHERE id_article IN(2);";

	}
}

