#pragma once


namespace Symulacja_rzutu_ukoœnego {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
		double y_pocz = 0;		
		double gg = 9.80665;		
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  g;
	protected:
	private: System::Windows::Forms::Label^  g_text;
	private: System::Windows::Forms::TextBox^  h;
	private: System::Windows::Forms::Label^  h_text;
	private: System::Windows::Forms::Button^  OK;
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
			this->g = (gcnew System::Windows::Forms::TextBox());
			this->g_text = (gcnew System::Windows::Forms::Label());
			this->h = (gcnew System::Windows::Forms::TextBox());
			this->h_text = (gcnew System::Windows::Forms::Label());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->Pomoc = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// g
			// 
			this->g->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->g->Location = System::Drawing::Point(242, 35);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(100, 20);
			this->g->TabIndex = 12;
			this->g->Text = L"9.80665";
			this->Pomoc->SetToolTip(this->g, L"Przyjmuje wartoœci wiêksze ni¿ 0");
			// 
			// g_text
			// 
			this->g_text->AutoSize = true;
			this->g_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->g_text->Location = System::Drawing::Point(12, 35);
			this->g_text->Name = L"g_text";
			this->g_text->Size = System::Drawing::Size(209, 20);
			this->g_text->TabIndex = 11;
			this->g_text->Text = L"Przyspieszenie grawitacyjne:";
			// 
			// h
			// 
			this->h->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->h->Location = System::Drawing::Point(242, 9);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(100, 20);
			this->h->TabIndex = 10;
			this->h->Text = L"0";
			this->Pomoc->SetToolTip(this->h, L"Przyjmuje wartoœci wiêksze ni¿ 0");
			// 
			// h_text
			// 
			this->h_text->AutoSize = true;
			this->h_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->h_text->Location = System::Drawing::Point(12, 9);
			this->h_text->Name = L"h_text";
			this->h_text->Size = System::Drawing::Size(174, 20);
			this->h_text->TabIndex = 9;
			this->h_text->Text = L"Wysokoœæ pocz¹tkowa:";
			// 
			// OK
			// 
			this->OK->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->OK->Location = System::Drawing::Point(100, 65);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(170, 35);
			this->OK->TabIndex = 13;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &Form3::OK_Click);
			// 
			// Pomoc
			// 
			this->Pomoc->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->Pomoc->ToolTipTitle = L"Info";
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 112);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->g);
			this->Controls->Add(this->g_text);
			this->Controls->Add(this->h);
			this->Controls->Add(this->h_text);
			this->MinimumSize = System::Drawing::Size(370, 150);
			this->Name = L"Form3";
			this->Text = L"Opcje";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: Void przeslij_dane(double y_poczw, double gw){
	this->y_pocz = y_poczw;
	this->h->Text = y_pocz.ToString();
	this->gg = gw;
	this->g->Text = gg.ToString();
}
public: double get_y_pocz(){
	return this->y_pocz;	
}
public: double get_g(){	
	return this->gg;
}
private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e) {
	try{		
		if (Double::Parse(h->Text) < 0){			
			MessageBox::Show("B³êdne dane w Wysokoœæ pocz¹tkowa", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else{
			this->y_pocz = Double::Parse(h->Text);
			try{
				if (Double::Parse(g->Text) < 0){					
					MessageBox::Show("B³êdne dane w Przyspieszenie grawitacyjne", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else{
					this->gg = Double::Parse(g->Text);
					Close();
				}
			}
			catch (Exception ^wyjatek){				
				MessageBox::Show("B³êdne dane w Przyspieszenie grawitacyjne", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	catch (Exception ^wyjatek){		
		MessageBox::Show("B³êdne dane w Wysokoœæ pocz¹tkowa","B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}		
}
};
}
