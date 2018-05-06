#pragma once
#include "container.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project17 {

	/// <summary>
	/// Summary for MyUserContro_Register
	/// </summary>
	public ref class MyUserContro_Register : public System::Windows::Forms::UserControl
	{
	public:
		MyUserContro_Register(void)
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
		~MyUserContro_Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  BD_Month;
	protected:
	private: System::Windows::Forms::ComboBox^  BD_Year;
	private: System::Windows::Forms::ComboBox^  BD_Day;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  E_mail;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_Name;
	private: System::Windows::Forms::TextBox^  txt_pass;
	private: System::Windows::Forms::TextBox^  phone;
	private: System::Windows::Forms::Button^  btn_FRegister;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserContro_Register::typeid));
			System::Windows::Forms::Label^  label6;
			System::Windows::Forms::Label^  label7;
			System::Windows::Forms::Label^  label8;
			this->BD_Month = (gcnew System::Windows::Forms::ComboBox());
			this->BD_Year = (gcnew System::Windows::Forms::ComboBox());
			this->BD_Day = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->E_mail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_Name = (gcnew System::Windows::Forms::TextBox());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->phone = (gcnew System::Windows::Forms::TextBox());
			this->btn_FRegister = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			label6 = (gcnew System::Windows::Forms::Label());
			label7 = (gcnew System::Windows::Forms::Label());
			label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BD_Month
			// 
			this->BD_Month->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BD_Month->FormattingEnabled = true;
			this->BD_Month->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->BD_Month->Location = System::Drawing::Point(301, 336);
			this->BD_Month->Name = L"BD_Month";
			this->BD_Month->Size = System::Drawing::Size(69, 27);
			this->BD_Month->TabIndex = 33;
			// 
			// BD_Year
			// 
			this->BD_Year->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BD_Year->FormattingEnabled = true;
			this->BD_Year->Items->AddRange(gcnew cli::array< System::Object^  >(19) {
				L"1990", L"1991", L"1992", L"1993", L"1994", L"1995",
					L"1996", L"1997", L"1998", L"1999", L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008"
			});
			this->BD_Year->Location = System::Drawing::Point(376, 336);
			this->BD_Year->Name = L"BD_Year";
			this->BD_Year->Size = System::Drawing::Size(85, 27);
			this->BD_Year->TabIndex = 32;
			// 
			// BD_Day
			// 
			this->BD_Day->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BD_Day->FormattingEnabled = true;
			this->BD_Day->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08",
					L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->BD_Day->Location = System::Drawing::Point(248, 336);
			this->BD_Day->Name = L"BD_Day";
			this->BD_Day->Size = System::Drawing::Size(47, 27);
			this->BD_Day->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(150, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 19);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Birth Day";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(150, 271);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 19);
			this->label4->TabIndex = 29;
			this->label4->Text = L"E-mail";
			// 
			// E_mail
			// 
			this->E_mail->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->E_mail->Location = System::Drawing::Point(248, 268);
			this->E_mail->Name = L"E_mail";
			this->E_mail->Size = System::Drawing::Size(213, 27);
			this->E_mail->TabIndex = 28;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(150, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 19);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Phone";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(150, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 19);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(150, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 19);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Name";
			// 
			// txt_Name
			// 
			this->txt_Name->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Name->Location = System::Drawing::Point(248, 119);
			this->txt_Name->Name = L"txt_Name";
			this->txt_Name->Size = System::Drawing::Size(213, 27);
			this->txt_Name->TabIndex = 24;
			// 
			// txt_pass
			// 
			this->txt_pass->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pass->Location = System::Drawing::Point(248, 160);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->Size = System::Drawing::Size(213, 27);
			this->txt_pass->TabIndex = 23;
			this->txt_pass->UseSystemPasswordChar = true;
			// 
			// phone
			// 
			this->phone->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone->Location = System::Drawing::Point(248, 212);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(213, 27);
			this->phone->TabIndex = 22;
			// 
			// btn_FRegister
			// 
			this->btn_FRegister->BackColor = System::Drawing::Color::Olive;
			this->btn_FRegister->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_FRegister->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_FRegister->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_FRegister->Location = System::Drawing::Point(219, 384);
			this->btn_FRegister->Name = L"btn_FRegister";
			this->btn_FRegister->Size = System::Drawing::Size(129, 39);
			this->btn_FRegister->TabIndex = 21;
			this->btn_FRegister->Text = L"Register";
			this->btn_FRegister->UseVisualStyleBackColor = false;
			this->btn_FRegister->Click += gcnew System::EventHandler(this, &MyUserContro_Register::btn_FRegister_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(185, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 39);
			this->button1->TabIndex = 34;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			label6->AutoSize = true;
			label6->BackColor = System::Drawing::Color::Transparent;
			label6->Font = (gcnew System::Drawing::Font(L"Snap ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label6->Location = System::Drawing::Point(297, 314);
			label6->Name = L"label6";
			label6->Size = System::Drawing::Size(66, 19);
			label6->TabIndex = 39;
			label6->Text = L"Month";
			// 
			// label7
			// 
			label7->AutoSize = true;
			label7->BackColor = System::Drawing::Color::Transparent;
			label7->Font = (gcnew System::Drawing::Font(L"Snap ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label7->Location = System::Drawing::Point(372, 314);
			label7->Name = L"label7";
			label7->Size = System::Drawing::Size(53, 19);
			label7->TabIndex = 38;
			label7->Text = L"Year";
			// 
			// label8
			// 
			label8->AutoSize = true;
			label8->BackColor = System::Drawing::Color::Transparent;
			label8->Font = (gcnew System::Drawing::Font(L"Snap ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label8->Location = System::Drawing::Point(244, 314);
			label8->Name = L"label8";
			label8->Size = System::Drawing::Size(43, 19);
			label8->TabIndex = 37;
			label8->Text = L"Day";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(475, 122);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 19);
			this->label9->TabIndex = 40;
			this->label9->Text = L"*";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(475, 271);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 19);
			this->label10->TabIndex = 41;
			this->label10->Text = L"*";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(475, 215);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 19);
			this->label11->TabIndex = 42;
			this->label11->Text = L"*";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(475, 163);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 19);
			this->label12->TabIndex = 43;
			this->label12->Text = L"*";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(475, 340);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 19);
			this->label13->TabIndex = 44;
			this->label13->Text = L"*";
			// 
			// MyUserContro_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(label6);
			this->Controls->Add(label7);
			this->Controls->Add(label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BD_Month);
			this->Controls->Add(this->BD_Year);
			this->Controls->Add(this->BD_Day);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->E_mail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_Name);
			this->Controls->Add(this->txt_pass);
			this->Controls->Add(this->phone);
			this->Controls->Add(this->btn_FRegister);
			this->Name = L"MyUserContro_Register";
			this->Size = System::Drawing::Size(582, 527);
			this->Load += gcnew System::EventHandler(this, &MyUserContro_Register::MyUserContro_Register_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_FRegister_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^name = txt_Name->Text;
				 String^pass = txt_pass->Text;
				 String^phon = phone->Text;
				 String^Email = E_mail->Text;
				 String^Date = BD_Year->Text + "-" + BD_Month->Text + "-" + BD_Day->Text;
				 if ((txt_Name->Text == " ") || (txt_pass->Text == " ")|| (phone->Text == "") || (E_mail->Text == " ")
					 || (BD_Year->SelectedIndex == -1) || (BD_Month->SelectedIndex == -1)
					 || (BD_Day->SelectedIndex==-1))
				 {

					 MessageBox::Show("please Enter All Informtion Required", "Otlob Team", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else{
					 try{
						 container::customer = gcnew Customer(name, pass, phon, Email, Date);
						 container::customer->Register();
						 DialogResult R = MessageBox::Show("Congratulation! Do You Want To Try that ", "Successfully Registeration", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
						 if (R == DialogResult::Cancel){
							 Application::Exit();
						 }
						 else
						 {
							 MessageBox::Show("Otlob Team \n Enjoy\t\t\t\t ", "Otlob Team", MessageBoxButtons::OK, MessageBoxIcon::Information);
							 Application::Restart();
						 }

					 }
					 catch (String ^ error){
						 MessageBox::Show(error, "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);

					 }
				 }
	}
private: System::Void MyUserContro_Register_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
