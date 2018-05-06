#pragma once
#include "container.h"
#include"MyForm11.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project17 {

	/// <summary>
	/// Summary for MyUserContro_bill
	/// </summary>
	public ref class MyUserContro_bill : public System::Windows::Forms::UserControl
	{
		static String ^ id;
	public:
		MyUserContro_bill(void)
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
		~MyUserContro_bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_Speci_date;
	protected:
	private: System::Windows::Forms::ComboBox^  BD_Month;
	private: System::Windows::Forms::ComboBox^  BD_Year;
	private: System::Windows::Forms::ComboBox^  BD_Day;

	private: System::Windows::Forms::Button^  btn_SearchDate;

	private: System::Windows::Forms::Panel^  panel_cust;
	private: System::Windows::Forms::TextBox^  txt_SearchID;

	private: System::Windows::Forms::Button^  btn_Searchcus;











	private: System::Windows::Forms::Button^  btn_speci_customer;
	private: System::Windows::Forms::Button^  btn_bill;
	private: System::Windows::Forms::ListView^  ordersView;


	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  custname;
	private: System::Windows::Forms::ColumnHeader^  custphone;
	private: System::Windows::Forms::ColumnHeader^  resturant;
	private: System::Windows::Forms::ColumnHeader^  delivery;
	private: System::Windows::Forms::ColumnHeader^  deliverphone;
	private: System::Windows::Forms::ColumnHeader^  regtime;
	private: System::Windows::Forms::ColumnHeader^  arrivaltime;
	private: System::Windows::Forms::ColumnHeader^  totalprice;
	private: System::Windows::Forms::ColumnHeader^  orderstat;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  btn_details;





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
			System::Windows::Forms::Label^  label2;
			System::Windows::Forms::Label^  label1;
			System::Windows::Forms::Label^  label3;
			System::Windows::Forms::Label^  label4;
			System::Windows::Forms::Label^  label5;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserContro_bill::typeid));
			this->panel_Speci_date = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BD_Month = (gcnew System::Windows::Forms::ComboBox());
			this->BD_Year = (gcnew System::Windows::Forms::ComboBox());
			this->BD_Day = (gcnew System::Windows::Forms::ComboBox());
			this->btn_SearchDate = (gcnew System::Windows::Forms::Button());
			this->panel_cust = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_SearchID = (gcnew System::Windows::Forms::TextBox());
			this->btn_Searchcus = (gcnew System::Windows::Forms::Button());
			this->btn_speci_customer = (gcnew System::Windows::Forms::Button());
			this->btn_bill = (gcnew System::Windows::Forms::Button());
			this->ordersView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->custname = (gcnew System::Windows::Forms::ColumnHeader());
			this->custphone = (gcnew System::Windows::Forms::ColumnHeader());
			this->resturant = (gcnew System::Windows::Forms::ColumnHeader());
			this->delivery = (gcnew System::Windows::Forms::ColumnHeader());
			this->deliverphone = (gcnew System::Windows::Forms::ColumnHeader());
			this->regtime = (gcnew System::Windows::Forms::ColumnHeader());
			this->arrivaltime = (gcnew System::Windows::Forms::ColumnHeader());
			this->totalprice = (gcnew System::Windows::Forms::ColumnHeader());
			this->orderstat = (gcnew System::Windows::Forms::ColumnHeader());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn_details = (gcnew System::Windows::Forms::Button());
			label2 = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			label4 = (gcnew System::Windows::Forms::Label());
			label5 = (gcnew System::Windows::Forms::Label());
			this->panel_Speci_date->SuspendLayout();
			this->panel_cust->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->BackColor = System::Drawing::Color::Transparent;
			label2->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label2->Location = System::Drawing::Point(18, 0);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(92, 21);
			label2->TabIndex = 4;
			label2->Text = L"Enter Date";
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->BackColor = System::Drawing::Color::Transparent;
			label1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label1->Location = System::Drawing::Point(7, 5);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(154, 21);
			label1->TabIndex = 4;
			label1->Text = L"Enter Customer ID";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->BackColor = System::Drawing::Color::Transparent;
			label3->Font = (gcnew System::Drawing::Font(L"Snap ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label3->Location = System::Drawing::Point(18, 27);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(43, 19);
			label3->TabIndex = 34;
			label3->Text = L"Day";
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->BackColor = System::Drawing::Color::Transparent;
			label4->Font = (gcnew System::Drawing::Font(L"Snap ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label4->Location = System::Drawing::Point(157, 27);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(53, 19);
			label4->TabIndex = 35;
			label4->Text = L"Year";
			// 
			// label5
			// 
			label5->AutoSize = true;
			label5->BackColor = System::Drawing::Color::Transparent;
			label5->Font = (gcnew System::Drawing::Font(L"Snap ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			label5->Location = System::Drawing::Point(85, 27);
			label5->Name = L"label5";
			label5->Size = System::Drawing::Size(66, 19);
			label5->TabIndex = 36;
			label5->Text = L"Month";
			// 
			// panel_Speci_date
			// 
			this->panel_Speci_date->BackColor = System::Drawing::Color::Transparent;
			this->panel_Speci_date->Controls->Add(label5);
			this->panel_Speci_date->Controls->Add(label4);
			this->panel_Speci_date->Controls->Add(label3);
			this->panel_Speci_date->Controls->Add(this->button1);
			this->panel_Speci_date->Controls->Add(this->BD_Month);
			this->panel_Speci_date->Controls->Add(this->BD_Year);
			this->panel_Speci_date->Controls->Add(this->BD_Day);
			this->panel_Speci_date->Controls->Add(label2);
			this->panel_Speci_date->Controls->Add(this->btn_SearchDate);
			this->panel_Speci_date->Location = System::Drawing::Point(277, 31);
			this->panel_Speci_date->Name = L"panel_Speci_date";
			this->panel_Speci_date->Size = System::Drawing::Size(450, 94);
			this->panel_Speci_date->TabIndex = 12;
			this->panel_Speci_date->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(304, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 32);
			this->button1->TabIndex = 33;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// BD_Month
			// 
			this->BD_Month->FormattingEnabled = true;
			this->BD_Month->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->BD_Month->Location = System::Drawing::Point(89, 58);
			this->BD_Month->Name = L"BD_Month";
			this->BD_Month->Size = System::Drawing::Size(66, 21);
			this->BD_Month->TabIndex = 23;
			// 
			// BD_Year
			// 
			this->BD_Year->FormattingEnabled = true;
			this->BD_Year->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2018", L"2017", L"2016", L"2015" });
			this->BD_Year->Location = System::Drawing::Point(161, 58);
			this->BD_Year->Name = L"BD_Year";
			this->BD_Year->Size = System::Drawing::Size(80, 21);
			this->BD_Year->TabIndex = 22;
			// 
			// BD_Day
			// 
			this->BD_Day->FormattingEnabled = true;
			this->BD_Day->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08",
					L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->BD_Day->Location = System::Drawing::Point(22, 58);
			this->BD_Day->Name = L"BD_Day";
			this->BD_Day->Size = System::Drawing::Size(61, 21);
			this->BD_Day->TabIndex = 21;
			// 
			// btn_SearchDate
			// 
			this->btn_SearchDate->BackColor = System::Drawing::Color::DimGray;
			this->btn_SearchDate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_SearchDate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_SearchDate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_SearchDate->Location = System::Drawing::Point(351, 47);
			this->btn_SearchDate->Name = L"btn_SearchDate";
			this->btn_SearchDate->Size = System::Drawing::Size(84, 32);
			this->btn_SearchDate->TabIndex = 3;
			this->btn_SearchDate->Text = L"Search ";
			this->btn_SearchDate->UseVisualStyleBackColor = false;
			this->btn_SearchDate->Click += gcnew System::EventHandler(this, &MyUserContro_bill::btn_SearchDate_Click);
			// 
			// panel_cust
			// 
			this->panel_cust->Controls->Add(this->button2);
			this->panel_cust->Controls->Add(this->txt_SearchID);
			this->panel_cust->Controls->Add(label1);
			this->panel_cust->Controls->Add(this->btn_Searchcus);
			this->panel_cust->Location = System::Drawing::Point(277, 139);
			this->panel_cust->Name = L"panel_cust";
			this->panel_cust->Size = System::Drawing::Size(450, 67);
			this->panel_cust->TabIndex = 11;
			this->panel_cust->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(304, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 38);
			this->button2->TabIndex = 34;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// txt_SearchID
			// 
			this->txt_SearchID->Location = System::Drawing::Point(167, 12);
			this->txt_SearchID->Multiline = true;
			this->txt_SearchID->Name = L"txt_SearchID";
			this->txt_SearchID->Size = System::Drawing::Size(100, 21);
			this->txt_SearchID->TabIndex = 5;
			// 
			// btn_Searchcus
			// 
			this->btn_Searchcus->BackColor = System::Drawing::Color::DimGray;
			this->btn_Searchcus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Searchcus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Searchcus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Searchcus->Location = System::Drawing::Point(351, 5);
			this->btn_Searchcus->Name = L"btn_Searchcus";
			this->btn_Searchcus->Size = System::Drawing::Size(84, 38);
			this->btn_Searchcus->TabIndex = 3;
			this->btn_Searchcus->Text = L"Search ";
			this->btn_Searchcus->UseVisualStyleBackColor = false;
			this->btn_Searchcus->Click += gcnew System::EventHandler(this, &MyUserContro_bill::btn_Searchcus_Click);
			// 
			// btn_speci_customer
			// 
			this->btn_speci_customer->BackColor = System::Drawing::Color::DimGray;
			this->btn_speci_customer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_speci_customer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_speci_customer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_speci_customer->Location = System::Drawing::Point(79, 137);
			this->btn_speci_customer->Name = L"btn_speci_customer";
			this->btn_speci_customer->Size = System::Drawing::Size(174, 53);
			this->btn_speci_customer->TabIndex = 9;
			this->btn_speci_customer->Text = L"specific customer";
			this->btn_speci_customer->UseVisualStyleBackColor = false;
			this->btn_speci_customer->Click += gcnew System::EventHandler(this, &MyUserContro_bill::btn_speci_customer_Click);
			// 
			// btn_bill
			// 
			this->btn_bill->BackColor = System::Drawing::Color::DimGray;
			this->btn_bill->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_bill->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_bill->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_bill->Location = System::Drawing::Point(79, 31);
			this->btn_bill->Name = L"btn_bill";
			this->btn_bill->Size = System::Drawing::Size(174, 53);
			this->btn_bill->TabIndex = 8;
			this->btn_bill->Text = L"bill specific date";
			this->btn_bill->UseVisualStyleBackColor = false;
			this->btn_bill->Click += gcnew System::EventHandler(this, &MyUserContro_bill::btn_bill_Click);
			// 
			// ordersView
			// 
			this->ordersView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(10) {
				this->columnHeader1, this->custname,
					this->custphone, this->resturant, this->delivery, this->deliverphone, this->regtime, this->arrivaltime, this->totalprice, this->orderstat
			});
			this->ordersView->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->ordersView->FullRowSelect = true;
			this->ordersView->GridLines = true;
			this->ordersView->Location = System::Drawing::Point(0, 277);
			this->ordersView->MultiSelect = false;
			this->ordersView->Name = L"ordersView";
			this->ordersView->Size = System::Drawing::Size(864, 172);
			this->ordersView->TabIndex = 31;
			this->ordersView->UseCompatibleStateImageBehavior = false;
			this->ordersView->View = System::Windows::Forms::View::Details;
			this->ordersView->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserContro_bill::ordersView_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 2;
			// 
			// custname
			// 
			this->custname->Text = L"Customer Name";
			this->custname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->custname->Width = 110;
			// 
			// custphone
			// 
			this->custphone->Text = L"Customer Phone";
			this->custphone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->custphone->Width = 110;
			// 
			// resturant
			// 
			this->resturant->Text = L"Resturant";
			this->resturant->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->resturant->Width = 70;
			// 
			// delivery
			// 
			this->delivery->Text = L"Delivery Boy";
			this->delivery->Width = 90;
			// 
			// deliverphone
			// 
			this->deliverphone->Text = L"Delivery Phone";
			this->deliverphone->Width = 100;
			// 
			// regtime
			// 
			this->regtime->Text = L"Request Time";
			this->regtime->Width = 100;
			// 
			// arrivaltime
			// 
			this->arrivaltime->Text = L"Arrival Time";
			this->arrivaltime->Width = 95;
			// 
			// totalprice
			// 
			this->totalprice->Text = L"Total Price";
			this->totalprice->Width = 90;
			// 
			// orderstat
			// 
			this->orderstat->Text = L"Order Status";
			this->orderstat->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->orderstat->Width = 90;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(15, 31);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 53);
			this->button3->TabIndex = 32;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyUserContro_bill::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(15, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 53);
			this->button4->TabIndex = 33;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DimGray;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(662, 215);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 38);
			this->button5->TabIndex = 36;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// btn_details
			// 
			this->btn_details->BackColor = System::Drawing::Color::DimGray;
			this->btn_details->Enabled = false;
			this->btn_details->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_details->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_details->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_details->Location = System::Drawing::Point(708, 215);
			this->btn_details->Name = L"btn_details";
			this->btn_details->Size = System::Drawing::Size(153, 38);
			this->btn_details->TabIndex = 35;
			this->btn_details->Text = L"Details Order";
			this->btn_details->UseVisualStyleBackColor = false;
			this->btn_details->Click += gcnew System::EventHandler(this, &MyUserContro_bill::btn_details_Click);
			// 
			// MyUserContro_bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_details);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->ordersView);
			this->Controls->Add(this->panel_Speci_date);
			this->Controls->Add(this->panel_cust);
			this->Controls->Add(this->btn_speci_customer);
			this->Controls->Add(this->btn_bill);
			this->Name = L"MyUserContro_bill";
			this->Size = System::Drawing::Size(864, 449);
			this->Load += gcnew System::EventHandler(this, &MyUserContro_bill::MyUserContro_bill_Load);
			this->panel_Speci_date->ResumeLayout(false);
			this->panel_Speci_date->PerformLayout();
			this->panel_cust->ResumeLayout(false);
			this->panel_cust->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_bill_Click(System::Object^  sender, System::EventArgs^  e) {
		
		panel_cust->Visible = false;
		panel_Speci_date->Visible = true;
	}

private: System::Void btn_speci_customer_Click(System::Object^  sender, System::EventArgs^  e) {
	panel_cust->Visible = true;
	panel_Speci_date->Visible = false;
}
		List<Order ^> ^ orders = gcnew List<Order ^>();
private: System::Void btn_SearchDate_Click(System::Object^  sender, System::EventArgs^  e) {
	if (BD_Year->SelectedIndex == -1 || BD_Day->SelectedIndex == -1 || BD_Year->SelectedIndex == -1){
		MessageBox::Show("There Is Prat From this Date Miss..Check That again!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else{
		btn_details->Enabled = true;
		String ^ Date = BD_Year->SelectedItem->ToString() + "-" + BD_Month->SelectedItem->ToString() + "-" + BD_Day->SelectedItem->ToString();
		orders->Clear();
		orders = container::manger->viewBill(Date);
		ordersView->Items->Clear();
		if (orders->Count != 0){
			for (int i = 0; i < orders->Count; i++)
			{
				ListViewItem ^ listitems = gcnew ListViewItem();
				listitems->SubItems->Add(orders[i]->customerName);
				listitems->SubItems->Add(orders[i]->customerphone);
				listitems->SubItems->Add(orders[i]->resturantName);
				listitems->SubItems->Add(orders[i]->deliveryBoy);
				listitems->SubItems->Add(orders[i]->deliveryphone);
				listitems->SubItems->Add(orders[i]->requestTime);
				listitems->SubItems->Add(orders[i]->arrivalTime);
				listitems->SubItems->Add(orders[i]->totalPrice);
				listitems->SubItems->Add(orders[i]->stat);
				ordersView->Items->Add(listitems);
			}
		}
		else
		{
			MessageBox::Show("There IS No Order At This Date","Warning",MessageBoxButtons::OK,MessageBoxIcon::Error);
		//	txt_SearchID->Text == "";
		}
	}
}

private: System::Void btn_Searchcus_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt_SearchID->Text == ""){
		MessageBox::Show("Enter ID for Customer You want to see his bill", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else{
		btn_details->Enabled = true;
		Int32 id = System::Convert::ToInt32(txt_SearchID->Text);
		orders->Clear();
		orders = container::manger->viewBill(id);
		ordersView->Items->Clear();
		if (orders->Count != 0){
			for (int i = 0; i < orders->Count; i++)
			{
				ListViewItem ^ listitems = gcnew ListViewItem();
				listitems->SubItems->Add(orders[i]->customerName);
				listitems->SubItems->Add(orders[i]->customerphone);
				listitems->SubItems->Add(orders[i]->resturantName);
				listitems->SubItems->Add(orders[i]->deliveryBoy);
				listitems->SubItems->Add(orders[i]->deliveryphone);
				listitems->SubItems->Add(orders[i]->requestTime);
				listitems->SubItems->Add(orders[i]->arrivalTime);
				listitems->SubItems->Add(orders[i]->totalPrice);
				listitems->SubItems->Add(orders[i]->stat);
				ordersView->Items->Add(listitems);
			}
		}
		else
		{
			MessageBox::Show("There IS No User With This ID", "Sorry", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void MyUserContro_bill_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_details_Click(System::Object^  sender, System::EventArgs^  e) {
	int index = ordersView->FocusedItem->Index;
	container::customer->setUserName(orders[index]->customerName);
	container::customer->getData();
	container::order = orders[index];
	MyForm11^ viewite = gcnew MyForm11();
	viewite->ShowDialog();
}
private: System::Void ordersView_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
