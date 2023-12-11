#pragma once
#include "CL_svcStatistique.h"

namespace HOPE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de StatistiqueForm
	/// </summary>
	public ref class StatistiqueForm : public System::Windows::Forms::Form
	{
	public:
		StatistiqueForm(void)
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
		~StatistiqueForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	
	private: System::Windows::Forms::Button^ btn_statArticleReapp;

	protected:

	private: NS_SVC::CL_svcStatistique^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oDs2;
	private: System::Data::DataSet^ oDs3;
	private: System::Windows::Forms::Button^ btn_ArticlesPlusVendus;
	private: System::Windows::Forms::Button^ btn_ArticlesMoinsVendus;
	private: System::Windows::Forms::Button^ btn_valeurAchatStock;
	private: System::Windows::Forms::Button^ btn_valeurCommercialeStock;
	private: System::Windows::Forms::Button^ btn_PanierMoyen;
	private: System::Windows::Forms::Button^ btn_totalAchatsClient;
	private: System::Windows::Forms::Button^ btn_ChiffreAffaireMois;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::DataGridView^ dataGridView7;
	private: System::Windows::Forms::DataGridView^ dataGridView8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;













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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_statArticleReapp = (gcnew System::Windows::Forms::Button());
			this->btn_ArticlesPlusVendus = (gcnew System::Windows::Forms::Button());
			this->btn_ArticlesMoinsVendus = (gcnew System::Windows::Forms::Button());
			this->btn_valeurAchatStock = (gcnew System::Windows::Forms::Button());
			this->btn_valeurCommercialeStock = (gcnew System::Windows::Forms::Button());
			this->btn_PanierMoyen = (gcnew System::Windows::Forms::Button());
			this->btn_totalAchatsClient = (gcnew System::Windows::Forms::Button());
			this->btn_ChiffreAffaireMois = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(574, 281);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(209, 73);
			this->dataGridView1->TabIndex = 0;
			// 
			// btn_statArticleReapp
			// 
			this->btn_statArticleReapp->Location = System::Drawing::Point(3, 15);
			this->btn_statArticleReapp->Margin = System::Windows::Forms::Padding(4);
			this->btn_statArticleReapp->Name = L"btn_statArticleReapp";
			this->btn_statArticleReapp->Size = System::Drawing::Size(160, 84);
			this->btn_statArticleReapp->TabIndex = 1;
			this->btn_statArticleReapp->Text = L"Statistiques Articles réapprovisionnement";
			this->btn_statArticleReapp->UseVisualStyleBackColor = false;
			this->btn_statArticleReapp->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_articlesReappro_Click);
			// 
			// btn_ArticlesPlusVendus
			// 
			this->btn_ArticlesPlusVendus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_ArticlesPlusVendus->Location = System::Drawing::Point(16, 337);
			this->btn_ArticlesPlusVendus->Margin = System::Windows::Forms::Padding(4);
			this->btn_ArticlesPlusVendus->Name = L"btn_ArticlesPlusVendus";
			this->btn_ArticlesPlusVendus->Size = System::Drawing::Size(93, 84);
			this->btn_ArticlesPlusVendus->TabIndex = 2;
			this->btn_ArticlesPlusVendus->Text = L"Statistiques Articles plus vendus";
			this->btn_ArticlesPlusVendus->UseVisualStyleBackColor = true;
			this->btn_ArticlesPlusVendus->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_articlesPlusVendus_Click);
			// 
			// btn_ArticlesMoinsVendus
			// 
			this->btn_ArticlesMoinsVendus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_ArticlesMoinsVendus->Location = System::Drawing::Point(16, 188);
			this->btn_ArticlesMoinsVendus->Margin = System::Windows::Forms::Padding(4);
			this->btn_ArticlesMoinsVendus->Name = L"btn_ArticlesMoinsVendus";
			this->btn_ArticlesMoinsVendus->Size = System::Drawing::Size(101, 84);
			this->btn_ArticlesMoinsVendus->TabIndex = 3;
			this->btn_ArticlesMoinsVendus->Text = L"Statistiques Articles moins vendus";
			this->btn_ArticlesMoinsVendus->UseVisualStyleBackColor = true;
			this->btn_ArticlesMoinsVendus->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_articlesMoinsVendus_Click);
			// 
			// btn_valeurAchatStock
			// 
			this->btn_valeurAchatStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_valeurAchatStock->Location = System::Drawing::Point(461, 373);
			this->btn_valeurAchatStock->Margin = System::Windows::Forms::Padding(4);
			this->btn_valeurAchatStock->Name = L"btn_valeurAchatStock";
			this->btn_valeurAchatStock->Size = System::Drawing::Size(96, 84);
			this->btn_valeurAchatStock->TabIndex = 4;
			this->btn_valeurAchatStock->Text = L"Statistiques Valeur d\'achat Stock";
			this->btn_valeurAchatStock->UseVisualStyleBackColor = true;
			this->btn_valeurAchatStock->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_valeurAchatStock_Click);
			// 
			// btn_valeurCommercialeStock
			// 
			this->btn_valeurCommercialeStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_valeurCommercialeStock->Location = System::Drawing::Point(496, 465);
			this->btn_valeurCommercialeStock->Margin = System::Windows::Forms::Padding(4);
			this->btn_valeurCommercialeStock->Name = L"btn_valeurCommercialeStock";
			this->btn_valeurCommercialeStock->Size = System::Drawing::Size(101, 84);
			this->btn_valeurCommercialeStock->TabIndex = 5;
			this->btn_valeurCommercialeStock->Text = L"Statistiques Valeur commerciale Stock";
			this->btn_valeurCommercialeStock->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_valeurCommercialeStock_Click);
			// 
			// btn_PanierMoyen
			// 
			this->btn_PanierMoyen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_PanierMoyen->Location = System::Drawing::Point(456, 281);
			this->btn_PanierMoyen->Margin = System::Windows::Forms::Padding(4);
			this->btn_PanierMoyen->Name = L"btn_PanierMoyen";
			this->btn_PanierMoyen->Size = System::Drawing::Size(93, 84);
			this->btn_PanierMoyen->TabIndex = 6;
			this->btn_PanierMoyen->Text = L"Statistiques Panier moyen";
			this->btn_PanierMoyen->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_valeurPanierMoyen_Click);
			// 
			// btn_totalAchatsClient
			// 
			this->btn_totalAchatsClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_totalAchatsClient->Location = System::Drawing::Point(448, 153);
			this->btn_totalAchatsClient->Margin = System::Windows::Forms::Padding(4);
			this->btn_totalAchatsClient->Name = L"btn_totalAchatsClient";
			this->btn_totalAchatsClient->Size = System::Drawing::Size(109, 84);
			this->btn_totalAchatsClient->TabIndex = 7;
			this->btn_totalAchatsClient->Text = L"Statistiques Total achats client";
			this->btn_totalAchatsClient->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_totalAchatsClient_Click);
			// 
			// btn_ChiffreAffaireMois
			// 
			this->btn_ChiffreAffaireMois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_ChiffreAffaireMois->Location = System::Drawing::Point(453, 15);
			this->btn_ChiffreAffaireMois->Margin = System::Windows::Forms::Padding(4);
			this->btn_ChiffreAffaireMois->Name = L"btn_ChiffreAffaireMois";
			this->btn_ChiffreAffaireMois->Size = System::Drawing::Size(96, 84);
			this->btn_ChiffreAffaireMois->TabIndex = 8;
			this->btn_ChiffreAffaireMois->Text = L"Statistiques Chiffre d\'affaire par mois";
			this->btn_ChiffreAffaireMois->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_chiffreAffaireClient_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(565, 199);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(307, 73);
			this->dataGridView2->TabIndex = 9;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(565, 56);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(231, 87);
			this->dataGridView3->TabIndex = 10;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(170, 8);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(259, 153);
			this->dataGridView4->TabIndex = 11;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(121, 170);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(308, 142);
			this->dataGridView5->TabIndex = 12;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(121, 318);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(308, 131);
			this->dataGridView6->TabIndex = 13;
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(579, 384);
			this->dataGridView7->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersWidth = 51;
			this->dataGridView7->Size = System::Drawing::Size(209, 73);
			this->dataGridView7->TabIndex = 14;
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Location = System::Drawing::Point(605, 476);
			this->dataGridView8->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->RowHeadersWidth = 51;
			this->dataGridView8->Size = System::Drawing::Size(209, 73);
			this->dataGridView8->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 454);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 84);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Simuler TVA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StatistiqueForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(3, 546);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 84);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Simuler marge commerciale";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StatistiqueForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(3, 648);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 84);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Simuler remise";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StatistiqueForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(3, 740);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 84);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Simuler demarque inconnue";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StatistiqueForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 485);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 22);
			this->textBox1->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(108, 577);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 22);
			this->textBox2->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(103, 780);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(186, 22);
			this->textBox3->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(103, 679);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(186, 22);
			this->textBox4->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(109, 466);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 16);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Saisir la valeur de la TVA /100:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(106, 558);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(282, 16);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Saisir la valeur de la marge commerciale /100:";
			this->label2->Click += gcnew System::EventHandler(this, &StatistiqueForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(100, 752);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(281, 16);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Saisir la valeur de la demarque inconnue /100:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 648);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 16);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Saisir la valeur de la remise /100:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(565, 27);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(187, 22);
			this->textBox5->TabIndex = 28;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &StatistiqueForm::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(562, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 16);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Saisir le mois:";
			this->label5->Click += gcnew System::EventHandler(this, &StatistiqueForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(564, 153);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 16);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Saisir l\'id du client:";
			this->label6->Click += gcnew System::EventHandler(this, &StatistiqueForm::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(564, 170);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(187, 22);
			this->textBox6->TabIndex = 30;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(342, 648);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(187, 22);
			this->textBox7->TabIndex = 32;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(351, 620);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 16);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Saisir l\'id d\'article :";
			// 
			// StatistiqueForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 954);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView8);
			this->Controls->Add(this->dataGridView7);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btn_ChiffreAffaireMois);
			this->Controls->Add(this->btn_totalAchatsClient);
			this->Controls->Add(this->btn_PanierMoyen);
			this->Controls->Add(this->btn_valeurCommercialeStock);
			this->Controls->Add(this->btn_valeurAchatStock);
			this->Controls->Add(this->btn_ArticlesMoinsVendus);
			this->Controls->Add(this->btn_ArticlesPlusVendus);
			this->Controls->Add(this->btn_statArticleReapp);
			this->Controls->Add(this->dataGridView1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StatistiqueForm";
			this->Text = L"StatistiqueForm";
			this->Load += gcnew System::EventHandler(this, &StatistiqueForm::StatistiqueForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StatistiqueForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_SVC::CL_svcStatistique();
	}
	private: System::Void btn_articlesReappro_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->dataGridView4->Columns->Clear();
		this->oDs = this->oSvc->sstat3("Rsl1");
		this->dataGridView4->DataSource = this->oDs;
		this->dataGridView4->DataMember = "Rsl1";
	}
	private: System::Void btn_articlesPlusVendus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->dataGridView6->Columns->Clear();
		this->oDs = this->oSvc->sstat5("Rsl2");
		this->dataGridView6->DataSource = this->oDs;
		this->dataGridView6->DataMember = "Rsl2";
	}
	private: System::Void btn_articlesMoinsVendus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->dataGridView5->Columns->Clear();
		this->oDs = this->oSvc->sstat6("Rsl3");
		this->dataGridView5->DataSource = this->oDs;
		this->dataGridView5->DataMember = "Rsl3";
	}
	private: System::Void btn_valeurCommercialeStock_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->dataGridView1->Columns->Clear();
		this->oDs = this->oSvc->sstat7("Rsl4");
		this->dataGridView8->DataSource = this->oDs;
		this->dataGridView8->DataMember = "Rsl4";
	}
	private: System::Void btn_valeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->dataGridView1->Columns->Clear();
		this->oDs = this->oSvc->sstat8("Rsl5");
		this->dataGridView7->DataSource = this->oDs;
		this->dataGridView7->DataMember = "Rsl5";
	}
	private: System::Void btn_valeurPanierMoyen_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_SVC::CL_svcStatistique();
		//this->dataGridView1->Columns->Clear();
		this->oDs = this->oSvc->sstat1("Rsl6");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl6";
	}
	private: System::Void btn_totalAchatsClient_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_SVC::CL_svcStatistique();
		//this->dataGridView2->Columns->Clear();
		this->oDs = this->oSvc->sstat4("Rsl7", Convert::ToInt32(this->textBox6->Text));
		this->dataGridView2->DataSource = this->oDs;
		this->dataGridView2->DataMember = "Rsl7";
	}
	private: System::Void btn_chiffreAffaireClient_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_SVC::CL_svcStatistique();
		//this->dataGridView3->Columns->Clear();
		this->oDs= this->oSvc->sstat2("Rsl8", Convert::ToInt32(this->textBox5->Text));
		this->dataGridView3->DataSource = this->oDs;
		this->dataGridView3->DataMember = "Rsl8";
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvc = gcnew NS_SVC::CL_svcStatistique();
	this->oDs = this->oSvc->sstat9t("Rs", Convert::ToString(this->textBox1->Text), Convert::ToInt32(this->textBox7->Text));
}

 private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	 this->oSvc = gcnew NS_SVC::CL_svcStatistique();
	 this->oDs = this->oSvc->sstat9m("Rd", Convert::ToString(this->textBox2->Text), Convert::ToInt32(this->textBox7->Text));
 }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_SVC::CL_svcStatistique();
	this->oDs = this->oSvc->sstat9r("R5", Convert::ToString(this->textBox4->Text), Convert::ToInt32(this->textBox7->Text));
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_SVC::CL_svcStatistique();
	this->oDs = this->oSvc->sstat9d("Rh", Convert::ToString(this->textBox3->Text), Convert::ToInt32(this->textBox7->Text));
}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	   }
};
}
