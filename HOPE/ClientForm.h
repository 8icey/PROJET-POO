#pragma once
#include "CL_svcClient.h"

namespace HOPE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(void)
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
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: NS_SVC::CL_svcClient^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Button^ btn_select;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::TextBox^ txtbox_nom;
	private: System::Windows::Forms::TextBox^ txtbox_prenom;
	private: System::Windows::Forms::TextBox^ txtbox_adresse_liv;
	private: System::Windows::Forms::TextBox^ txtbox_ville_liv;
	private: System::Windows::Forms::TextBox^ txtbox_cp_liv;
	private: System::Windows::Forms::TextBox^ txtbox_adresse_fact;
	private: System::Windows::Forms::TextBox^ txtbox_ville_fact;
	private: System::Windows::Forms::TextBox^ txtbox_cp_fact;
	private: System::Windows::Forms::TextBox^ txtbox_date_anniv;
	private: System::Windows::Forms::TextBox^ txtbox_date_premier_achat;
	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::Label^ lbl_prenom;
	private: System::Windows::Forms::Label^ lbl_adresse_liv;
	private: System::Windows::Forms::Label^ lbl_ville_liv;
	private: System::Windows::Forms::Label^ lbl_cp_liv;
	private: System::Windows::Forms::Label^ lbl_adresse_fact;
	private: System::Windows::Forms::Label^ lbl_ville_fact;
	private: System::Windows::Forms::Label^ lbl_cp_fact;
	private: System::Windows::Forms::Label^ lbl_date_anniv;
	private: System::Windows::Forms::Label^ lbl_date_premier_achat;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ txtbox_idClient;
	private: System::Windows::Forms::Label^ lbl_idClient;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_select = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->txtbox_nom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_adresse_liv = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_ville_liv = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_cp_liv = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_adresse_fact = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_ville_fact = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_cp_fact = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_date_anniv = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_date_premier_achat = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->lbl_prenom = (gcnew System::Windows::Forms::Label());
			this->lbl_adresse_liv = (gcnew System::Windows::Forms::Label());
			this->lbl_ville_liv = (gcnew System::Windows::Forms::Label());
			this->lbl_cp_liv = (gcnew System::Windows::Forms::Label());
			this->lbl_adresse_fact = (gcnew System::Windows::Forms::Label());
			this->lbl_ville_fact = (gcnew System::Windows::Forms::Label());
			this->lbl_cp_fact = (gcnew System::Windows::Forms::Label());
			this->lbl_date_anniv = (gcnew System::Windows::Forms::Label());
			this->lbl_date_premier_achat = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->txtbox_idClient = (gcnew System::Windows::Forms::TextBox());
			this->lbl_idClient = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(236, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(425, 399);
			this->dataGridView1->TabIndex = 0;
			// 
			// btn_select
			// 
			this->btn_select->Location = System::Drawing::Point(12, 350);
			this->btn_select->Name = L"btn_select";
			this->btn_select->Size = System::Drawing::Size(101, 23);
			this->btn_select->TabIndex = 1;
			this->btn_select->Text = L"Afficher Client";
			this->btn_select->UseVisualStyleBackColor = true;
			this->btn_select->Click += gcnew System::EventHandler(this, &ClientForm::btn_select_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(119, 361);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(103, 57);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Enregistrer Client";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &ClientForm::btn_insert_Click);
			// 
			// txtbox_nom
			// 
			this->txtbox_nom->Location = System::Drawing::Point(82, 12);
			this->txtbox_nom->Name = L"txtbox_nom";
			this->txtbox_nom->Size = System::Drawing::Size(70, 20);
			this->txtbox_nom->TabIndex = 3;
			// 
			// txtbox_prenom
			// 
			this->txtbox_prenom->Location = System::Drawing::Point(12, 51);
			this->txtbox_prenom->Name = L"txtbox_prenom";
			this->txtbox_prenom->Size = System::Drawing::Size(64, 20);
			this->txtbox_prenom->TabIndex = 4;
			// 
			// txtbox_adresse_liv
			// 
			this->txtbox_adresse_liv->Location = System::Drawing::Point(85, 51);
			this->txtbox_adresse_liv->Name = L"txtbox_adresse_liv";
			this->txtbox_adresse_liv->Size = System::Drawing::Size(67, 20);
			this->txtbox_adresse_liv->TabIndex = 5;
			// 
			// txtbox_ville_liv
			// 
			this->txtbox_ville_liv->Location = System::Drawing::Point(12, 207);
			this->txtbox_ville_liv->Name = L"txtbox_ville_liv";
			this->txtbox_ville_liv->Size = System::Drawing::Size(101, 20);
			this->txtbox_ville_liv->TabIndex = 6;
			// 
			// txtbox_cp_liv
			// 
			this->txtbox_cp_liv->Location = System::Drawing::Point(12, 129);
			this->txtbox_cp_liv->Name = L"txtbox_cp_liv";
			this->txtbox_cp_liv->Size = System::Drawing::Size(101, 20);
			this->txtbox_cp_liv->TabIndex = 7;
			// 
			// txtbox_adresse_fact
			// 
			this->txtbox_adresse_fact->Location = System::Drawing::Point(12, 90);
			this->txtbox_adresse_fact->Name = L"txtbox_adresse_fact";
			this->txtbox_adresse_fact->Size = System::Drawing::Size(95, 20);
			this->txtbox_adresse_fact->TabIndex = 8;
			// 
			// txtbox_ville_fact
			// 
			this->txtbox_ville_fact->Location = System::Drawing::Point(12, 246);
			this->txtbox_ville_fact->Name = L"txtbox_ville_fact";
			this->txtbox_ville_fact->Size = System::Drawing::Size(101, 20);
			this->txtbox_ville_fact->TabIndex = 9;
			// 
			// txtbox_cp_fact
			// 
			this->txtbox_cp_fact->Location = System::Drawing::Point(12, 168);
			this->txtbox_cp_fact->Name = L"txtbox_cp_fact";
			this->txtbox_cp_fact->Size = System::Drawing::Size(101, 20);
			this->txtbox_cp_fact->TabIndex = 10;
			// 
			// txtbox_date_anniv
			// 
			this->txtbox_date_anniv->Location = System::Drawing::Point(12, 324);
			this->txtbox_date_anniv->Name = L"txtbox_date_anniv";
			this->txtbox_date_anniv->Size = System::Drawing::Size(101, 20);
			this->txtbox_date_anniv->TabIndex = 11;
			// 
			// txtbox_date_premier_achat
			// 
			this->txtbox_date_premier_achat->Location = System::Drawing::Point(12, 285);
			this->txtbox_date_premier_achat->Name = L"txtbox_date_premier_achat";
			this->txtbox_date_premier_achat->Size = System::Drawing::Size(101, 20);
			this->txtbox_date_premier_achat->TabIndex = 12;
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->Location = System::Drawing::Point(84, -2);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(29, 13);
			this->lbl_nom->TabIndex = 13;
			this->lbl_nom->Text = L"Nom";
			// 
			// lbl_prenom
			// 
			this->lbl_prenom->AutoSize = true;
			this->lbl_prenom->Location = System::Drawing::Point(13, 35);
			this->lbl_prenom->Name = L"lbl_prenom";
			this->lbl_prenom->Size = System::Drawing::Size(43, 13);
			this->lbl_prenom->TabIndex = 14;
			this->lbl_prenom->Text = L"Prenom";
			// 
			// lbl_adresse_liv
			// 
			this->lbl_adresse_liv->AutoSize = true;
			this->lbl_adresse_liv->Location = System::Drawing::Point(82, 35);
			this->lbl_adresse_liv->Name = L"lbl_adresse_liv";
			this->lbl_adresse_liv->Size = System::Drawing::Size(86, 13);
			this->lbl_adresse_liv->TabIndex = 15;
			this->lbl_adresse_liv->Text = L"Adresse livraison";
			// 
			// lbl_ville_liv
			// 
			this->lbl_ville_liv->AutoSize = true;
			this->lbl_ville_liv->Location = System::Drawing::Point(9, 191);
			this->lbl_ville_liv->Name = L"lbl_ville_liv";
			this->lbl_ville_liv->Size = System::Drawing::Size(67, 13);
			this->lbl_ville_liv->TabIndex = 16;
			this->lbl_ville_liv->Text = L"Ville livraison";
			// 
			// lbl_cp_liv
			// 
			this->lbl_cp_liv->AutoSize = true;
			this->lbl_cp_liv->Location = System::Drawing::Point(9, 113);
			this->lbl_cp_liv->Name = L"lbl_cp_liv";
			this->lbl_cp_liv->Size = System::Drawing::Size(104, 13);
			this->lbl_cp_liv->TabIndex = 17;
			this->lbl_cp_liv->Text = L"Code postal livraison";
			// 
			// lbl_adresse_fact
			// 
			this->lbl_adresse_fact->AutoSize = true;
			this->lbl_adresse_fact->Location = System::Drawing::Point(9, 74);
			this->lbl_adresse_fact->Name = L"lbl_adresse_fact";
			this->lbl_adresse_fact->Size = System::Drawing::Size(98, 13);
			this->lbl_adresse_fact->TabIndex = 18;
			this->lbl_adresse_fact->Text = L"Adresse facturation";
			// 
			// lbl_ville_fact
			// 
			this->lbl_ville_fact->AutoSize = true;
			this->lbl_ville_fact->Location = System::Drawing::Point(9, 230);
			this->lbl_ville_fact->Name = L"lbl_ville_fact";
			this->lbl_ville_fact->Size = System::Drawing::Size(79, 13);
			this->lbl_ville_fact->TabIndex = 19;
			this->lbl_ville_fact->Text = L"Ville facturation";
			// 
			// lbl_cp_fact
			// 
			this->lbl_cp_fact->AutoSize = true;
			this->lbl_cp_fact->Location = System::Drawing::Point(9, 152);
			this->lbl_cp_fact->Name = L"lbl_cp_fact";
			this->lbl_cp_fact->Size = System::Drawing::Size(116, 13);
			this->lbl_cp_fact->TabIndex = 20;
			this->lbl_cp_fact->Text = L"Code postal facturation";
			// 
			// lbl_date_anniv
			// 
			this->lbl_date_anniv->AutoSize = true;
			this->lbl_date_anniv->Location = System::Drawing::Point(9, 308);
			this->lbl_date_anniv->Name = L"lbl_date_anniv";
			this->lbl_date_anniv->Size = System::Drawing::Size(90, 13);
			this->lbl_date_anniv->TabIndex = 21;
			this->lbl_date_anniv->Text = L"Date anniversaire";
			// 
			// lbl_date_premier_achat
			// 
			this->lbl_date_premier_achat->AutoSize = true;
			this->lbl_date_premier_achat->Location = System::Drawing::Point(9, 269);
			this->lbl_date_premier_achat->Name = L"lbl_date_premier_achat";
			this->lbl_date_premier_achat->Size = System::Drawing::Size(97, 13);
			this->lbl_date_premier_achat->TabIndex = 22;
			this->lbl_date_premier_achat->Text = L"Date premier achat";
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(12, 405);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(101, 23);
			this->btn_update->TabIndex = 23;
			this->btn_update->Text = L"Modifier Client";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &ClientForm::btn_update_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(12, 379);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(101, 20);
			this->btn_delete->TabIndex = 24;
			this->btn_delete->Text = L"Supprimer Client";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &ClientForm::btn_delete_Click);
			// 
			// txtbox_idClient
			// 
			this->txtbox_idClient->Location = System::Drawing::Point(12, 12);
			this->txtbox_idClient->Name = L"txtbox_idClient";
			this->txtbox_idClient->Size = System::Drawing::Size(64, 20);
			this->txtbox_idClient->TabIndex = 2;
			// 
			// lbl_idClient
			// 
			this->lbl_idClient->AutoSize = true;
			this->lbl_idClient->Location = System::Drawing::Point(12, -2);
			this->lbl_idClient->Name = L"lbl_idClient";
			this->lbl_idClient->Size = System::Drawing::Size(44, 13);
			this->lbl_idClient->TabIndex = 26;
			this->lbl_idClient->Text = L"Id client";
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			/*this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));*/
			this->ClientSize = System::Drawing::Size(670, 423);
			this->Controls->Add(this->lbl_idClient);
			this->Controls->Add(this->txtbox_idClient);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->lbl_date_premier_achat);
			this->Controls->Add(this->lbl_date_anniv);
			this->Controls->Add(this->lbl_cp_fact);
			this->Controls->Add(this->lbl_ville_fact);
			this->Controls->Add(this->lbl_adresse_fact);
			this->Controls->Add(this->lbl_cp_liv);
			this->Controls->Add(this->lbl_ville_liv);
			this->Controls->Add(this->lbl_adresse_liv);
			this->Controls->Add(this->lbl_prenom);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->txtbox_date_premier_achat);
			this->Controls->Add(this->txtbox_date_anniv);
			this->Controls->Add(this->txtbox_cp_fact);
			this->Controls->Add(this->txtbox_ville_fact);
			this->Controls->Add(this->txtbox_adresse_fact);
			this->Controls->Add(this->txtbox_cp_liv);
			this->Controls->Add(this->txtbox_ville_liv);
			this->Controls->Add(this->txtbox_adresse_liv);
			this->Controls->Add(this->txtbox_prenom);
			this->Controls->Add(this->txtbox_nom);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_select);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_SVC::CL_svcClient();
	}
	private: System::Void btn_select_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnClient(this->txtbox_nom->Text, this->txtbox_prenom->Text, this->txtbox_adresse_liv->Text, this->txtbox_ville_liv->Text, Convert::ToInt32(this->txtbox_cp_liv->Text), this->txtbox_adresse_fact->Text, this->txtbox_ville_fact->Text, Convert::ToInt32(this->txtbox_cp_fact->Text), this->txtbox_date_anniv->Text, this->txtbox_date_premier_achat->Text);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->modifierUnClient(Convert::ToInt32(this->txtbox_idClient->Text), this->txtbox_nom->Text, this->txtbox_prenom->Text, this->txtbox_adresse_liv->Text, this->txtbox_ville_liv->Text, Convert::ToInt32(this->txtbox_cp_liv->Text), this->txtbox_adresse_fact->Text, this->txtbox_ville_fact->Text, Convert::ToInt32(this->txtbox_cp_fact->Text), this->txtbox_date_anniv->Text, this->txtbox_date_premier_achat->Text);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->supprimerUnClient(Convert::ToInt32(this->txtbox_idClient->Text));
	}
	};
}