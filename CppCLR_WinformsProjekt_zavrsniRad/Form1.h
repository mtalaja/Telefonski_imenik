#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iostream>
#include <windows.h>
using namespace std;

typedef struct Osoba {
	string ime;
	string prezime;
	string broj_mobitela;
	Osoba* sljedeci;
};
Osoba* glava = NULL;
Osoba* temp_kontakt = NULL;
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	

	public ref class Form1 : public System::Windows::Forms::Form
	{

	
	public:
		Form1(void)
		{	
			InitializeComponent();
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

		


	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  bunifuCustomDataGrid1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Prezime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Broj_mobitela;



	private: Bunifu::Framework::UI::BunifuElipse^  bunifuElipse5;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  buttonDodaj;




	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextboxIme;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextboxPrezime;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextboxBrojMobitela;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextboxPretrazi;
	private: System::Windows::Forms::Button^  buttonIzbrisi;







	private: System::ComponentModel::IContainer^  components;







	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bunifuCustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->Ime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prezime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Broj_mobitela = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bunifuElipse5 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonDodaj = (gcnew System::Windows::Forms::Button());
			this->bunifuMaterialTextboxIme = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextboxPrezime = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextboxBrojMobitela = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextboxPretrazi = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->buttonIzbrisi = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuCustomDataGrid1
			// 
			this->bunifuCustomDataGrid1->AllowUserToAddRows = false;
			this->bunifuCustomDataGrid1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuCustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->bunifuCustomDataGrid1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuCustomDataGrid1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->bunifuCustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuCustomDataGrid1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->bunifuCustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->bunifuCustomDataGrid1->ColumnHeadersHeight = 40;
			this->bunifuCustomDataGrid1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Ime,
					this->Prezime, this->Broj_mobitela
			});
			this->bunifuCustomDataGrid1->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->bunifuCustomDataGrid1->DefaultCellStyle = dataGridViewCellStyle3;
			this->bunifuCustomDataGrid1->DoubleBuffered = true;
			this->bunifuCustomDataGrid1->EnableHeadersVisualStyles = false;
			this->bunifuCustomDataGrid1->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuCustomDataGrid1->HeaderForeColor = System::Drawing::Color::White;
			this->bunifuCustomDataGrid1->Location = System::Drawing::Point(388, 81);
			this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
			this->bunifuCustomDataGrid1->ReadOnly = true;
			this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuCustomDataGrid1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->bunifuCustomDataGrid1->RowHeadersVisible = false;
			this->bunifuCustomDataGrid1->RowHeadersWidth = 50;
			this->bunifuCustomDataGrid1->RowTemplate->DividerHeight = 1;
			this->bunifuCustomDataGrid1->RowTemplate->Height = 30;
			this->bunifuCustomDataGrid1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->bunifuCustomDataGrid1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->bunifuCustomDataGrid1->Size = System::Drawing::Size(500, 353);
			this->bunifuCustomDataGrid1->TabIndex = 2;
			this->bunifuCustomDataGrid1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::bunifuCustomDataGrid1_CellClick);
			// 
			// Ime
			// 
			this->Ime->HeaderText = L"Ime";
			this->Ime->Name = L"Ime";
			this->Ime->ReadOnly = true;
			// 
			// Prezime
			// 
			this->Prezime->HeaderText = L"Prezime";
			this->Prezime->Name = L"Prezime";
			this->Prezime->ReadOnly = true;
			// 
			// Broj_mobitela
			// 
			this->Broj_mobitela->HeaderText = L"Broj mobitela";
			this->Broj_mobitela->Name = L"Broj_mobitela";
			this->Broj_mobitela->ReadOnly = true;
			// 
			// bunifuElipse5
			// 
			this->bunifuElipse5->ElipseRadius = 7;
			this->bunifuElipse5->TargetControl = this->bunifuCustomDataGrid1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label1->Location = System::Drawing::Point(116, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 21);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Ime";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label2->Location = System::Drawing::Point(86, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 21);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Prezime";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label3->Location = System::Drawing::Point(45, 264);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 21);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Broj mobitela";
			// 
			// buttonDodaj
			// 
			this->buttonDodaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->buttonDodaj->CausesValidation = false;
			this->buttonDodaj->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->buttonDodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDodaj->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonDodaj->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->buttonDodaj->Location = System::Drawing::Point(49, 358);
			this->buttonDodaj->Name = L"buttonDodaj";
			this->buttonDodaj->Size = System::Drawing::Size(120, 35);
			this->buttonDodaj->TabIndex = 11;
			this->buttonDodaj->Text = L"Dodaj";
			this->buttonDodaj->UseVisualStyleBackColor = false;
			this->buttonDodaj->Click += gcnew System::EventHandler(this, &Form1::buttonDodaj_Click);
			// 
			// bunifuMaterialTextboxIme
			// 
			this->bunifuMaterialTextboxIme->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextboxIme->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->bunifuMaterialTextboxIme->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextboxIme->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextboxIme->HintText = L"";
			this->bunifuMaterialTextboxIme->isPassword = false;
			this->bunifuMaterialTextboxIme->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuMaterialTextboxIme->LineIdleColor = System::Drawing::Color::Gray;
			this->bunifuMaterialTextboxIme->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuMaterialTextboxIme->LineThickness = 4;
			this->bunifuMaterialTextboxIme->Location = System::Drawing::Point(161, 153);
			this->bunifuMaterialTextboxIme->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextboxIme->Name = L"bunifuMaterialTextboxIme";
			this->bunifuMaterialTextboxIme->Size = System::Drawing::Size(172, 44);
			this->bunifuMaterialTextboxIme->TabIndex = 16;
			this->bunifuMaterialTextboxIme->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextboxPrezime
			// 
			this->bunifuMaterialTextboxPrezime->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextboxPrezime->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->bunifuMaterialTextboxPrezime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextboxPrezime->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextboxPrezime->HintText = L"";
			this->bunifuMaterialTextboxPrezime->isPassword = false;
			this->bunifuMaterialTextboxPrezime->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuMaterialTextboxPrezime->LineIdleColor = System::Drawing::Color::Gray;
			this->bunifuMaterialTextboxPrezime->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuMaterialTextboxPrezime->LineThickness = 4;
			this->bunifuMaterialTextboxPrezime->Location = System::Drawing::Point(161, 203);
			this->bunifuMaterialTextboxPrezime->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextboxPrezime->Name = L"bunifuMaterialTextboxPrezime";
			this->bunifuMaterialTextboxPrezime->Size = System::Drawing::Size(172, 44);
			this->bunifuMaterialTextboxPrezime->TabIndex = 17;
			this->bunifuMaterialTextboxPrezime->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextboxBrojMobitela
			// 
			this->bunifuMaterialTextboxBrojMobitela->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextboxBrojMobitela->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->bunifuMaterialTextboxBrojMobitela->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextboxBrojMobitela->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextboxBrojMobitela->HintText = L"";
			this->bunifuMaterialTextboxBrojMobitela->isPassword = false;
			this->bunifuMaterialTextboxBrojMobitela->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuMaterialTextboxBrojMobitela->LineIdleColor = System::Drawing::Color::Gray;
			this->bunifuMaterialTextboxBrojMobitela->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuMaterialTextboxBrojMobitela->LineThickness = 4;
			this->bunifuMaterialTextboxBrojMobitela->Location = System::Drawing::Point(161, 253);
			this->bunifuMaterialTextboxBrojMobitela->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextboxBrojMobitela->Name = L"bunifuMaterialTextboxBrojMobitela";
			this->bunifuMaterialTextboxBrojMobitela->Size = System::Drawing::Size(172, 44);
			this->bunifuMaterialTextboxBrojMobitela->TabIndex = 18;
			this->bunifuMaterialTextboxBrojMobitela->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextboxPretrazi
			// 
			this->bunifuMaterialTextboxPretrazi->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextboxPretrazi->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->bunifuMaterialTextboxPretrazi->ForeColor = System::Drawing::Color::Gray;
			this->bunifuMaterialTextboxPretrazi->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuMaterialTextboxPretrazi->HintText = L"";
			this->bunifuMaterialTextboxPretrazi->isPassword = false;
			this->bunifuMaterialTextboxPretrazi->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuMaterialTextboxPretrazi->LineIdleColor = System::Drawing::Color::Gray;
			this->bunifuMaterialTextboxPretrazi->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->bunifuMaterialTextboxPretrazi->LineThickness = 4;
			this->bunifuMaterialTextboxPretrazi->Location = System::Drawing::Point(64, 81);
			this->bunifuMaterialTextboxPretrazi->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextboxPretrazi->Name = L"bunifuMaterialTextboxPretrazi";
			this->bunifuMaterialTextboxPretrazi->Size = System::Drawing::Size(269, 44);
			this->bunifuMaterialTextboxPretrazi->TabIndex = 19;
			this->bunifuMaterialTextboxPretrazi->Text = L"Pretražite";
			this->bunifuMaterialTextboxPretrazi->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMaterialTextboxPretrazi->OnValueChanged += gcnew System::EventHandler(this, &Form1::bunifuMaterialTextboxPretrazi_OnValueChanged);
			this->bunifuMaterialTextboxPretrazi->Enter += gcnew System::EventHandler(this, &Form1::bunifuMaterialTextbox1_Enter);
			this->bunifuMaterialTextboxPretrazi->Leave += gcnew System::EventHandler(this, &Form1::bunifuMaterialTextboxPretrazi_Leave);
			// 
			// buttonIzbrisi
			// 
			this->buttonIzbrisi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->buttonIzbrisi->CausesValidation = false;
			this->buttonIzbrisi->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->buttonIzbrisi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonIzbrisi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonIzbrisi->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->buttonIzbrisi->Location = System::Drawing::Point(195, 358);
			this->buttonIzbrisi->Name = L"buttonIzbrisi";
			this->buttonIzbrisi->Size = System::Drawing::Size(120, 35);
			this->buttonIzbrisi->TabIndex = 20;
			this->buttonIzbrisi->Text = L"Izbriši";
			this->buttonIzbrisi->UseVisualStyleBackColor = false;
			this->buttonIzbrisi->Click += gcnew System::EventHandler(this, &Form1::buttonIzbrisi_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->ClientSize = System::Drawing::Size(934, 511);
			this->Controls->Add(this->buttonIzbrisi);
			this->Controls->Add(this->bunifuMaterialTextboxPretrazi);
			this->Controls->Add(this->bunifuMaterialTextboxBrojMobitela);
			this->Controls->Add(this->bunifuMaterialTextboxPrezime);
			this->Controls->Add(this->bunifuMaterialTextboxIme);
			this->Controls->Add(this->buttonDodaj);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bunifuCustomDataGrid1);
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Telefonski imenik";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: Osoba* KreiranjeElementa(string ime, string prezime, string broj)
		{
			Osoba* nova_osoba = new Osoba;
			bool postoji = false;

			if (nova_osoba == NULL)
			{
				cout << "Greška prilikom alociranja memorije !!!";
			}
			else
			{	
				Osoba* temp_glava = glava;
				while (temp_glava != NULL)
				{
					if (temp_glava->broj_mobitela == broj)
					{
						postoji = true;
						temp_glava = NULL;
					}
					else
					{
						temp_glava = temp_glava->sljedeci;
					}					
				}
				if (postoji == false)
				{
					nova_osoba->ime = ime;
					nova_osoba->prezime = prezime;
					nova_osoba->broj_mobitela = broj;
					nova_osoba->sljedeci = NULL;
				}
				else
				{
					nova_osoba = NULL;
				}
				
			}

			return nova_osoba;
		}

		public: void DodajNoviKontakt(Osoba* nova_osoba)
		{	
			if (nova_osoba != NULL)
			{
				nova_osoba->sljedeci = glava;
				glava = nova_osoba;
			}			
		}

		public: void DodavanjePocetnihKontakta() {
			Osoba *marko = new Osoba{ "Marko","Horvat","0913214445" };
			Osoba *ante = new Osoba{ "Ante","Paviæ","0954564455" };
			Osoba *stipe = new Osoba{ "Stipe","Stipiæ","0982347823" };
			Osoba *marija = new Osoba{ "Marija","Jukiæ","0951264995" };
			Osoba *mate = new Osoba{ "Mate","Matiæ","0918823423" };
			Osoba *josip = new Osoba{ "Josip","Mariæ","0994564515" };
			Osoba *slavko = new Osoba{ "Slavko","Slavkiæ","0924484505" };
			Osoba *paula = new Osoba{ "Paula","Mariæ","0914817734" };
			Osoba *jakov = new Osoba{ "Jakov","Paviæ","0986264421" };
			Osoba *ivan = new Osoba{ "Ivan","Horvat","0998289902" };

			glava = marko;
			marko->sljedeci = ante;
			ante->sljedeci = stipe;
			stipe->sljedeci = marija;
			marija->sljedeci = mate;
			mate->sljedeci = josip;
			josip->sljedeci = slavko;
			slavko->sljedeci = paula;
			paula->sljedeci = jakov;
			jakov->sljedeci = ivan;
			ivan->sljedeci = NULL;

		}

		public: void Ispis() {

			Osoba* temp_glava = glava;
			bunifuCustomDataGrid1->Rows->Clear();
		
			while (temp_glava != NULL)
			{
				bunifuCustomDataGrid1->Rows->Add(gcnew String((temp_glava->ime).c_str()), gcnew String((temp_glava->prezime).c_str()), gcnew String((temp_glava->broj_mobitela).c_str()));
				temp_glava = temp_glava->sljedeci;			
			}
		}



		private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

			DodavanjePocetnihKontakta();
			Ispis();
		}

		private: System::Void buttonDodaj_Click(System::Object^  sender, System::EventArgs^  e) {

			if (String::IsNullOrEmpty(this->bunifuMaterialTextboxIme->Text) || String::IsNullOrEmpty(this->bunifuMaterialTextboxPrezime->Text) || String::IsNullOrEmpty(this->bunifuMaterialTextboxBrojMobitela->Text) || System::Text::RegularExpressions::Regex::IsMatch(bunifuMaterialTextboxBrojMobitela->Text, "[^0-9]"))
			{
				MessageBox::Show("Ne ispravan unos !!!");
			}
			else
			{
				string ime = msclr::interop::marshal_as<std::string>(bunifuMaterialTextboxIme->Text);
				string prezime = msclr::interop::marshal_as<std::string>(bunifuMaterialTextboxPrezime->Text);
				string broj = msclr::interop::marshal_as<std::string>(bunifuMaterialTextboxBrojMobitela->Text);

				Osoba* novi_kontakt = KreiranjeElementa(ime, prezime, broj);

				if (novi_kontakt == NULL)
				{
					MessageBox::Show("Korisnik s tim brojem veæ postoji.");
				}
				else
				{
					DodajNoviKontakt(novi_kontakt);
					MessageBox::Show("Dodali ste novi kontant.");
				}				

				this->bunifuMaterialTextboxIme->Text = "";
				this->bunifuMaterialTextboxPrezime->Text = "";
				this->bunifuMaterialTextboxBrojMobitela->Text = "";								
			}
			
			Ispis();			
		}

		private: System::Void bunifuMaterialTextbox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			if (bunifuMaterialTextboxPretrazi->Text == "Pretražite")
			{
				bunifuMaterialTextboxPretrazi->Text = "";
				bunifuMaterialTextboxPretrazi->ForeColor = Color::FromArgb(39,55,77);
			}
		}

		private: System::Void bunifuMaterialTextboxPretrazi_Leave(System::Object^  sender, System::EventArgs^  e) {
			if (bunifuMaterialTextboxPretrazi->Text == "")
			{
				bunifuMaterialTextboxPretrazi->Text = "Pretražite";
				bunifuMaterialTextboxPretrazi->ForeColor = Color::Gray;
				Ispis();
			}
		}

		private: System::Void bunifuMaterialTextboxPretrazi_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
			bunifuCustomDataGrid1->Rows->Clear();
			Osoba* temp_glava = glava;

			if (String::IsNullOrEmpty(this->bunifuMaterialTextboxPretrazi->Text))
			{
				Ispis();
			}
			else if (String::IsNullOrWhiteSpace(this->bunifuMaterialTextboxPretrazi->Text))
			{
				this->bunifuMaterialTextboxPretrazi->Text = "";
			}
			else
			{
				if (System::Text::RegularExpressions::Regex::IsMatch(bunifuMaterialTextboxPretrazi->Text, "[^0-9]"))
				{
					string unos = msclr::interop::marshal_as<std::string>(bunifuMaterialTextboxPretrazi->Text);
					transform(unos.begin(), unos.end(), unos.begin(), ::tolower);

					while (temp_glava != NULL)
					{
						string temp_ime = temp_glava->ime;
						string temp_prezime = temp_glava->prezime;
						transform(temp_ime.begin(), temp_ime.end(), temp_ime.begin(), ::tolower);
						transform(temp_prezime.begin(), temp_prezime.end(), temp_prezime.begin(), ::tolower);

						if (temp_ime.rfind(unos,0) == 0 || temp_prezime.rfind(unos,0) == 0 || (temp_ime +" "+ temp_prezime).rfind(unos,0) == 0)
						{
							bunifuCustomDataGrid1->Rows->Add(gcnew String((temp_glava->ime).c_str()), gcnew String((temp_glava->prezime).c_str()), gcnew String((temp_glava->broj_mobitela).c_str()));
						}

						temp_glava = temp_glava->sljedeci;
					}
				}
				else
				{
					string unos = msclr::interop::marshal_as<std::string>(bunifuMaterialTextboxPretrazi->Text);

					while (temp_glava != NULL)
					{
						if (temp_glava->broj_mobitela.rfind(unos,0) == 0)
						{
							bunifuCustomDataGrid1->Rows->Add(gcnew String((temp_glava->ime).c_str()), gcnew String((temp_glava->prezime).c_str()), gcnew String((temp_glava->broj_mobitela).c_str()));
						}
						temp_glava = temp_glava->sljedeci;
					}					
				}
			}
		}
		
		private: System::Void bunifuCustomDataGrid1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			DataGridViewRow^ row = bunifuCustomDataGrid1->Rows[e->RowIndex];			
			
			bunifuMaterialTextboxIme->Text = row->Cells[0]->Value->ToString();
			bunifuMaterialTextboxPrezime->Text = row->Cells[1]->Value->ToString();
			bunifuMaterialTextboxBrojMobitela->Text = row->Cells[2]->Value->ToString();

		}
		
		private: System::Void buttonIzbrisi_Click(System::Object^  sender, System::EventArgs^  e) {

			if (String::IsNullOrEmpty(this->bunifuMaterialTextboxIme->Text) || String::IsNullOrEmpty(this->bunifuMaterialTextboxPrezime->Text) || String::IsNullOrEmpty(this->bunifuMaterialTextboxBrojMobitela->Text) || System::Text::RegularExpressions::Regex::IsMatch(bunifuMaterialTextboxBrojMobitela->Text, "[^0-9]"))
			{
				MessageBox::Show("Ne ispravan unos !!!");
			}
			else
			{
				Osoba* temp_glava = glava;
				Osoba* predhodni = NULL;
				Osoba* pronadeni = NULL;
				bool izbrisan = false;
				bool odabir_no = false;
				string ime = msclr::interop::marshal_as<std::string>(bunifuMaterialTextboxIme->Text);
				string prezime = msclr::interop::marshal_as<std::string>(bunifuMaterialTextboxPrezime->Text);
				string broj = msclr::interop::marshal_as<std::string>(bunifuMaterialTextboxBrojMobitela->Text);

				while (temp_glava != NULL)
				{
					if (ime == temp_glava->ime && prezime == temp_glava->prezime && broj == temp_glava->broj_mobitela)
					{
						if (MessageBox::Show("Jeste li sigurni ?","Imenik", MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
						{
							pronadeni = temp_glava;

							if (pronadeni == glava)
							{
								glava = temp_glava->sljedeci;
							}
							else
							{
								predhodni->sljedeci = temp_glava->sljedeci;
							}
							delete pronadeni;
							izbrisan = true;
						}
						else
						{
							odabir_no = true;
						}
						temp_glava = NULL;
					}
					else
					{						
						predhodni = temp_glava;
						temp_glava = temp_glava->sljedeci;
					}
				}
				
				if (izbrisan == false && odabir_no == false)
				{
					MessageBox::Show("Korisnik s tim podacima ne postoji !!!");
				}
				else if(izbrisan == true)
				{
					MessageBox::Show("Uspiješno izbrisan.");
				}
			}

			this->bunifuMaterialTextboxIme->Text = "";
			this->bunifuMaterialTextboxPrezime->Text = "";
			this->bunifuMaterialTextboxBrojMobitela->Text = "";

			Ispis();
			
		}
		
		private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

			Osoba* temp = new Osoba;

			while (glava != NULL)
			{
				temp = glava->sljedeci;

				delete glava;

				glava = temp;
			}
		}
};
};

