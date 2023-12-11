#pragma once
#include "PersonnelForm.h"
#include "ClientForm.h"
#include "Commande.h"
#include "StockForm.h"
#include "StatForm.h"

namespace HOPE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_gestion_personnel;
	private: System::Windows::Forms::Button^ btn_gestion_clients;
	private: System::Windows::Forms::Button^ btn_gestion_commandes;
	private: System::Windows::Forms::Button^ btn_gestion_stock;
	private: System::Windows::Forms::Button^ btn_gestion_statistiques;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	protected:

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
			this->btn_gestion_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_gestion_clients = (gcnew System::Windows::Forms::Button());
			this->btn_gestion_commandes = (gcnew System::Windows::Forms::Button());
			this->btn_gestion_stock = (gcnew System::Windows::Forms::Button());
			this->btn_gestion_statistiques = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_gestion_personnel
			// 
			this->btn_gestion_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_gestion_personnel->Location = System::Drawing::Point(97, 84);
			this->btn_gestion_personnel->Margin = System::Windows::Forms::Padding(4);
			this->btn_gestion_personnel->Name = L"btn_gestion_personnel";
			this->btn_gestion_personnel->Size = System::Drawing::Size(178, 68);
			this->btn_gestion_personnel->TabIndex = 0;
			this->btn_gestion_personnel->Text = L"gestion personnel";
			this->btn_gestion_personnel->UseVisualStyleBackColor = true;
			this->btn_gestion_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_gestion_personnel_Click);
			// 
			// btn_gestion_clients
			// 
			this->btn_gestion_clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_gestion_clients->Location = System::Drawing::Point(319, 84);
			this->btn_gestion_clients->Margin = System::Windows::Forms::Padding(4);
			this->btn_gestion_clients->Name = L"btn_gestion_clients";
			this->btn_gestion_clients->Size = System::Drawing::Size(178, 68);
			this->btn_gestion_clients->TabIndex = 1;
			this->btn_gestion_clients->Text = L"gestion clients";
			this->btn_gestion_clients->UseVisualStyleBackColor = true;
			this->btn_gestion_clients->Click += gcnew System::EventHandler(this, &MyForm::btn_gestion_clients_Click);
			// 
			// btn_gestion_commandes
			// 
			this->btn_gestion_commandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_gestion_commandes->Location = System::Drawing::Point(545, 84);
			this->btn_gestion_commandes->Margin = System::Windows::Forms::Padding(4);
			this->btn_gestion_commandes->Name = L"btn_gestion_commandes";
			this->btn_gestion_commandes->Size = System::Drawing::Size(178, 68);
			this->btn_gestion_commandes->TabIndex = 2;
			this->btn_gestion_commandes->Text = L"gestion commandes";
			this->btn_gestion_commandes->UseVisualStyleBackColor = true;
			this->btn_gestion_commandes->Click += gcnew System::EventHandler(this, &MyForm::btn_gestion_commande_Click);
			// 
			// btn_gestion_stock
			// 
			this->btn_gestion_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_gestion_stock->Location = System::Drawing::Point(782, 84);
			this->btn_gestion_stock->Margin = System::Windows::Forms::Padding(4);
			this->btn_gestion_stock->Name = L"btn_gestion_stock";
			this->btn_gestion_stock->Size = System::Drawing::Size(178, 68);
			this->btn_gestion_stock->TabIndex = 3;
			this->btn_gestion_stock->Text = L"gestion stock";
			this->btn_gestion_stock->UseVisualStyleBackColor = true;
			this->btn_gestion_stock->Click += gcnew System::EventHandler(this, &MyForm::btn_gestion_stock_Click);
			// 
			// btn_gestion_statistiques
			// 
			this->btn_gestion_statistiques->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_gestion_statistiques->Location = System::Drawing::Point(1007, 84);
			this->btn_gestion_statistiques->Margin = System::Windows::Forms::Padding(4);
			this->btn_gestion_statistiques->Name = L"btn_gestion_statistiques";
			this->btn_gestion_statistiques->Size = System::Drawing::Size(178, 68);
			this->btn_gestion_statistiques->TabIndex = 4;
			this->btn_gestion_statistiques->Text = L"gestion statistiques";
			this->btn_gestion_statistiques->UseVisualStyleBackColor = true;
			this->btn_gestion_statistiques->Click += gcnew System::EventHandler(this, &MyForm::btn_gestion_statistique_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 168);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1247, 1146);
			this->panel1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(523, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 32);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Welcome User!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"KAHMAS SOCIETY:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(247, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"31 Rue Machavaille, France.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"+213770429615";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1282, 1325);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_gestion_statistiques);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_gestion_stock);
			this->Controls->Add(this->btn_gestion_commandes);
			this->Controls->Add(this->btn_gestion_clients);
			this->Controls->Add(this->btn_gestion_personnel);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShowForm(Form^ formToShow) {
		// Clear existing controls from the panel
		panel1->Controls->Clear();

		// Add the new form to the panel
		formToShow->TopLevel = false;
		formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		formToShow->Dock = DockStyle::Fill;
		panel1->Controls->Add(formToShow);
		formToShow->Show();
	}
	private: System::Void btn_gestion_personnel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->ShowForm(gcnew HOPE::PersonnelForm());



	}
	private: System::Void btn_gestion_clients_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->ShowForm(gcnew HOPE::ClientForm());
	}
	private: System::Void btn_gestion_commande_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->ShowForm(gcnew HOPE::CommandeForm());
	}
	private: System::Void btn_gestion_stock_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->ShowForm(gcnew HOPE::StockForm());
	}
	private: System::Void btn_gestion_statistique_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->ShowForm(gcnew HOPE::StatistiqueForm());
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
