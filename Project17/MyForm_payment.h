#pragma once
#include "container.h"
namespace Project17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm_payment
	/// </summary>
	public ref class MyForm_payment : public System::Windows::Forms::Form
	{
	public:
		MyForm_payment(void)
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
		~MyForm_payment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_credit;
	protected:

	private: System::Windows::Forms::TextBox^  creditnum;



	private: System::Windows::Forms::Button^  btn_payment;
	private: System::Windows::Forms::Button^  btn_credit;
	private: System::Windows::Forms::Button^  btn_Handb;
	private: System::Windows::Forms::ListView^  cartitemsView;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  itemname;
	private: System::Windows::Forms::ColumnHeader^  quantity;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  value_custphone;

	private: System::Windows::Forms::Label^  value_resturant;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  value_DBName;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  value_DBphone;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  value_arrTime;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  value_custname;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  value_discount;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  value_tprice;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  value_finalprice;

	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  value_deliveryprice;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::TextBox^  destination;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;







	protected:













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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_payment::typeid));
			this->panel_credit = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->creditnum = (gcnew System::Windows::Forms::TextBox());
			this->btn_payment = (gcnew System::Windows::Forms::Button());
			this->btn_credit = (gcnew System::Windows::Forms::Button());
			this->btn_Handb = (gcnew System::Windows::Forms::Button());
			this->cartitemsView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->itemname = (gcnew System::Windows::Forms::ColumnHeader());
			this->quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->value_custphone = (gcnew System::Windows::Forms::Label());
			this->value_resturant = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->value_DBName = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->value_DBphone = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->value_arrTime = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->value_custname = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->value_discount = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->value_tprice = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->value_finalprice = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->value_deliveryprice = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->destination = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel_credit->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_credit
			// 
			this->panel_credit->BackColor = System::Drawing::Color::Transparent;
			this->panel_credit->Controls->Add(this->button3);
			this->panel_credit->Controls->Add(this->label8);
			this->panel_credit->Controls->Add(this->creditnum);
			this->panel_credit->Controls->Add(this->btn_payment);
			this->panel_credit->Location = System::Drawing::Point(-2, 459);
			this->panel_credit->Name = L"panel_credit";
			this->panel_credit->Size = System::Drawing::Size(425, 120);
			this->panel_credit->TabIndex = 11;
			this->panel_credit->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Olive;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(104, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 35);
			this->button3->TabIndex = 67;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(3, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(193, 24);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Enter CreditNumber";
			// 
			// creditnum
			// 
			this->creditnum->Location = System::Drawing::Point(200, 25);
			this->creditnum->Name = L"creditnum";
			this->creditnum->Size = System::Drawing::Size(222, 20);
			this->creditnum->TabIndex = 3;
			// 
			// btn_payment
			// 
			this->btn_payment->BackColor = System::Drawing::Color::Olive;
			this->btn_payment->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_payment->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_payment->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_payment->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_payment->Location = System::Drawing::Point(156, 57);
			this->btn_payment->Name = L"btn_payment";
			this->btn_payment->Size = System::Drawing::Size(138, 35);
			this->btn_payment->TabIndex = 0;
			this->btn_payment->Text = L"Payment";
			this->btn_payment->UseVisualStyleBackColor = false;
			this->btn_payment->Click += gcnew System::EventHandler(this, &MyForm_payment::btn_payment_Click_1);
			// 
			// btn_credit
			// 
			this->btn_credit->BackColor = System::Drawing::Color::Olive;
			this->btn_credit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_credit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_credit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_credit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_credit->Location = System::Drawing::Point(406, 360);
			this->btn_credit->Name = L"btn_credit";
			this->btn_credit->Size = System::Drawing::Size(122, 51);
			this->btn_credit->TabIndex = 10;
			this->btn_credit->Text = L"credit card";
			this->btn_credit->UseVisualStyleBackColor = false;
			this->btn_credit->Click += gcnew System::EventHandler(this, &MyForm_payment::btn_credit_Click_1);
			// 
			// btn_Handb
			// 
			this->btn_Handb->BackColor = System::Drawing::Color::Olive;
			this->btn_Handb->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_Handb->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Handb->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Handb->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_Handb->Location = System::Drawing::Point(202, 360);
			this->btn_Handb->Name = L"btn_Handb";
			this->btn_Handb->Size = System::Drawing::Size(119, 51);
			this->btn_Handb->TabIndex = 9;
			this->btn_Handb->Text = L"Hand ";
			this->btn_Handb->UseVisualStyleBackColor = false;
			this->btn_Handb->Click += gcnew System::EventHandler(this, &MyForm_payment::btn_Handb_Click_1);
			// 
			// cartitemsView
			// 
			this->cartitemsView->BackColor = System::Drawing::Color::DarkSlateGray;
			this->cartitemsView->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->cartitemsView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1,
					this->itemname, this->quantity, this->columnHeader2
			});
			this->cartitemsView->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->cartitemsView->ForeColor = System::Drawing::Color::White;
			this->cartitemsView->FullRowSelect = true;
			this->cartitemsView->GridLines = true;
			this->cartitemsView->Location = System::Drawing::Point(426, 101);
			this->cartitemsView->MultiSelect = false;
			this->cartitemsView->Name = L"cartitemsView";
			this->cartitemsView->Size = System::Drawing::Size(329, 186);
			this->cartitemsView->TabIndex = 31;
			this->cartitemsView->UseCompatibleStateImageBehavior = false;
			this->cartitemsView->View = System::Windows::Forms::View::Details;
			this->cartitemsView->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm_payment::cartitemsView_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 2;
			// 
			// itemname
			// 
			this->itemname->Text = L"Item Name";
			this->itemname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->itemname->Width = 120;
			// 
			// quantity
			// 
			this->quantity->Text = L"Quantity";
			this->quantity->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->quantity->Width = 100;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Size";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 100;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Jokerman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(278, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 39);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Otlop Food";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(8, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 24);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Client Phone";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm_payment::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(146, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 24);
			this->label3->TabIndex = 34;
			this->label3->Text = L":";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm_payment::label3_Click);
			// 
			// value_custphone
			// 
			this->value_custphone->AutoSize = true;
			this->value_custphone->BackColor = System::Drawing::Color::Transparent;
			this->value_custphone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_custphone->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->value_custphone->Location = System::Drawing::Point(172, 133);
			this->value_custphone->Name = L"value_custphone";
			this->value_custphone->Size = System::Drawing::Size(60, 24);
			this->value_custphone->TabIndex = 35;
			this->value_custphone->Text = L"Value";
			this->value_custphone->Click += gcnew System::EventHandler(this, &MyForm_payment::value_custphone_Click);
			// 
			// value_resturant
			// 
			this->value_resturant->AutoSize = true;
			this->value_resturant->BackColor = System::Drawing::Color::Transparent;
			this->value_resturant->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_resturant->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->value_resturant->Location = System::Drawing::Point(172, 167);
			this->value_resturant->Name = L"value_resturant";
			this->value_resturant->Size = System::Drawing::Size(60, 24);
			this->value_resturant->TabIndex = 38;
			this->value_resturant->Text = L"Value";
			this->value_resturant->Click += gcnew System::EventHandler(this, &MyForm_payment::value_resturant_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(146, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 24);
			this->label6->TabIndex = 37;
			this->label6->Text = L":";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm_payment::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(9, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 24);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Resturant";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm_payment::label7_Click);
			// 
			// value_DBName
			// 
			this->value_DBName->AutoSize = true;
			this->value_DBName->BackColor = System::Drawing::Color::Transparent;
			this->value_DBName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_DBName->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->value_DBName->Location = System::Drawing::Point(172, 203);
			this->value_DBName->Name = L"value_DBName";
			this->value_DBName->Size = System::Drawing::Size(60, 24);
			this->value_DBName->TabIndex = 41;
			this->value_DBName->Text = L"Value";
			this->value_DBName->Click += gcnew System::EventHandler(this, &MyForm_payment::value_DBName_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(146, 203);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 24);
			this->label9->TabIndex = 40;
			this->label9->Text = L":";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm_payment::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(9, 203);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 24);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Delivery Boy";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm_payment::label10_Click);
			// 
			// value_DBphone
			// 
			this->value_DBphone->AutoSize = true;
			this->value_DBphone->BackColor = System::Drawing::Color::Transparent;
			this->value_DBphone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_DBphone->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->value_DBphone->Location = System::Drawing::Point(172, 238);
			this->value_DBphone->Name = L"value_DBphone";
			this->value_DBphone->Size = System::Drawing::Size(60, 24);
			this->value_DBphone->TabIndex = 44;
			this->value_DBphone->Text = L"Value";
			this->value_DBphone->Click += gcnew System::EventHandler(this, &MyForm_payment::value_DBphone_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(146, 238);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 24);
			this->label12->TabIndex = 43;
			this->label12->Text = L":";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm_payment::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(6, 238);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(144, 24);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Phone Number";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm_payment::label13_Click);
			// 
			// value_arrTime
			// 
			this->value_arrTime->AutoSize = true;
			this->value_arrTime->BackColor = System::Drawing::Color::Transparent;
			this->value_arrTime->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_arrTime->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->value_arrTime->Location = System::Drawing::Point(172, 278);
			this->value_arrTime->Name = L"value_arrTime";
			this->value_arrTime->Size = System::Drawing::Size(60, 24);
			this->value_arrTime->TabIndex = 47;
			this->value_arrTime->Text = L"Value";
			this->value_arrTime->Click += gcnew System::EventHandler(this, &MyForm_payment::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(146, 278);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(17, 24);
			this->label15->TabIndex = 46;
			this->label15->Text = L":";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm_payment::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(9, 278);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(123, 24);
			this->label16->TabIndex = 45;
			this->label16->Text = L"Arrival Time";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm_payment::label16_Click);
			// 
			// value_custname
			// 
			this->value_custname->AutoSize = true;
			this->value_custname->BackColor = System::Drawing::Color::Transparent;
			this->value_custname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_custname->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->value_custname->Location = System::Drawing::Point(172, 91);
			this->value_custname->Name = L"value_custname";
			this->value_custname->Size = System::Drawing::Size(60, 24);
			this->value_custname->TabIndex = 50;
			this->value_custname->Text = L"Value";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(146, 91);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 24);
			this->label18->TabIndex = 49;
			this->label18->Text = L":";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(9, 91);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(121, 24);
			this->label19->TabIndex = 48;
			this->label19->Text = L"Client Name";
			// 
			// value_discount
			// 
			this->value_discount->AutoSize = true;
			this->value_discount->BackColor = System::Drawing::Color::Transparent;
			this->value_discount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_discount->Location = System::Drawing::Point(666, 531);
			this->value_discount->Name = L"value_discount";
			this->value_discount->Size = System::Drawing::Size(49, 19);
			this->value_discount->TabIndex = 53;
			this->value_discount->Text = L"Name";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Location = System::Drawing::Point(646, 530);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(14, 19);
			this->label21->TabIndex = 52;
			this->label21->Text = L":";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Location = System::Drawing::Point(550, 530);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 17);
			this->label22->TabIndex = 51;
			this->label22->Text = L"Discount";
			// 
			// value_tprice
			// 
			this->value_tprice->AutoSize = true;
			this->value_tprice->BackColor = System::Drawing::Color::Transparent;
			this->value_tprice->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_tprice->Location = System::Drawing::Point(666, 505);
			this->value_tprice->Name = L"value_tprice";
			this->value_tprice->Size = System::Drawing::Size(49, 19);
			this->value_tprice->TabIndex = 56;
			this->value_tprice->Text = L"Name";
			this->value_tprice->Click += gcnew System::EventHandler(this, &MyForm_payment::label23_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label24->Location = System::Drawing::Point(645, 505);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(14, 19);
			this->label24->TabIndex = 55;
			this->label24->Text = L":";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm_payment::label24_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->Location = System::Drawing::Point(550, 505);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(73, 17);
			this->label25->TabIndex = 54;
			this->label25->Text = L"Total Price";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm_payment::label25_Click);
			// 
			// value_finalprice
			// 
			this->value_finalprice->AutoSize = true;
			this->value_finalprice->BackColor = System::Drawing::Color::Transparent;
			this->value_finalprice->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_finalprice->Location = System::Drawing::Point(667, 557);
			this->value_finalprice->Name = L"value_finalprice";
			this->value_finalprice->Size = System::Drawing::Size(49, 19);
			this->value_finalprice->TabIndex = 59;
			this->value_finalprice->Text = L"Name";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label27->Location = System::Drawing::Point(646, 560);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(14, 19);
			this->label27->TabIndex = 58;
			this->label27->Text = L":";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label28->Location = System::Drawing::Point(550, 559);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(74, 17);
			this->label28->TabIndex = 57;
			this->label28->Text = L"Final Price";
			// 
			// value_deliveryprice
			// 
			this->value_deliveryprice->AutoSize = true;
			this->value_deliveryprice->BackColor = System::Drawing::Color::Transparent;
			this->value_deliveryprice->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->value_deliveryprice->Location = System::Drawing::Point(666, 480);
			this->value_deliveryprice->Name = L"value_deliveryprice";
			this->value_deliveryprice->Size = System::Drawing::Size(49, 19);
			this->value_deliveryprice->TabIndex = 62;
			this->value_deliveryprice->Text = L"Name";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(645, 480);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 19);
			this->label11->TabIndex = 61;
			this->label11->Text = L":";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(550, 480);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(94, 15);
			this->label14->TabIndex = 60;
			this->label14->Text = L"Delivery Charge";
			// 
			// destination
			// 
			this->destination->Location = System::Drawing::Point(314, 329);
			this->destination->Name = L"destination";
			this->destination->Size = System::Drawing::Size(160, 20);
			this->destination->TabIndex = 63;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(184, 327);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 23);
			this->label4->TabIndex = 64;
			this->label4->Text = L"Destination";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(345, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 51);
			this->button1->TabIndex = 65;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Olive;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(146, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 51);
			this->button2->TabIndex = 66;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// MyForm_payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(757, 605);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->destination);
			this->Controls->Add(this->value_deliveryprice);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->value_finalprice);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->value_tprice);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->value_discount);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->value_custname);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->value_arrTime);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->value_DBphone);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->value_DBName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->value_resturant);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->value_custphone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cartitemsView);
			this->Controls->Add(this->panel_credit);
			this->Controls->Add(this->btn_credit);
			this->Controls->Add(this->btn_Handb);
			this->Name = L"MyForm_payment";
			this->Text = L"Bill";
			this->Load += gcnew System::EventHandler(this, &MyForm_payment::MyForm_payment_Load);
			this->panel_credit->ResumeLayout(false);
			this->panel_credit->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Handb_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btn_credit_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void btn_payment_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_credit_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (destination->Text == ""){
		MessageBox::Show("Enter The Destination of This Order", "Required", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
	else
	panel_credit->Visible = true;
}
private: System::Void btn_payment_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (creditnum->Text == ""){
		MessageBox::Show("Enter Credit Card Number", "Required", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else{
		container::Cart->paymentMethod = "Credit Card";
		container::Cart->destination = destination->Text;
		container::Cart->setCard(creditnum->Text);
		container::customer->makeOrder(container::Cart);
		DateTime ^ bd = System::Convert::ToDateTime(container::customer->getBirthdate());
		DateTime^ localtime = gcnew DateTime();
		localtime = localtime->Now;
		if (localtime->ToString("MM-dd") == bd->ToString("MM-dd") && !container::customer->orders_today())
			MessageBox::Show("Happy Birthdate To You.... \n We are happy with this moment so otlop Team say Happy Birthdate to you And will be awarded with 50EG You receive it cash with", "Otlop Team", MessageBoxButtons::OK, MessageBoxIcon::Information);
			MessageBox::Show("Your Order has been submited Successfully \n Otlob team wish You Enjoy", "Thank You", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
	}
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void MyForm_payment_Load(System::Object^  sender, System::EventArgs^  e) {
				 container::resturant->completeData();
				 container::Cart->userDiscount = (container::customer->checkDisc() == 1) ? 30 : 0;
				 container::Cart->calcPrice();
				 container::Cart->calctotalPrice();
				 container::Cart->setOrderTime();
				 container::Cart->DeliveryBoy = gcnew Deliveryboy();
				 container::Cart->DeliveryBoy = container::resturant->GenerateBoy(System::Convert::ToDateTime(container::Cart->arrivaltime));
				 container::Cart->DeliveryBoy->incrementORDER();
				 cartitemsView->Items->Clear();
				 for (int i = 0; i < container::Cart->Cartitems->Count; i++)
				 {
					 ListViewItem ^ items = gcnew ListViewItem();
					 items->SubItems->Add(container::Cart->Cartitems[i]->getname());
					 items->SubItems->Add(System::Convert::ToString(container::Cart->Cartitems[i]->Quantity));
					 items->SubItems->Add(container::Cart->Cartitems[i]->Size);
					 cartitemsView->Items->Add(items);
				 }
				 value_custname->Text = container::customer->GetUserName();
				 value_custphone->Text = container::customer->GetPhone();
				 value_resturant->Text = container::resturant->getRestaurantname();
				 value_arrTime->Text = container::Cart->arrivaltime;
				 value_DBphone->Text = container::Cart->DeliveryBoy->GetPhone();
				 value_DBName->Text = container::Cart->DeliveryBoy->GetboyName();
				 value_discount->Text = System::Convert::ToString(container::resturant->getdiscount() + "%" + " + " + container::Cart->userDiscount) + "%";
				 value_deliveryprice->Text = System::Convert::ToString(container::resturant->deliveryCharge)+"EG";
				 value_tprice->Text = System::Convert::ToString(container::Cart->price - container::resturant->deliveryCharge)+"EG";
				 value_finalprice->Text = System::Convert::ToString(container::Cart->totalprice) + "EG";
	}
	private: System::Void btn_Handb_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 if (destination->Text == ""){
					 MessageBox::Show("Enter The Destination of This Order", "Required", MessageBoxButtons::OK, MessageBoxIcon::Warning);

				 }
				 else

				 {
					 container::Cart->paymentMethod = "Hand By Hand";
					 container::Cart->setCard(nullptr);
					 container::Cart->destination = destination->Text;
					 container::customer->makeOrder(container::Cart);
					 DateTime ^ bd = System::Convert::ToDateTime(container::customer->getBirthdate());
					 DateTime^ localtime = gcnew DateTime();
					 localtime = localtime->Now;
					 if (localtime->ToString("MM-dd") == bd->ToString("MM-dd") && !container::customer->orders_today())
						 MessageBox::Show("Happy Birthdate To You.... \n We are happy with this moment so otlop Team say Happy Birthdate to you And will be awarded with 50EG You receive it cash with You Order", "Otlop Team", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 MessageBox::Show("Your Order has been submited Successfully \n Otlob team wish You Enjoy", "Thank You", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 this->Close();
				 }
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void cartitemsView_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void value_DBphone_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void value_DBName_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void value_resturant_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void value_custphone_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
