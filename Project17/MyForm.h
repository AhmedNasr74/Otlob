#pragma once
#include "MyUserContro_Register.h"
#include "MyForm_Admain.h"
#include"MyForm_Customer.h"
#include "container.h"
namespace Project17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_login;
	protected:
	private: System::Windows::Forms::Button^  Log_in;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Pass_;
	private: System::Windows::Forms::TextBox^  User_name;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel_login = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Log_in = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Pass_ = (gcnew System::Windows::Forms::TextBox());
			this->User_name = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel_login->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_login
			// 
			this->panel_login->BackColor = System::Drawing::Color::Transparent;
			this->panel_login->Controls->Add(this->button1);
			this->panel_login->Controls->Add(this->Log_in);
			this->panel_login->Controls->Add(this->linkLabel1);
			this->panel_login->Controls->Add(this->label1);
			this->panel_login->Controls->Add(this->label2);
			this->panel_login->Controls->Add(this->Pass_);
			this->panel_login->Controls->Add(this->User_name);
			this->panel_login->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel_login->Location = System::Drawing::Point(97, 138);
			this->panel_login->Name = L"panel_login";
			this->panel_login->Size = System::Drawing::Size(439, 314);
			this->panel_login->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OliveDrab;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(102, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 52);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Log_in
			// 
			this->Log_in->BackColor = System::Drawing::Color::Olive;
			this->Log_in->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Log_in->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Log_in->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Log_in->Location = System::Drawing::Point(153, 159);
			this->Log_in->Name = L"Log_in";
			this->Log_in->Size = System::Drawing::Size(139, 52);
			this->Log_in->TabIndex = 5;
			this->Log_in->Text = L"Log in";
			this->Log_in->UseVisualStyleBackColor = false;
			this->Log_in->Click += gcnew System::EventHandler(this, &MyForm::Log_in_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::OliveDrab;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::OliveDrab;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->linkLabel1->LinkColor = System::Drawing::Color::Ivory;
			this->linkLabel1->Location = System::Drawing::Point(77, 277);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(348, 24);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Click here To be Part of Our System";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(46, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(46, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// Pass_
			// 
			this->Pass_->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pass_->Location = System::Drawing::Point(203, 102);
			this->Pass_->Name = L"Pass_";
			this->Pass_->Size = System::Drawing::Size(133, 27);
			this->Pass_->TabIndex = 4;
			this->Pass_->UseSystemPasswordChar = true;
			// 
			// User_name
			// 
			this->User_name->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->User_name->Location = System::Drawing::Point(203, 65);
			this->User_name->Name = L"User_name";
			this->User_name->Size = System::Drawing::Size(133, 27);
			this->User_name->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel_login);
			this->panel1->Location = System::Drawing::Point(1, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(568, 487);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Jokerman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(136, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(301, 70);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Otlop Food";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(312, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(570, 488);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Otlob Food";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel_login->ResumeLayout(false);
			this->panel_login->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		MyUserContro_Register^U_obj = gcnew MyUserContro_Register();
		panel_login->Visible = false;
		panel1->Controls->Add(U_obj);
	}
private: System::Void Log_in_Click(System::Object^  sender, System::EventArgs^  e) {
	if (User_name->Text == "" || Pass_->Text == ""){
		MessageBox::Show("Enter YourName Or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else{
		String ^ permssion;
		Database ^ login = gcnew Database();
		login->openConnection();
		String ^ Query = "select * from users where username='" + User_name->Text + "'";
		SqlCommand ^ cmd = gcnew SqlCommand(Query, login->getConnection());
		SqlDataReader ^ reader = cmd->ExecuteReader();
		if (reader->Read()){
			permssion = System::Convert::ToString(reader["permession"]) == "1" ? "Manger" : "Customer";
			if (permssion == "Manger")
			{
				Int16 count = System::Convert::ToInt16(container::manger->login(User_name->Text, Pass_->Text));
				if (count > 0)
				{
					container::manger->setUserName(User_name->Text);
					MyForm_Admain^Admin = gcnew MyForm_Admain();
					this->Hide();
					Admin->Show();
				}
				else
				{
					MessageBox::Show("Invalid Username Or Password\t\t", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else if (permssion == "Customer")
			{
				Int16 count = System::Convert::ToInt16(container::customer->login(User_name->Text, Pass_->Text));
				if (count > 0)
				{
					container::customer->setUserName(User_name->Text);
					container::customer->getData();
					MyForm_Customer ^custom_obj = gcnew MyForm_Customer();
					this->Hide();
					custom_obj->Show();

				}
				else
				{
					MessageBox::Show("Invalid Username Or Password\t\t", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		else
		{
			MessageBox::Show("Invalid Username Or Password\t\t", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 container ^x = gcnew container();
			 container::order->CheckorderStat();
}
};
}
