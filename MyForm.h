#pragma once

namespace Hurtownia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		double wynik = 0;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ podstawowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rozszerzonyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zaawansowanyToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ToolStripMenuItem^ podstawowyToolStripMenuItem1;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->podstawowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->podstawowyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rozszerzonyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zaawansowanyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(171, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HURTOWNIA";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 76);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(469, 299);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(86, 404);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(305, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Id lub Nazwa";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->podstawowyToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(752, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// podstawowyToolStripMenuItem
			// 
			this->podstawowyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->podstawowyToolStripMenuItem1,
					this->rozszerzonyToolStripMenuItem, this->zaawansowanyToolStripMenuItem
			});
			this->podstawowyToolStripMenuItem->Name = L"podstawowyToolStripMenuItem";
			this->podstawowyToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->podstawowyToolStripMenuItem->Text = L"Widoki";
			// 
			// podstawowyToolStripMenuItem1
			// 
			this->podstawowyToolStripMenuItem1->Name = L"podstawowyToolStripMenuItem1";
			this->podstawowyToolStripMenuItem1->Size = System::Drawing::Size(155, 22);
			this->podstawowyToolStripMenuItem1->Text = L"Podstawowy";
			this->podstawowyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::podstawowyToolStripMenuItem1_Click);
			// 
			// rozszerzonyToolStripMenuItem
			// 
			this->rozszerzonyToolStripMenuItem->Name = L"rozszerzonyToolStripMenuItem";
			this->rozszerzonyToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->rozszerzonyToolStripMenuItem->Text = L"Rozszerzony";
			this->rozszerzonyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rozszerzonyToolStripMenuItem_Click);
			// 
			// zaawansowanyToolStripMenuItem
			// 
			this->zaawansowanyToolStripMenuItem->Name = L"zaawansowanyToolStripMenuItem";
			this->zaawansowanyToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->zaawansowanyToolStripMenuItem->Text = L"Zaawansowany";
			this->zaawansowanyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zaawansowanyToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(541, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"PODSTAWOWY";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(545, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 63);
			this->button1->TabIndex = 6;
			this->button1->Text = L"TOWARY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(545, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 69);
			this->button2->TabIndex = 7;
			this->button2->Text = L"SUMA";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(546, 220);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 73);
			this->button3->TabIndex = 8;
			this->button3->Text = L"WARTOŒÆ NETTO DLA SUMY";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(546, 299);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 76);
			this->button4->TabIndex = 9;
			this->button4->Text = L"WARTOŒÆ BRUTTO DLA SUMY WSZYSTKICH TOWARÓW\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(546, 393);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(164, 39);
			this->button5->TabIndex = 10;
			this->button5->Text = L"INFO O PRODUKCIE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(546, 446);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(164, 39);
			this->button6->TabIndex = 11;
			this->button6->Text = L"SK£AD DRU¯YNY";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 497);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Height = 430;
		label3->Text = "PODSTAWOWY";
	}
private: System::Void rozszerzonyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Height = 480;
	label3->Text = "ROZSZERZONY";
}
private: System::Void zaawansowanyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Height = 550;
	label3->Text = "ZAAWANSOWANY";
}
private: System::Void podstawowyToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Height = 430;
	label3->Text = "PODSTAWOWY";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=''";
	MySqlConnection^ polaczenie = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT id, nazwa, cena, stan FROM hurtownia.towary;", polaczenie);
	MySqlDataReader^ odczytanie;

	try {
		polaczenie->Open();
		odczytanie = zapytanie->ExecuteReader();
		while (odczytanie->Read()) {
			textBox1->Text += "ID: " + odczytanie->GetString(0) + ", " + "NAZWA: " + odczytanie->GetString(1) + ", " + "CENA: " + odczytanie->GetString(2) + ", " + "STAN: " + odczytanie->GetString(3) + "\r\n";
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=''";
	MySqlConnection^ polaczenie = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT SUM(cena) FROM hurtownia.towary;", polaczenie);
	MySqlDataReader^ odczytanie;

	try {
		polaczenie->Open();
		odczytanie = zapytanie->ExecuteReader();
		while (odczytanie->Read()) {
			textBox1->Text = "Suma towarów: " + odczytanie->GetString(0);
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=''";
	MySqlConnection^ polaczenie = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT SUM(cena)-(SUM(cena)*0.23) FROM hurtownia.towary", polaczenie);
	MySqlDataReader^ odczytanie;

	try {
		polaczenie->Open();
		odczytanie = zapytanie->ExecuteReader();
		while (odczytanie->Read()) {
			textBox1->Text = "Suma towarów netto: " + odczytanie->GetString(0) + " 23%";
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=''";
	MySqlConnection^ polaczenie = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT SUM(cena) FROM hurtownia.towary;", polaczenie);
	MySqlDataReader^ odczytanie;

	try {
		polaczenie->Open();
		odczytanie = zapytanie->ExecuteReader();
		while (odczytanie->Read()) {
			textBox1->Text = "Suma towarów brutto: " + odczytanie->GetString(0);
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=''";
	MySqlConnection^ polaczenie = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM hurtownia.towary WHERE id='" + textBox2->Text + "';" , polaczenie);
	MySqlDataReader^ odczytanie;

	try {
		polaczenie->Open();
		odczytanie = zapytanie->ExecuteReader();
		while (odczytanie->Read()) {
			textBox1->Text += "ID: " + odczytanie->GetString(0) + ", " + "NAZWA: " + odczytanie->GetString(1) + ", " + "CENA: " + odczytanie->GetString(2) + ", " + "STAN: " + odczytanie->GetString(3) + "\r\n";
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Patryk Wojciech, B³a¿ej Bry³a, £ukasz Miczek, Tobiasz Luszowski - Niedzielni programiœci");
}
};
}
