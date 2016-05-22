#pragma once
#include "stdafx.h"
#include "Form2.h"
#include "Form3.h"

namespace Symulacja_rzutu_ukoœnego {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		double y_pocz=0;
		double xv=0;
		double yv_pocz=0;


			 double g = 9.80665;
	public:
		Form1(void)
		{			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  v_text;
	private: System::Windows::Forms::Label^  alfa_text;	
	private: System::Windows::Forms::TextBox^  v;
	private: System::Windows::Forms::TextBox^  alfa;
	private: System::Windows::Forms::Button^  Rzut;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;	
	private: System::Windows::Forms::ToolTip^  Pomoc;
	private: System::ComponentModel::IContainer^  components;	

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->v_text = (gcnew System::Windows::Forms::Label());
			this->alfa_text = (gcnew System::Windows::Forms::Label());
			this->v = (gcnew System::Windows::Forms::TextBox());
			this->alfa = (gcnew System::Windows::Forms::TextBox());
			this->Rzut = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Pomoc = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// v_text
			// 
			this->v_text->AutoSize = true;
			this->v_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->v_text->Location = System::Drawing::Point(12, 27);
			this->v_text->Name = L"v_text";
			this->v_text->Size = System::Drawing::Size(168, 20);
			this->v_text->TabIndex = 1;
			this->v_text->Text = L"Prêdkoœæ pocz¹tkowa:";
			// 
			// alfa_text
			// 
			this->alfa_text->AutoSize = true;
			this->alfa_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->alfa_text->Location = System::Drawing::Point(12, 53);
			this->alfa_text->Name = L"alfa_text";
			this->alfa_text->Size = System::Drawing::Size(37, 20);
			this->alfa_text->TabIndex = 2;
			this->alfa_text->Text = L"K¹t:";
			// 
			// v
			// 
			this->v->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->v->Location = System::Drawing::Point(182, 27);
			this->v->Name = L"v";
			this->v->Size = System::Drawing::Size(100, 20);
			this->v->TabIndex = 4;
			this->Pomoc->SetToolTip(this->v, L"Przyjmuje wartoœci wiêksze od 0");
			// 
			// alfa
			// 
			this->alfa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->alfa->Location = System::Drawing::Point(182, 53);
			this->alfa->Name = L"alfa";
			this->alfa->Size = System::Drawing::Size(100, 20);
			this->alfa->TabIndex = 5;
			this->Pomoc->SetToolTip(this->alfa, L"Przyjmuje wartoœci od -90 do 90");
			// 
			// Rzut
			// 
			this->Rzut->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Rzut->Location = System::Drawing::Point(70, 85);
			this->Rzut->Name = L"Rzut";
			this->Rzut->Size = System::Drawing::Size(170, 40);
			this->Rzut->TabIndex = 6;
			this->Rzut->Text = L"Rzut";
			this->Rzut->UseVisualStyleBackColor = true;
			this->Rzut->Click += gcnew System::EventHandler(this, &Form1::Rzut_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->plikToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(294, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->opcjeToolStripMenuItem,
					this->toolStripSeparator1, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// opcjeToolStripMenuItem
			// 
			this->opcjeToolStripMenuItem->Name = L"opcjeToolStripMenuItem";
			this->opcjeToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->opcjeToolStripMenuItem->Text = L"Opcje";
			this->opcjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcjeToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(156, 6);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zamknijToolStripMenuItem_Click);
			// 
			// Pomoc
			// 
			this->Pomoc->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->Pomoc->ToolTipTitle = L"Info";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 137);
			this->Controls->Add(this->Rzut);
			this->Controls->Add(this->alfa);
			this->Controls->Add(this->v);
			this->Controls->Add(this->alfa_text);
			this->Controls->Add(this->v_text);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(310, 175);
			this->Name = L"Form1";
			this->Text = L"Symulacja rzutu ukoœnego";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void zamknijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void Rzut_Click(System::Object^  sender, System::EventArgs^  e) {	
	try{
		if (Double::Parse(v->Text) < 0){
			MessageBox::Show("B³êdne dane w Prêdkoœæ pocz¹tkowa", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else{			
			try{
				if ((Double::Parse(alfa->Text) < -90) || (Double::Parse(alfa->Text) > 90)){
					MessageBox::Show("B³êdne dane w K¹t", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else{
					if (Double::Parse(alfa->Text) == -90){
						xv = 0;
						yv_pocz = -1 * Double::Parse(v->Text);
					}
					else if (Double::Parse(alfa->Text) == 90){
						xv = 0;
						yv_pocz = 1 * Double::Parse(v->Text);
					}
					else{
						xv = Double::Parse(v->Text)*cos(Double::Parse(alfa->Text)*(3.14159265359 / 180));
						yv_pocz = Double::Parse(v->Text)*sin(Double::Parse(alfa->Text)*(3.14159265359/180));
					}
					Form2^ okno = gcnew Form2();
					okno->przeslij_dane(this->y_pocz, this->xv, this->yv_pocz, this->g);
					okno->Show();
				}
			}
			catch (Exception ^wyjatek){
				MessageBox::Show("B³êdne dane w K¹t", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	catch (Exception ^wyjatek){
		MessageBox::Show("B³êdne dane w Prêdkoœæ pocz¹tkowa", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void opcjeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {	
	Form3^ okno = gcnew Form3();
	okno->przeslij_dane(this->y_pocz, this->g);
	okno->ShowDialog();
	this->y_pocz = okno->get_y_pocz();	
	this->g = okno->get_g();
}
};
}

