#pragma once
#include"MyUserControl_Deliveryboy.h"
#include "MyUserContro_bill.h"
#include "MyUserControl_CheckQu.h"
#include"MyForm11.h"
namespace Project17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm_Admain
	/// </summary>
	public ref class MyForm_Admain : public System::Windows::Forms::Form
	{
	public:
		MyForm_Admain(void)
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
		~MyForm_Admain()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  btn_DeliveryBoy;
	private: System::Windows::Forms::Button^  btn_ChechQua;
	private: System::Windows::Forms::Button^  btn_viewbill;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button1;



















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_Admain::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_DeliveryBoy = (gcnew System::Windows::Forms::Button());
			this->btn_ChechQua = (gcnew System::Windows::Forms::Button());
			this->btn_viewbill = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Location = System::Drawing::Point(-1, 66);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(860, 455);
			this->panel2->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btn_DeliveryBoy);
			this->panel1->Controls->Add(this->btn_ChechQua);
			this->panel1->Controls->Add(this->btn_viewbill);
			this->panel1->Location = System::Drawing::Point(-1, -3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(860, 73);
			this->panel1->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(657, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 53);
			this->button4->TabIndex = 32;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Snow;
			this->button5->Location = System::Drawing::Point(671, 10);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(169, 53);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Logout";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm_Admain::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(30, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 57);
			this->button3->TabIndex = 30;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(216, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 56);
			this->button2->TabIndex = 29;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(439, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 53);
			this->button1->TabIndex = 28;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// btn_DeliveryBoy
			// 
			this->btn_DeliveryBoy->BackColor = System::Drawing::Color::Black;
			this->btn_DeliveryBoy->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_DeliveryBoy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_DeliveryBoy->ForeColor = System::Drawing::Color::Snow;
			this->btn_DeliveryBoy->Location = System::Drawing::Point(78, 6);
			this->btn_DeliveryBoy->Name = L"btn_DeliveryBoy";
			this->btn_DeliveryBoy->Size = System::Drawing::Size(151, 58);
			this->btn_DeliveryBoy->TabIndex = 25;
			this->btn_DeliveryBoy->Text = L"Delivery Boy";
			this->btn_DeliveryBoy->UseVisualStyleBackColor = false;
			this->btn_DeliveryBoy->Click += gcnew System::EventHandler(this, &MyForm_Admain::btn_DeliveryBoy_Click_1);
			// 
			// btn_ChechQua
			// 
			this->btn_ChechQua->BackColor = System::Drawing::Color::Black;
			this->btn_ChechQua->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ChechQua->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ChechQua->ForeColor = System::Drawing::Color::Snow;
			this->btn_ChechQua->Location = System::Drawing::Point(490, 2);
			this->btn_ChechQua->Name = L"btn_ChechQua";
			this->btn_ChechQua->Size = System::Drawing::Size(169, 53);
			this->btn_ChechQua->TabIndex = 27;
			this->btn_ChechQua->Text = L"Check quantity";
			this->btn_ChechQua->UseVisualStyleBackColor = false;
			this->btn_ChechQua->Click += gcnew System::EventHandler(this, &MyForm_Admain::btn_ChechQua_Click_2);
			// 
			// btn_viewbill
			// 
			this->btn_viewbill->BackColor = System::Drawing::Color::Black;
			this->btn_viewbill->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_viewbill->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_viewbill->ForeColor = System::Drawing::Color::Snow;
			this->btn_viewbill->Location = System::Drawing::Point(275, 3);
			this->btn_viewbill->Name = L"btn_viewbill";
			this->btn_viewbill->Size = System::Drawing::Size(124, 56);
			this->btn_viewbill->TabIndex = 26;
			this->btn_viewbill->Text = L"View Bill";
			this->btn_viewbill->UseVisualStyleBackColor = false;
			this->btn_viewbill->Click += gcnew System::EventHandler(this, &MyForm_Admain::btn_viewbill_Click_1);
			// 
			// MyForm_Admain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(862, 511);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Name = L"MyForm_Admain";
			this->Text = L"Admin Panel";
			this->Load += gcnew System::EventHandler(this, &MyForm_Admain::MyForm_Admain_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_DeliveryBoy_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btn_viewbill_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void btn_ChechQua_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void btn_ChechQua_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_ChechQua_Click_2(System::Object^  sender, System::EventArgs^  e) {
	panel2->Controls->Clear();
	MyUserControl_Check ^Check_obj = gcnew MyUserControl_Check();
	panel2->Controls->Add(Check_obj);
}
private: System::Void btn_viewbill_Click_1(System::Object^  sender, System::EventArgs^  e) {
	panel2->Controls->Clear();
	MyUserContro_bill ^bill_obj = gcnew MyUserContro_bill();
	panel2->Controls->Add(bill_obj);
}
private: System::Void btn_DeliveryBoy_Click_1(System::Object^  sender, System::EventArgs^  e) {
	panel2->Controls->Clear();
	MyUserControl_Deliveryboy ^emp_obj = gcnew MyUserControl_Deliveryboy();
	panel2->Controls->Add(emp_obj);

}
private: System::Void MyForm_Admain_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Restart();
}
};
}
