#pragma once
#include<cmath>

namespace Symulacja_rzutu_ukoœnego {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	 double y_pocz=0;
	 double xv=0;
	 double yv_pocz=0;
	 double g = 9.80665;
	private: System::Windows::Forms::Label^  Tmax_text;
	private: System::Windows::Forms::Label^  Tmax;

			 double t = 0;
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  alfa;
	private: System::Windows::Forms::Label^  v;
	private: System::Windows::Forms::Label^  Y;
	private: System::Windows::Forms::Label^  X;
	private: System::Windows::Forms::Label^  t_text;
	private: System::Windows::Forms::Label^  alfa_text;
	private: System::Windows::Forms::Label^  v_text;
	private: System::Windows::Forms::Label^  Y_text;
	private: System::Windows::Forms::Label^  X_text;
	private: System::Windows::Forms::TextBox^  T;

	private: System::Windows::Forms::Button^  Start;
	private: System::Windows::Forms::Button^  Zmien_t;
	private: System::Windows::Forms::Button^  Zamknij;
	private: System::Windows::Forms::ToolTip^  Pomoc;
	private: System::Windows::Forms::Timer^  Timer;
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
			this->alfa = (gcnew System::Windows::Forms::Label());
			this->v = (gcnew System::Windows::Forms::Label());
			this->Y = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::Label());
			this->t_text = (gcnew System::Windows::Forms::Label());
			this->alfa_text = (gcnew System::Windows::Forms::Label());
			this->v_text = (gcnew System::Windows::Forms::Label());
			this->Y_text = (gcnew System::Windows::Forms::Label());
			this->X_text = (gcnew System::Windows::Forms::Label());
			this->T = (gcnew System::Windows::Forms::TextBox());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Zmien_t = (gcnew System::Windows::Forms::Button());
			this->Zamknij = (gcnew System::Windows::Forms::Button());
			this->Pomoc = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Tmax_text = (gcnew System::Windows::Forms::Label());
			this->Tmax = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// alfa
			// 
			this->alfa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->alfa->AutoEllipsis = true;
			this->alfa->AutoSize = true;
			this->alfa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->alfa->Location = System::Drawing::Point(182, 69);
			this->alfa->MaximumSize = System::Drawing::Size(90, 20);
			this->alfa->Name = L"alfa";
			this->alfa->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->alfa->Size = System::Drawing::Size(48, 20);
			this->alfa->TabIndex = 19;
			this->alfa->Text = L"Label";
			this->alfa->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// v
			// 
			this->v->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->v->AutoEllipsis = true;
			this->v->AutoSize = true;
			this->v->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->v->Location = System::Drawing::Point(182, 49);
			this->v->MaximumSize = System::Drawing::Size(90, 20);
			this->v->Name = L"v";
			this->v->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->v->Size = System::Drawing::Size(48, 20);
			this->v->TabIndex = 18;
			this->v->Text = L"Label";
			this->v->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Y
			// 
			this->Y->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Y->AutoEllipsis = true;
			this->Y->AutoSize = true;
			this->Y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Y->Location = System::Drawing::Point(182, 29);
			this->Y->MaximumSize = System::Drawing::Size(90, 20);
			this->Y->Name = L"Y";
			this->Y->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Y->Size = System::Drawing::Size(48, 20);
			this->Y->TabIndex = 17;
			this->Y->Text = L"Label";
			this->Y->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// X
			// 
			this->X->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->X->AutoEllipsis = true;
			this->X->AutoSize = true;
			this->X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->X->Location = System::Drawing::Point(182, 9);
			this->X->MaximumSize = System::Drawing::Size(90, 20);
			this->X->Name = L"X";
			this->X->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->X->Size = System::Drawing::Size(48, 20);
			this->X->TabIndex = 16;
			this->X->Text = L"Label";
			this->X->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// t_text
			// 
			this->t_text->AutoSize = true;
			this->t_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->t_text->Location = System::Drawing::Point(12, 89);
			this->t_text->Name = L"t_text";
			this->t_text->Size = System::Drawing::Size(49, 20);
			this->t_text->TabIndex = 15;
			this->t_text->Text = L"Czas:";
			// 
			// alfa_text
			// 
			this->alfa_text->AutoSize = true;
			this->alfa_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->alfa_text->Location = System::Drawing::Point(12, 69);
			this->alfa_text->Name = L"alfa_text";
			this->alfa_text->Size = System::Drawing::Size(41, 20);
			this->alfa_text->TabIndex = 14;
			this->alfa_text->Text = L"K¹t: ";
			// 
			// v_text
			// 
			this->v_text->AutoSize = true;
			this->v_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->v_text->Location = System::Drawing::Point(12, 49);
			this->v_text->Name = L"v_text";
			this->v_text->Size = System::Drawing::Size(83, 20);
			this->v_text->TabIndex = 13;
			this->v_text->Text = L"Prêdkoœæ: ";
			// 
			// Y_text
			// 
			this->Y_text->AutoSize = true;
			this->Y_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Y_text->Location = System::Drawing::Point(12, 29);
			this->Y_text->Name = L"Y_text";
			this->Y_text->Size = System::Drawing::Size(48, 20);
			this->Y_text->TabIndex = 12;
			this->Y_text->Text = L"Oœ Y:";
			// 
			// X_text
			// 
			this->X_text->AutoSize = true;
			this->X_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->X_text->Location = System::Drawing::Point(12, 9);
			this->X_text->Name = L"X_text";
			this->X_text->Size = System::Drawing::Size(48, 20);
			this->X_text->TabIndex = 11;
			this->X_text->Text = L"Oœ X:";
			// 
			// T
			// 
			this->T->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->T->Location = System::Drawing::Point(186, 89);
			this->T->Name = L"T";
			this->T->Size = System::Drawing::Size(86, 20);
			this->T->TabIndex = 20;
			this->Pomoc->SetToolTip(this->T, L"Przyjmuje wartoœci od 0 do Tmax");
			// 
			// Start
			// 
			this->Start->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Start->Location = System::Drawing::Point(12, 155);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(80, 25);
			this->Start->TabIndex = 21;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &Form2::Start_Click);
			// 
			// Zmien_t
			// 
			this->Zmien_t->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Zmien_t->Location = System::Drawing::Point(102, 155);
			this->Zmien_t->Margin = System::Windows::Forms::Padding(7, 3, 7, 3);
			this->Zmien_t->Name = L"Zmien_t";
			this->Zmien_t->Size = System::Drawing::Size(80, 25);
			this->Zmien_t->TabIndex = 22;
			this->Zmien_t->Text = L"Zmieñ czas";
			this->Zmien_t->UseVisualStyleBackColor = true;
			this->Zmien_t->Click += gcnew System::EventHandler(this, &Form2::Zmien_t_Click);
			// 
			// Zamknij
			// 
			this->Zamknij->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Zamknij->Location = System::Drawing::Point(192, 155);
			this->Zamknij->Name = L"Zamknij";
			this->Zamknij->Size = System::Drawing::Size(80, 25);
			this->Zamknij->TabIndex = 23;
			this->Zamknij->Text = L"Zamknij";
			this->Zamknij->UseVisualStyleBackColor = true;
			this->Zamknij->Click += gcnew System::EventHandler(this, &Form2::Zamknij_Click);
			// 
			// Pomoc
			// 
			this->Pomoc->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->Pomoc->ToolTipTitle = L"Info";
			// 
			// Timer
			// 
			this->Timer->Tick += gcnew System::EventHandler(this, &Form2::Timer_Tick);
			// 
			// Tmax_text
			// 
			this->Tmax_text->AutoSize = true;
			this->Tmax_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Tmax_text->Location = System::Drawing::Point(12, 112);
			this->Tmax_text->Name = L"Tmax_text";
			this->Tmax_text->Size = System::Drawing::Size(51, 20);
			this->Tmax_text->TabIndex = 24;
			this->Tmax_text->Text = L"Tmax:";
			// 
			// Tmax
			// 
			this->Tmax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Tmax->AutoSize = true;
			this->Tmax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Tmax->Location = System::Drawing::Point(182, 112);
			this->Tmax->MaximumSize = System::Drawing::Size(90, 20);
			this->Tmax->Name = L"Tmax";
			this->Tmax->Size = System::Drawing::Size(48, 20);
			this->Tmax->TabIndex = 25;
			this->Tmax->Text = L"Label";
			this->Tmax->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 192);
			this->Controls->Add(this->Tmax);
			this->Controls->Add(this->Tmax_text);
			this->Controls->Add(this->Zamknij);
			this->Controls->Add(this->Zmien_t);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->T);
			this->Controls->Add(this->alfa);
			this->Controls->Add(this->v);
			this->Controls->Add(this->Y);
			this->Controls->Add(this->X);
			this->Controls->Add(this->t_text);
			this->Controls->Add(this->alfa_text);
			this->Controls->Add(this->v_text);
			this->Controls->Add(this->Y_text);
			this->Controls->Add(this->X_text);
			this->MinimumSize = System::Drawing::Size(300, 230);
			this->Name = L"Form2";
			this->Text = L"Rzut";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: Void przeslij_dane(double y_poczw, double xvw, double yv_poczw, double gw){
	this->y_pocz = y_poczw;
	this->xv = xvw;
	this->yv_pocz = yv_poczw;
	this->g = gw;	
	this->X->Text = (t*xv).ToString();
	this->Y->Text = (y_pocz + t*yv_pocz - ((g / 2)*t*t)).ToString();
	this->v->Text = (sqrt((yv_pocz - g*t)*(yv_pocz - g*t) + xv*xv)).ToString();
	if (xv!=0){
		this->alfa->Text = ((atan((yv_pocz - g*t) / xv))*(180 / 3.14159265359)).ToString();
	}
	else if (xv == 0 && yv_pocz - g*t>0){
		this->alfa->Text = "90";
	}
	else{
		this->alfa->Text = "-90";
	}
	this->T->Text = t.ToString();
	this->Tmax->Text = ((-yv_pocz - sqrt(yv_pocz*yv_pocz - 4 * (g / 2)*y_pocz)) / (-g)).ToString();
}
private: System::Void Timer_Tick(System::Object^  sender, System::EventArgs^  e) {
	t += 0.1;
	if (t >= (-yv_pocz - sqrt(yv_pocz*yv_pocz - 4 * (g / 2)*y_pocz)) / (-g)){
		t = (-yv_pocz - sqrt(yv_pocz*yv_pocz - 4 * (g / 2)*y_pocz)) / (-g);
		this->Timer->Enabled = false;
	}
	this->X->Text = (t*xv).ToString();
	this->Y->Text = (y_pocz + t*yv_pocz - ((g / 2)*t*t)).ToString();
	this->v->Text = (sqrt((yv_pocz - g*t)*(yv_pocz - g*t) + xv*xv)).ToString();
	if (xv != 0){
		this->alfa->Text = ((atan((yv_pocz - g*t) / xv))*(180 / 3.14159265359)).ToString();
	}
	else if (xv == 0 && yv_pocz - g*t>0){
		this->alfa->Text = "90";
	}
	else{
		this->alfa->Text = "-90";
	}
	this->T->Text = t.ToString();	
}
private: System::Void Zamknij_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void Zmien_t_Click(System::Object^  sender, System::EventArgs^  e) {
	try{
		if (Double::Parse(T->Text) < 0 || Double::Parse(T->Text) > ((-yv_pocz - sqrt(yv_pocz*yv_pocz - 4 * (g / 2)*y_pocz)) / (-g))){
			MessageBox::Show("B³êdne dane w Czas", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else{
			t = Double::Parse(T->Text);
			this->X->Text = (t*xv).ToString();
			this->Y->Text = (y_pocz + t*yv_pocz - ((g / 2)*t*t)).ToString();
			this->v->Text = (sqrt((yv_pocz - g*t)*(yv_pocz - g*t) + xv*xv)).ToString();
			if (xv != 0){
				this->alfa->Text = ((atan((yv_pocz - g*t) / xv))*(180 / 3.14159265359)).ToString();
			}
			else if (xv == 0 && yv_pocz - g*t>0){
				this->alfa->Text = "90";
			}
			else{
				this->alfa->Text = "-90";
			}
			this->T->Text = t.ToString();
		}
	}
	catch (Exception ^wyjatek){
		MessageBox::Show("B³êdne dane w Czas", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->Timer->Enabled == true){
		this->Timer->Enabled = false;
		this->Start->Text = "Start";
	}
	else if(t < ((-yv_pocz - sqrt(yv_pocz*yv_pocz - 4 * (g / 2)*y_pocz)) / (-g))){
		this->Timer->Enabled = true;
		this->Start->Text = "Stop";
	}
}
};
}
