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
	/// Summary for MyUserControl_Deliveryboy
	/// </summary>
	public ref class MyUserControl_Deliveryboy : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl_Deliveryboy(void)
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
		~MyUserControl_Deliveryboy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel_remove;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txt_removeres;
	private: System::Windows::Forms::Button^  btn_Remo_emp;
	private: System::Windows::Forms::TextBox^  txt_removID;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel_add;
	private: System::Windows::Forms::TextBox^  txt_res;
	private: System::Windows::Forms::TextBox^  txt_phone;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt_empname;
	private: System::Windows::Forms::Button^  btn_Save_emp;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_Add;
	private: System::Windows::Forms::Button^  btn_Remov;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl_Deliveryboy::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel_remove = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_removeres = (gcnew System::Windows::Forms::TextBox());
			this->btn_Remo_emp = (gcnew System::Windows::Forms::Button());
			this->txt_removID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel_add = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_res = (gcnew System::Windows::Forms::TextBox());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_empname = (gcnew System::Windows::Forms::TextBox());
			this->btn_Save_emp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_Remov = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel_remove->SuspendLayout();
			this->panel_add->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(667, 406);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(13, 18);
			this->panel1->TabIndex = 5;
			// 
			// panel_remove
			// 
			this->panel_remove->BackColor = System::Drawing::Color::Transparent;
			this->panel_remove->Controls->Add(this->button4);
			this->panel_remove->Controls->Add(this->label5);
			this->panel_remove->Controls->Add(this->txt_removeres);
			this->panel_remove->Controls->Add(this->btn_Remo_emp);
			this->panel_remove->Controls->Add(this->txt_removID);
			this->panel_remove->Controls->Add(this->label3);
			this->panel_remove->Location = System::Drawing::Point(458, 94);
			this->panel_remove->Name = L"panel_remove";
			this->panel_remove->Size = System::Drawing::Size(364, 197);
			this->panel_remove->TabIndex = 7;
			this->panel_remove->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(77, 133);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 39);
			this->button4->TabIndex = 68;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(16, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Resturant ID";
			// 
			// txt_removeres
			// 
			this->txt_removeres->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_removeres->Location = System::Drawing::Point(168, 61);
			this->txt_removeres->Name = L"txt_removeres";
			this->txt_removeres->Size = System::Drawing::Size(127, 27);
			this->txt_removeres->TabIndex = 5;
			// 
			// btn_Remo_emp
			// 
			this->btn_Remo_emp->BackColor = System::Drawing::Color::DimGray;
			this->btn_Remo_emp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Remo_emp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Remo_emp->ForeColor = System::Drawing::Color::White;
			this->btn_Remo_emp->Location = System::Drawing::Point(130, 133);
			this->btn_Remo_emp->Name = L"btn_Remo_emp";
			this->btn_Remo_emp->Size = System::Drawing::Size(148, 39);
			this->btn_Remo_emp->TabIndex = 4;
			this->btn_Remo_emp->Text = L"Remove";
			this->btn_Remo_emp->UseVisualStyleBackColor = false;
			this->btn_Remo_emp->Click += gcnew System::EventHandler(this, &MyUserControl_Deliveryboy::btn_Remo_emp_Click);
			// 
			// txt_removID
			// 
			this->txt_removID->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_removID->Location = System::Drawing::Point(168, 21);
			this->txt_removID->Name = L"txt_removID";
			this->txt_removID->Size = System::Drawing::Size(127, 27);
			this->txt_removID->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(16, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Enter ID";
			// 
			// panel_add
			// 
			this->panel_add->BackColor = System::Drawing::Color::Transparent;
			this->panel_add->Controls->Add(this->button2);
			this->panel_add->Controls->Add(this->txt_res);
			this->panel_add->Controls->Add(this->txt_phone);
			this->panel_add->Controls->Add(this->label4);
			this->panel_add->Controls->Add(this->txt_empname);
			this->panel_add->Controls->Add(this->btn_Save_emp);
			this->panel_add->Controls->Add(this->label2);
			this->panel_add->Controls->Add(this->label1);
			this->panel_add->Location = System::Drawing::Point(81, 92);
			this->panel_add->Name = L"panel_add";
			this->panel_add->Size = System::Drawing::Size(361, 199);
			this->panel_add->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(114, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 40);
			this->button2->TabIndex = 67;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// txt_res
			// 
			this->txt_res->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_res->Location = System::Drawing::Point(195, 20);
			this->txt_res->Name = L"txt_res";
			this->txt_res->Size = System::Drawing::Size(140, 27);
			this->txt_res->TabIndex = 9;
			// 
			// txt_phone
			// 
			this->txt_phone->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_phone->Location = System::Drawing::Point(195, 86);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(140, 27);
			this->txt_phone->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(13, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 35);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Phone";
			// 
			// txt_empname
			// 
			this->txt_empname->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_empname->Location = System::Drawing::Point(195, 55);
			this->txt_empname->Name = L"txt_empname";
			this->txt_empname->Size = System::Drawing::Size(140, 27);
			this->txt_empname->TabIndex = 5;
			// 
			// btn_Save_emp
			// 
			this->btn_Save_emp->BackColor = System::Drawing::Color::DimGray;
			this->btn_Save_emp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Save_emp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Save_emp->ForeColor = System::Drawing::Color::White;
			this->btn_Save_emp->Location = System::Drawing::Point(162, 139);
			this->btn_Save_emp->Name = L"btn_Save_emp";
			this->btn_Save_emp->Size = System::Drawing::Size(129, 40);
			this->btn_Save_emp->TabIndex = 3;
			this->btn_Save_emp->Text = L"Save";
			this->btn_Save_emp->UseVisualStyleBackColor = false;
			this->btn_Save_emp->Click += gcnew System::EventHandler(this, &MyUserControl_Deliveryboy::btn_Save_emp_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(18, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 35);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Boy Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(13, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Resturant ID";
			// 
			// btn_Add
			// 
			this->btn_Add->BackColor = System::Drawing::Color::DimGray;
			this->btn_Add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Add->ForeColor = System::Drawing::Color::White;
			this->btn_Add->Location = System::Drawing::Point(204, 13);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(196, 62);
			this->btn_Add->TabIndex = 4;
			this->btn_Add->Text = L"Add_Delivery Boy";
			this->btn_Add->UseVisualStyleBackColor = false;
			this->btn_Add->Click += gcnew System::EventHandler(this, &MyUserControl_Deliveryboy::btn_Add_Click);
			// 
			// btn_Remov
			// 
			this->btn_Remov->BackColor = System::Drawing::Color::DimGray;
			this->btn_Remov->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Remov->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Remov->ForeColor = System::Drawing::Color::White;
			this->btn_Remov->Location = System::Drawing::Point(500, 12);
			this->btn_Remov->Name = L"btn_Remov";
			this->btn_Remov->Size = System::Drawing::Size(196, 60);
			this->btn_Remov->TabIndex = 3;
			this->btn_Remov->Text = L"Remove Delivery Boy";
			this->btn_Remov->UseVisualStyleBackColor = false;
			this->btn_Remov->Click += gcnew System::EventHandler(this, &MyUserControl_Deliveryboy::btn_Remov_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(139, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 62);
			this->button1->TabIndex = 68;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(438, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 60);
			this->button3->TabIndex = 69;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// MyUserControl_Deliveryboy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->panel_remove);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel_add);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_Add);
			this->Controls->Add(this->btn_Remov);
			this->Name = L"MyUserControl_Deliveryboy";
			this->Size = System::Drawing::Size(860, 455);
			this->panel_remove->ResumeLayout(false);
			this->panel_remove->PerformLayout();
			this->panel_add->ResumeLayout(false);
			this->panel_add->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_Add_Click(System::Object^  sender, System::EventArgs^  e) {
		panel_remove->Visible = false;
		panel_add->Visible = true;
		
	}
private: System::Void btn_Remov_Click(System::Object^  sender, System::EventArgs^  e) {
	
	panel_remove->Visible = true;
	panel_add->Visible = false;
}
private: System::Void btn_Save_emp_Click(System::Object^  sender, System::EventArgs^  e) {
			
	if (txt_empname->Text == "" || txt_phone->Text == "" ||  txt_res->Text=="")
			 {
				 MessageBox::Show("Enter all Data of DeliveryBoy", "Required", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
	else
	{
		String ^ Name = txt_empname->Text;
		String ^ Phone = txt_phone->Text;
		String ^ Restid = txt_res->Text;
		Int16 orders = 0;
		container::deliveryboy->setboyName(Name);
		container::deliveryboy->setPhone(Phone);
		container::deliveryboy->ResturantID = Restid;
		try
		{
			container::manger->addEmployee(container::deliveryboy);
			MessageBox::Show("Add Successfully", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (String ^ error){
			MessageBox::Show(error);
		}
	}
}
private: System::Void btn_Remo_emp_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt_removID->Text == "" || txt_removeres->Text == ""){
		MessageBox::Show("Enter all Delivery Boy Data", "Required", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		container::deliveryboy = gcnew Deliveryboy();
		container::deliveryboy->setID(txt_removID->Text);
		container::deliveryboy->ResturantID = txt_removeres->Text;
		try{
			container::manger->remove_employee(container::deliveryboy);
			MessageBox::Show("Employee has been Removed Successfully");
		}
		catch (String ^ error)
		{
			MessageBox::Show(error);
		}
	}
}
};
}
