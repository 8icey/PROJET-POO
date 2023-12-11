#pragma once
#include "CL_svcStock.h"

namespace HOPE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de StockForm
	/// </summary>
	public ref class StockForm : public System::Windows::Forms::Form
	{
	public:
		StockForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~StockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: NS_SVC::CL_svcStock^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Button^ btn_select;
	private: System::Windows::Forms::Button^ btn_insert;

	private: System::Windows::Forms::TextBox^ txtbox_Ref;
	private: System::Windows::Forms::TextBox^ txtbox_Nature;
	private: System::Windows::Forms::TextBox^ txtbox_Quantite;
	private: System::Windows::Forms::TextBox^ txtbox_couleur;
	private: System::Windows::Forms::TextBox^ txtbox_tauxTVA;
	private: System::Windows::Forms::TextBox^ txtbox_PrixUHT;
	private: System::Windows::Forms::TextBox^ txtbox_PrixUTTC;
	private: System::Windows::Forms::TextBox^ txtbox_PrixUTVA;








	private: System::Windows::Forms::Label^ lbl_ref;
	private: System::Windows::Forms::Label^ lbl_nature;
	private: System::Windows::Forms::Label^ lbl_quantite;
	private: System::Windows::Forms::Label^ lbl_couleur;
	private: System::Windows::Forms::Label^ lbl_taux_tva;
	private: System::Windows::Forms::Label^ lbl_PrixUHT;
	private: System::Windows::Forms::Label^ lbl_PrixUTTC;
	private: System::Windows::Forms::Label^ lbl_PrixUTVA;
	private: System::Windows::Forms::TextBox^ txtbox_idArticle;
	private: System::Windows::Forms::Label^ lbl_idArticle;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ txtbox_SeuilReap;
	private: System::Windows::Forms::Label^ lbl_SeuilReap;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StockForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_select = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->txtbox_Ref = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Nature = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Quantite = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_couleur = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_tauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_PrixUHT = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_PrixUTTC = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_PrixUTVA = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ref = (gcnew System::Windows::Forms::Label());
			this->lbl_nature = (gcnew System::Windows::Forms::Label());
			this->lbl_quantite = (gcnew System::Windows::Forms::Label());
			this->lbl_couleur = (gcnew System::Windows::Forms::Label());
			this->lbl_taux_tva = (gcnew System::Windows::Forms::Label());
			this->lbl_PrixUHT = (gcnew System::Windows::Forms::Label());
			this->lbl_PrixUTTC = (gcnew System::Windows::Forms::Label());
			this->lbl_PrixUTVA = (gcnew System::Windows::Forms::Label());
			this->txtbox_idArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbl_idArticle = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->txtbox_SeuilReap = (gcnew System::Windows::Forms::TextBox());
			this->lbl_SeuilReap = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(290, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(379, 392);
			this->dataGridView1->TabIndex = 0;
			// 
			// btn_select
			// 
			this->btn_select->Location = System::Drawing::Point(15, 262);
			this->btn_select->Name = L"btn_select";
			this->btn_select->Size = System::Drawing::Size(107, 35);
			this->btn_select->TabIndex = 1;
			this->btn_select->Text = L"Afficher article";
			this->btn_select->UseVisualStyleBackColor = true;
			this->btn_select->Click += gcnew System::EventHandler(this, &StockForm::btn_select_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btn_insert->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_insert->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_insert->Location = System::Drawing::Point(156, 280);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(107, 79);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Enregistrer  article";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &StockForm::btn_insert_Click);
			// 
			// txtbox_Ref
			// 
			this->txtbox_Ref->Location = System::Drawing::Point(12, 73);
			this->txtbox_Ref->Name = L"txtbox_Ref";
			this->txtbox_Ref->Size = System::Drawing::Size(107, 20);
			this->txtbox_Ref->TabIndex = 3;
			// 
			// txtbox_Nature
			// 
			this->txtbox_Nature->Location = System::Drawing::Point(156, 38);
			this->txtbox_Nature->Name = L"txtbox_Nature";
			this->txtbox_Nature->Size = System::Drawing::Size(107, 20);
			this->txtbox_Nature->TabIndex = 4;
			// 
			// txtbox_Quantite
			// 
			this->txtbox_Quantite->Location = System::Drawing::Point(12, 125);
			this->txtbox_Quantite->Name = L"txtbox_Quantite";
			this->txtbox_Quantite->Size = System::Drawing::Size(107, 20);
			this->txtbox_Quantite->TabIndex = 5;
			// 
			// txtbox_couleur
			// 
			this->txtbox_couleur->Location = System::Drawing::Point(15, 187);
			this->txtbox_couleur->Name = L"txtbox_couleur";
			this->txtbox_couleur->Size = System::Drawing::Size(107, 20);
			this->txtbox_couleur->TabIndex = 7;
			// 
			// txtbox_tauxTVA
			// 
			this->txtbox_tauxTVA->Location = System::Drawing::Point(156, 125);
			this->txtbox_tauxTVA->Name = L"txtbox_tauxTVA";
			this->txtbox_tauxTVA->Size = System::Drawing::Size(107, 20);
			this->txtbox_tauxTVA->TabIndex = 8;
			// 
			// txtbox_PrixUHT
			// 
			this->txtbox_PrixUHT->Location = System::Drawing::Point(156, 187);
			this->txtbox_PrixUHT->Name = L"txtbox_PrixUHT";
			this->txtbox_PrixUHT->Size = System::Drawing::Size(107, 20);
			this->txtbox_PrixUHT->TabIndex = 9;
			// 
			// txtbox_PrixUTTC
			// 
			this->txtbox_PrixUTTC->Location = System::Drawing::Point(15, 236);
			this->txtbox_PrixUTTC->Name = L"txtbox_PrixUTTC";
			this->txtbox_PrixUTTC->Size = System::Drawing::Size(107, 20);
			this->txtbox_PrixUTTC->TabIndex = 10;
			// 
			// txtbox_PrixUTVA
			// 
			this->txtbox_PrixUTVA->Location = System::Drawing::Point(156, 236);
			this->txtbox_PrixUTVA->Name = L"txtbox_PrixUTVA";
			this->txtbox_PrixUTVA->Size = System::Drawing::Size(107, 20);
			this->txtbox_PrixUTVA->TabIndex = 11;
			// 
			// lbl_ref
			// 
			this->lbl_ref->AutoSize = true;
			this->lbl_ref->Location = System::Drawing::Point(9, 57);
			this->lbl_ref->Name = L"lbl_ref";
			this->lbl_ref->Size = System::Drawing::Size(57, 13);
			this->lbl_ref->TabIndex = 11;
			this->lbl_ref->Text = L"Référence";
			// 
			// lbl_nature
			// 
			this->lbl_nature->AutoSize = true;
			this->lbl_nature->Location = System::Drawing::Point(153, 13);
			this->lbl_nature->Name = L"lbl_nature";
			this->lbl_nature->Size = System::Drawing::Size(39, 13);
			this->lbl_nature->TabIndex = 12;
			this->lbl_nature->Text = L"Nature";
			// 
			// lbl_quantite
			// 
			this->lbl_quantite->AutoSize = true;
			this->lbl_quantite->Location = System::Drawing::Point(12, 109);
			this->lbl_quantite->Name = L"lbl_quantite";
			this->lbl_quantite->Size = System::Drawing::Size(47, 13);
			this->lbl_quantite->TabIndex = 13;
			this->lbl_quantite->Text = L"Quantité";
			// 
			// lbl_couleur
			// 
			this->lbl_couleur->AutoSize = true;
			this->lbl_couleur->Location = System::Drawing::Point(16, 171);
			this->lbl_couleur->Name = L"lbl_couleur";
			this->lbl_couleur->Size = System::Drawing::Size(43, 13);
			this->lbl_couleur->TabIndex = 14;
			this->lbl_couleur->Text = L"Couleur";
			// 
			// lbl_taux_tva
			// 
			this->lbl_taux_tva->AutoSize = true;
			this->lbl_taux_tva->Location = System::Drawing::Point(164, 109);
			this->lbl_taux_tva->Name = L"lbl_taux_tva";
			this->lbl_taux_tva->Size = System::Drawing::Size(55, 13);
			this->lbl_taux_tva->TabIndex = 15;
			this->lbl_taux_tva->Text = L"Taux TVA";
			// 
			// lbl_PrixUHT
			// 
			this->lbl_PrixUHT->AutoSize = true;
			this->lbl_PrixUHT->Location = System::Drawing::Point(153, 171);
			this->lbl_PrixUHT->Name = L"lbl_PrixUHT";
			this->lbl_PrixUHT->Size = System::Drawing::Size(79, 13);
			this->lbl_PrixUHT->TabIndex = 16;
			this->lbl_PrixUHT->Text = L"Prix unitaire HT";
			// 
			// lbl_PrixUTTC
			// 
			this->lbl_PrixUTTC->AutoSize = true;
			this->lbl_PrixUTTC->Location = System::Drawing::Point(16, 220);
			this->lbl_PrixUTTC->Name = L"lbl_PrixUTTC";
			this->lbl_PrixUTTC->Size = System::Drawing::Size(85, 13);
			this->lbl_PrixUTTC->TabIndex = 17;
			this->lbl_PrixUTTC->Text = L"Prix unitaire TTC";
			// 
			// lbl_PrixUTVA
			// 
			this->lbl_PrixUTVA->AutoSize = true;
			this->lbl_PrixUTVA->Location = System::Drawing::Point(153, 220);
			this->lbl_PrixUTVA->Name = L"lbl_PrixUTVA";
			this->lbl_PrixUTVA->Size = System::Drawing::Size(85, 13);
			this->lbl_PrixUTVA->TabIndex = 18;
			this->lbl_PrixUTVA->Text = L"Prix unitaire TVA";
			// 
			// txtbox_idArticle
			// 
			this->txtbox_idArticle->Location = System::Drawing::Point(12, 29);
			this->txtbox_idArticle->Name = L"txtbox_idArticle";
			this->txtbox_idArticle->Size = System::Drawing::Size(107, 20);
			this->txtbox_idArticle->TabIndex = 2;
			// 
			// lbl_idArticle
			// 
			this->lbl_idArticle->AutoSize = true;
			this->lbl_idArticle->Location = System::Drawing::Point(9, 13);
			this->lbl_idArticle->Name = L"lbl_idArticle";
			this->lbl_idArticle->Size = System::Drawing::Size(47, 13);
			this->lbl_idArticle->TabIndex = 20;
			this->lbl_idArticle->Text = L"Id article";
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(15, 303);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(107, 37);
			this->btn_update->TabIndex = 21;
			this->btn_update->Text = L"Modifier article";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &StockForm::btn_update_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(15, 346);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(107, 36);
			this->btn_delete->TabIndex = 22;
			this->btn_delete->Text = L"Supprimer article";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &StockForm::btn_delete_Click);
			// 
			// txtbox_SeuilReap
			// 
			this->txtbox_SeuilReap->Location = System::Drawing::Point(156, 73);
			this->txtbox_SeuilReap->Name = L"txtbox_SeuilReap";
			this->txtbox_SeuilReap->Size = System::Drawing::Size(107, 20);
			this->txtbox_SeuilReap->TabIndex = 6;
			// 
			// lbl_SeuilReap
			// 
			this->lbl_SeuilReap->AutoSize = true;
			this->lbl_SeuilReap->Location = System::Drawing::Point(153, 57);
			this->lbl_SeuilReap->Name = L"lbl_SeuilReap";
			this->lbl_SeuilReap->Size = System::Drawing::Size(131, 13);
			this->lbl_SeuilReap->TabIndex = 24;
			this->lbl_SeuilReap->Text = L"Seuil réapprovisionnement";
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(670, 408);
			this->Controls->Add(this->lbl_SeuilReap);
			this->Controls->Add(this->txtbox_SeuilReap);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->lbl_idArticle);
			this->Controls->Add(this->txtbox_idArticle);
			this->Controls->Add(this->lbl_PrixUTVA);
			this->Controls->Add(this->lbl_PrixUTTC);
			this->Controls->Add(this->lbl_PrixUHT);
			this->Controls->Add(this->lbl_taux_tva);
			this->Controls->Add(this->lbl_couleur);
			this->Controls->Add(this->lbl_quantite);
			this->Controls->Add(this->lbl_nature);
			this->Controls->Add(this->lbl_ref);
			this->Controls->Add(this->txtbox_PrixUTVA);
			this->Controls->Add(this->txtbox_PrixUTTC);
			this->Controls->Add(this->txtbox_PrixUHT);
			this->Controls->Add(this->txtbox_tauxTVA);
			this->Controls->Add(this->txtbox_couleur);
			this->Controls->Add(this->txtbox_Quantite);
			this->Controls->Add(this->txtbox_Nature);
			this->Controls->Add(this->txtbox_Ref);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_select);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"StockForm";
			this->Text = L"StockForm";
			this->Load += gcnew System::EventHandler(this, &StockForm::StockForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StockForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_SVC::CL_svcStock();
	}
	private: System::Void btn_select_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesStocks("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterArticle(this->txtbox_Ref->Text, this->txtbox_Nature->Text, Convert::ToInt32(this->txtbox_Quantite->Text), Convert::ToInt32(this->txtbox_SeuilReap->Text), this->txtbox_couleur->Text, Single::Parse(this->txtbox_tauxTVA->Text), Single::Parse(this->txtbox_PrixUHT->Text), Single::Parse(this->txtbox_PrixUTTC->Text), Single::Parse(this->txtbox_PrixUTVA->Text));
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->modifierArticle(Convert::ToInt32(this->txtbox_idArticle->Text), this->txtbox_Ref->Text, this->txtbox_Nature->Text, Convert::ToInt32(this->txtbox_Quantite->Text), Convert::ToInt32(this->txtbox_SeuilReap->Text), this->txtbox_couleur->Text, Single::Parse(this->txtbox_tauxTVA->Text), Single::Parse(this->txtbox_PrixUHT->Text), Single::Parse(this->txtbox_PrixUTTC->Text), Single::Parse(this->txtbox_PrixUTVA->Text));
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->supprimerArticle(Convert::ToInt32(this->txtbox_idArticle->Text));
	}
	};
}