#pragma once
#include "CL_svcCommande.h"

namespace HOPE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CommandeForm
	/// </summary>
	public ref class CommandeForm : public System::Windows::Forms::Form
	{
	public:
		CommandeForm(void)
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
		~CommandeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: NS_SVC::CL_svcCommande^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Button^ btn_select;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ txtbox_NomClient;
	private: System::Windows::Forms::TextBox^ txtbox_PrenomClient;
	private: System::Windows::Forms::TextBox^ txtbox_DateCommande;
	private: System::Windows::Forms::TextBox^ txtbox_VilleLivraison;
	private: System::Windows::Forms::TextBox^ txtbox_DateEmission;
	private: System::Windows::Forms::TextBox^ txtbox_DateLivraison;






	private: System::Windows::Forms::Label^ lbl_NomClient;
	private: System::Windows::Forms::Label^ lbl_PrenomClient;
	private: System::Windows::Forms::Label^ lbl_DateCommande;
	private: System::Windows::Forms::Label^ lbl_VilleLivraison;
	private: System::Windows::Forms::Label^ lbl_DateEmission;
	private: System::Windows::Forms::Label^ lbl_DateLivraison;
	private: System::Windows::Forms::TextBox^ txtbox_IdClient;
	private: System::Windows::Forms::Label^ lbl_idClient;




	private: System::Windows::Forms::TextBox^ txtbox_idCommande;
	private: System::Windows::Forms::Label^ lbl_idCommande;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CommandeForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_select = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->txtbox_NomClient = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_PrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_DateCommande = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_VilleLivraison = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_DateEmission = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_DateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->lbl_NomClient = (gcnew System::Windows::Forms::Label());
			this->lbl_PrenomClient = (gcnew System::Windows::Forms::Label());
			this->lbl_DateCommande = (gcnew System::Windows::Forms::Label());
			this->lbl_VilleLivraison = (gcnew System::Windows::Forms::Label());
			this->lbl_DateEmission = (gcnew System::Windows::Forms::Label());
			this->lbl_DateLivraison = (gcnew System::Windows::Forms::Label());
			this->txtbox_IdClient = (gcnew System::Windows::Forms::TextBox());
			this->lbl_idClient = (gcnew System::Windows::Forms::Label());
			this->txtbox_idCommande = (gcnew System::Windows::Forms::TextBox());
			this->lbl_idCommande = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(238, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(430, 408);
			this->dataGridView1->TabIndex = 0;
			// 
			// btn_select
			// 
			this->btn_select->Location = System::Drawing::Point(1, 279);
			this->btn_select->Name = L"btn_select";
			this->btn_select->Size = System::Drawing::Size(118, 36);
			this->btn_select->TabIndex = 1;
			this->btn_select->Text = L"Afficher commande";
			this->btn_select->UseVisualStyleBackColor = true;
			this->btn_select->Click += gcnew System::EventHandler(this, &CommandeForm::btn_select_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::SystemColors::Highlight;
			this->btn_insert->Location = System::Drawing::Point(139, 298);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(93, 84);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Enregistrer commande";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &CommandeForm::btn_insert_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(1, 365);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(118, 40);
			this->btn_update->TabIndex = 3;
			this->btn_update->Text = L"Modifier commande";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &CommandeForm::btn_update_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(1, 321);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(118, 38);
			this->btn_delete->TabIndex = 4;
			this->btn_delete->Text = L"Supprimer commande";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &CommandeForm::btn_delete_Click);
			// 
			// txtbox_NomClient
			// 
			this->txtbox_NomClient->Location = System::Drawing::Point(124, 27);
			this->txtbox_NomClient->Name = L"txtbox_NomClient";
			this->txtbox_NomClient->Size = System::Drawing::Size(83, 20);
			this->txtbox_NomClient->TabIndex = 5;
			// 
			// txtbox_PrenomClient
			// 
			this->txtbox_PrenomClient->Location = System::Drawing::Point(12, 66);
			this->txtbox_PrenomClient->Name = L"txtbox_PrenomClient";
			this->txtbox_PrenomClient->Size = System::Drawing::Size(83, 20);
			this->txtbox_PrenomClient->TabIndex = 6;
			// 
			// txtbox_DateCommande
			// 
			this->txtbox_DateCommande->Location = System::Drawing::Point(123, 66);
			this->txtbox_DateCommande->Name = L"txtbox_DateCommande";
			this->txtbox_DateCommande->Size = System::Drawing::Size(83, 20);
			this->txtbox_DateCommande->TabIndex = 7;
			// 
			// txtbox_VilleLivraison
			// 
			this->txtbox_VilleLivraison->Location = System::Drawing::Point(12, 105);
			this->txtbox_VilleLivraison->Name = L"txtbox_VilleLivraison";
			this->txtbox_VilleLivraison->Size = System::Drawing::Size(83, 20);
			this->txtbox_VilleLivraison->TabIndex = 8;
			// 
			// txtbox_DateEmission
			// 
			this->txtbox_DateEmission->Location = System::Drawing::Point(123, 105);
			this->txtbox_DateEmission->Name = L"txtbox_DateEmission";
			this->txtbox_DateEmission->Size = System::Drawing::Size(83, 20);
			this->txtbox_DateEmission->TabIndex = 9;
			// 
			// txtbox_DateLivraison
			// 
			this->txtbox_DateLivraison->Location = System::Drawing::Point(12, 144);
			this->txtbox_DateLivraison->Name = L"txtbox_DateLivraison";
			this->txtbox_DateLivraison->Size = System::Drawing::Size(83, 20);
			this->txtbox_DateLivraison->TabIndex = 10;
			// 
			// lbl_NomClient
			// 
			this->lbl_NomClient->AutoSize = true;
			this->lbl_NomClient->Location = System::Drawing::Point(121, 12);
			this->lbl_NomClient->Name = L"lbl_NomClient";
			this->lbl_NomClient->Size = System::Drawing::Size(58, 13);
			this->lbl_NomClient->TabIndex = 11;
			this->lbl_NomClient->Text = L"Nom Client";
			// 
			// lbl_PrenomClient
			// 
			this->lbl_PrenomClient->AutoSize = true;
			this->lbl_PrenomClient->Location = System::Drawing::Point(9, 50);
			this->lbl_PrenomClient->Name = L"lbl_PrenomClient";
			this->lbl_PrenomClient->Size = System::Drawing::Size(72, 13);
			this->lbl_PrenomClient->TabIndex = 12;
			this->lbl_PrenomClient->Text = L"Prénom Client";
			// 
			// lbl_DateCommande
			// 
			this->lbl_DateCommande->AutoSize = true;
			this->lbl_DateCommande->Location = System::Drawing::Point(121, 50);
			this->lbl_DateCommande->Name = L"lbl_DateCommande";
			this->lbl_DateCommande->Size = System::Drawing::Size(85, 13);
			this->lbl_DateCommande->TabIndex = 13;
			this->lbl_DateCommande->Text = L"Date commande";
			// 
			// lbl_VilleLivraison
			// 
			this->lbl_VilleLivraison->AutoSize = true;
			this->lbl_VilleLivraison->Location = System::Drawing::Point(12, 89);
			this->lbl_VilleLivraison->Name = L"lbl_VilleLivraison";
			this->lbl_VilleLivraison->Size = System::Drawing::Size(67, 13);
			this->lbl_VilleLivraison->TabIndex = 14;
			this->lbl_VilleLivraison->Text = L"Ville livraison";
			// 
			// lbl_DateEmission
			// 
			this->lbl_DateEmission->AutoSize = true;
			this->lbl_DateEmission->Location = System::Drawing::Point(121, 89);
			this->lbl_DateEmission->Name = L"lbl_DateEmission";
			this->lbl_DateEmission->Size = System::Drawing::Size(81, 13);
			this->lbl_DateEmission->TabIndex = 15;
			this->lbl_DateEmission->Text = L"Date d\'émission";
			// 
			// lbl_DateLivraison
			// 
			this->lbl_DateLivraison->AutoSize = true;
			this->lbl_DateLivraison->Location = System::Drawing::Point(12, 128);
			this->lbl_DateLivraison->Name = L"lbl_DateLivraison";
			this->lbl_DateLivraison->Size = System::Drawing::Size(86, 13);
			this->lbl_DateLivraison->TabIndex = 16;
			this->lbl_DateLivraison->Text = L"Date de livraison";
			// 
			// txtbox_IdClient
			// 
			this->txtbox_IdClient->Location = System::Drawing::Point(124, 144);
			this->txtbox_IdClient->Name = L"txtbox_IdClient";
			this->txtbox_IdClient->Size = System::Drawing::Size(83, 20);
			this->txtbox_IdClient->TabIndex = 17;
			// 
			// lbl_idClient
			// 
			this->lbl_idClient->AutoSize = true;
			this->lbl_idClient->Location = System::Drawing::Point(121, 128);
			this->lbl_idClient->Name = L"lbl_idClient";
			this->lbl_idClient->Size = System::Drawing::Size(44, 13);
			this->lbl_idClient->TabIndex = 18;
			this->lbl_idClient->Text = L"Id client";
			// 
			// txtbox_idCommande
			// 
			this->txtbox_idCommande->Location = System::Drawing::Point(12, 27);
			this->txtbox_idCommande->Name = L"txtbox_idCommande";
			this->txtbox_idCommande->Size = System::Drawing::Size(83, 20);
			this->txtbox_idCommande->TabIndex = 4;
			// 
			// lbl_idCommande
			// 
			this->lbl_idCommande->AutoSize = true;
			this->lbl_idCommande->Location = System::Drawing::Point(9, 12);
			this->lbl_idCommande->Name = L"lbl_idCommande";
			this->lbl_idCommande->Size = System::Drawing::Size(71, 13);
			this->lbl_idCommande->TabIndex = 22;
			this->lbl_idCommande->Text = L"Id commande";
			// 
			// CommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(670, 423);
			this->Controls->Add(this->lbl_idCommande);
			this->Controls->Add(this->txtbox_idCommande);
			this->Controls->Add(this->lbl_idClient);
			this->Controls->Add(this->txtbox_IdClient);
			this->Controls->Add(this->lbl_DateLivraison);
			this->Controls->Add(this->lbl_DateEmission);
			this->Controls->Add(this->lbl_VilleLivraison);
			this->Controls->Add(this->lbl_DateCommande);
			this->Controls->Add(this->lbl_PrenomClient);
			this->Controls->Add(this->lbl_NomClient);
			this->Controls->Add(this->txtbox_DateLivraison);
			this->Controls->Add(this->txtbox_DateEmission);
			this->Controls->Add(this->txtbox_VilleLivraison);
			this->Controls->Add(this->txtbox_DateCommande);
			this->Controls->Add(this->txtbox_PrenomClient);
			this->Controls->Add(this->txtbox_NomClient);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_select);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"CommandeForm";
			this->Text = L"CommandeForm";
			this->Load += gcnew System::EventHandler(this, &CommandeForm::CommandeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CommandeForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_SVC::CL_svcCommande();
	}
	private: System::Void btn_select_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterCommande(this->txtbox_PrenomClient->Text, this->txtbox_NomClient->Text, this->txtbox_DateCommande->Text, this->txtbox_VilleLivraison->Text, this->txtbox_DateEmission->Text, this->txtbox_DateLivraison->Text, Convert::ToInt32(this->txtbox_IdClient->Text));
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->modifierCommande(Convert::ToInt32(this->txtbox_idCommande->Text), this->txtbox_PrenomClient->Text, this->txtbox_NomClient->Text, this->txtbox_DateCommande->Text, this->txtbox_VilleLivraison->Text, this->txtbox_DateEmission->Text, this->txtbox_DateLivraison->Text, Convert::ToInt32(this->txtbox_IdClient->Text));
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->supprimerCommande(Convert::ToInt32(this->txtbox_idCommande->Text));
	}
	};
}