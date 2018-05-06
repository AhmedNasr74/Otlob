#pragma once
#include"MyForm_payment.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
#include "container.h"
namespace Project17 {

	/// <summary>
	/// Summary for MyUserContro_Catagory
	/// </summary>
	public ref class MyUserContro_Catagory : public System::Windows::Forms::UserControl
	{
	public:
		MyUserContro_Catagory(void)
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
		~MyUserContro_Catagory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Search_Catag;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  combo_catag;

	private: System::Windows::Forms::Button^  btn_Buy;
	private: System::Windows::Forms::CheckBox^  check_offer;
	private: System::Windows::Forms::Panel^  panel_res;
	private: System::Windows::Forms::ComboBox^  combo_Resturant;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_num;
	private: System::Windows::Forms::ComboBox^  combo_size;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btn_chart;
	private: System::Windows::Forms::Button^  getitems;
	private: System::Windows::Forms::ListView^  itemsView;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  itemid;
	private: System::Windows::Forms::ColumnHeader^  itemname;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::CheckBox^  drinkitem;
	private: System::Windows::Forms::CheckBox^  desirts;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserContro_Catagory::typeid));
			this->Search_Catag = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->combo_catag = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Buy = (gcnew System::Windows::Forms::Button());
			this->check_offer = (gcnew System::Windows::Forms::CheckBox());
			this->panel_res = (gcnew System::Windows::Forms::Panel());
			this->getitems = (gcnew System::Windows::Forms::Button());
			this->combo_Resturant = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_num = (gcnew System::Windows::Forms::TextBox());
			this->combo_size = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_chart = (gcnew System::Windows::Forms::Button());
			this->itemsView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->itemid = (gcnew System::Windows::Forms::ColumnHeader());
			this->itemname = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->drinkitem = (gcnew System::Windows::Forms::CheckBox());
			this->desirts = (gcnew System::Windows::Forms::CheckBox());
			this->panel_res->SuspendLayout();
			this->SuspendLayout();
			// 
			// Search_Catag
			// 
			this->Search_Catag->BackColor = System::Drawing::Color::Olive;
			this->Search_Catag->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Search_Catag->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search_Catag->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Search_Catag->Location = System::Drawing::Point(516, 3);
			this->Search_Catag->Name = L"Search_Catag";
			this->Search_Catag->Size = System::Drawing::Size(136, 49);
			this->Search_Catag->TabIndex = 8;
			this->Search_Catag->Text = L"Get Resturants";
			this->Search_Catag->UseVisualStyleBackColor = false;
			this->Search_Catag->Click += gcnew System::EventHandler(this, &MyUserContro_Catagory::Search_Catag_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(92, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 29);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Category";
			// 
			// combo_catag
			// 
			this->combo_catag->FormattingEnabled = true;
			this->combo_catag->Location = System::Drawing::Point(198, 17);
			this->combo_catag->Name = L"combo_catag";
			this->combo_catag->Size = System::Drawing::Size(121, 21);
			this->combo_catag->TabIndex = 6;
			this->combo_catag->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserContro_Catagory::combo_catag_SelectedIndexChanged);
			// 
			// btn_Buy
			// 
			this->btn_Buy->BackColor = System::Drawing::Color::Olive;
			this->btn_Buy->Enabled = false;
			this->btn_Buy->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Buy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Buy->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Buy->Location = System::Drawing::Point(492, 490);
			this->btn_Buy->Name = L"btn_Buy";
			this->btn_Buy->Size = System::Drawing::Size(135, 48);
			this->btn_Buy->TabIndex = 10;
			this->btn_Buy->Text = L"BUY";
			this->btn_Buy->UseVisualStyleBackColor = false;
			this->btn_Buy->Click += gcnew System::EventHandler(this, &MyUserContro_Catagory::btn_Buy_Click);
			// 
			// check_offer
			// 
			this->check_offer->AutoSize = true;
			this->check_offer->BackColor = System::Drawing::Color::Transparent;
			this->check_offer->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->check_offer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->check_offer->Location = System::Drawing::Point(335, 13);
			this->check_offer->Name = L"check_offer";
			this->check_offer->Size = System::Drawing::Size(69, 28);
			this->check_offer->TabIndex = 11;
			this->check_offer->Text = L"Offer";
			this->check_offer->UseVisualStyleBackColor = false;
			// 
			// panel_res
			// 
			this->panel_res->BackColor = System::Drawing::Color::Transparent;
			this->panel_res->Controls->Add(this->getitems);
			this->panel_res->Controls->Add(this->combo_Resturant);
			this->panel_res->Controls->Add(this->label1);
			this->panel_res->Location = System::Drawing::Point(138, 80);
			this->panel_res->Name = L"panel_res";
			this->panel_res->Size = System::Drawing::Size(392, 71);
			this->panel_res->TabIndex = 12;
			this->panel_res->Visible = false;
			// 
			// getitems
			// 
			this->getitems->BackColor = System::Drawing::Color::Olive;
			this->getitems->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->getitems->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->getitems->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->getitems->Location = System::Drawing::Point(305, 28);
			this->getitems->Name = L"getitems";
			this->getitems->Size = System::Drawing::Size(75, 24);
			this->getitems->TabIndex = 6;
			this->getitems->Text = L"Get Items";
			this->getitems->UseVisualStyleBackColor = false;
			this->getitems->Click += gcnew System::EventHandler(this, &MyUserContro_Catagory::getitems_Click);
			// 
			// combo_Resturant
			// 
			this->combo_Resturant->FormattingEnabled = true;
			this->combo_Resturant->Location = System::Drawing::Point(178, 31);
			this->combo_Resturant->Name = L"combo_Resturant";
			this->combo_Resturant->Size = System::Drawing::Size(121, 21);
			this->combo_Resturant->TabIndex = 5;
			this->combo_Resturant->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserContro_Catagory::combo_Resturant_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(16, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Available Resturant";
			// 
			// txt_num
			// 
			this->txt_num->Location = System::Drawing::Point(173, 167);
			this->txt_num->Name = L"txt_num";
			this->txt_num->Size = System::Drawing::Size(100, 20);
			this->txt_num->TabIndex = 13;
			// 
			// combo_size
			// 
			this->combo_size->FormattingEnabled = true;
			this->combo_size->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"indvidual", L"family" });
			this->combo_size->Location = System::Drawing::Point(451, 166);
			this->combo_size->Name = L"combo_size";
			this->combo_size->Size = System::Drawing::Size(100, 21);
			this->combo_size->TabIndex = 14;
			this->combo_size->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserContro_Catagory::combo_size_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(5, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 29);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Number of Item";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(306, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 29);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Size Of meal";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(3, 396);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 29);
			this->label5->TabIndex = 18;
			this->label5->Text = L"More";
			// 
			// btn_chart
			// 
			this->btn_chart->BackColor = System::Drawing::Color::Olive;
			this->btn_chart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_chart->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_chart->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_chart->Location = System::Drawing::Point(492, 436);
			this->btn_chart->Name = L"btn_chart";
			this->btn_chart->Size = System::Drawing::Size(135, 48);
			this->btn_chart->TabIndex = 19;
			this->btn_chart->Text = L"Add to Cart";
			this->btn_chart->UseVisualStyleBackColor = false;
			this->btn_chart->Click += gcnew System::EventHandler(this, &MyUserContro_Catagory::btn_chart_Click);
			// 
			// itemsView
			// 
			this->itemsView->BackColor = System::Drawing::Color::LightYellow;
			this->itemsView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->itemid,
					this->itemname, this->columnHeader2, this->columnHeader3
			});
			this->itemsView->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->itemsView->FullRowSelect = true;
			this->itemsView->GridLines = true;
			this->itemsView->Location = System::Drawing::Point(3, 193);
			this->itemsView->MultiSelect = false;
			this->itemsView->Name = L"itemsView";
			this->itemsView->Size = System::Drawing::Size(658, 165);
			this->itemsView->TabIndex = 31;
			this->itemsView->UseCompatibleStateImageBehavior = false;
			this->itemsView->View = System::Windows::Forms::View::Details;
			this->itemsView->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserContro_Catagory::itemsView_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 2;
			// 
			// itemid
			// 
			this->itemid->Text = L"Item ID";
			this->itemid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->itemid->Width = 145;
			// 
			// itemname
			// 
			this->itemname->Text = L"Item Name";
			this->itemname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->itemname->Width = 160;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Individual Price";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 177;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Family Price";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 166;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(465, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 49);
			this->button1->TabIndex = 32;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Olive;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(443, 436);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 48);
			this->button2->TabIndex = 33;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Olive;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(443, 490);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 48);
			this->button3->TabIndex = 34;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// drinkitem
			// 
			this->drinkitem->AutoSize = true;
			this->drinkitem->BackColor = System::Drawing::Color::Transparent;
			this->drinkitem->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->drinkitem->ForeColor = System::Drawing::Color::White;
			this->drinkitem->Location = System::Drawing::Point(10, 436);
			this->drinkitem->Name = L"drinkitem";
			this->drinkitem->Size = System::Drawing::Size(66, 21);
			this->drinkitem->TabIndex = 35;
			this->drinkitem->Text = L"Drinck";
			this->drinkitem->UseVisualStyleBackColor = false;
			// 
			// desirts
			// 
			this->desirts->AutoSize = true;
			this->desirts->BackColor = System::Drawing::Color::Transparent;
			this->desirts->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->desirts->ForeColor = System::Drawing::Color::White;
			this->desirts->Location = System::Drawing::Point(10, 472);
			this->desirts->Name = L"desirts";
			this->desirts->Size = System::Drawing::Size(66, 20);
			this->desirts->TabIndex = 36;
			this->desirts->Text = L"Desirt";
			this->desirts->UseVisualStyleBackColor = false;
			// 
			// MyUserContro_Catagory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->desirts);
			this->Controls->Add(this->drinkitem);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->itemsView);
			this->Controls->Add(this->btn_chart);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->combo_size);
			this->Controls->Add(this->txt_num);
			this->Controls->Add(this->panel_res);
			this->Controls->Add(this->check_offer);
			this->Controls->Add(this->btn_Buy);
			this->Controls->Add(this->Search_Catag);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->combo_catag);
			this->Name = L"MyUserContro_Catagory";
			this->Size = System::Drawing::Size(664, 610);
			this->Load += gcnew System::EventHandler(this, &MyUserContro_Catagory::MyUserContro_Catagory_Load);
			this->panel_res->ResumeLayout(false);
			this->panel_res->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Buy_Click(System::Object^  sender, System::EventArgs^  e) {
		item ^ deseirt = gcnew item("13", "Desirt", 10, 10, 1);
		item ^ drink = gcnew item("11", "Cola", 10, 10, 1);
		deseirt->Size = "-";
		drink->Size = "-";
		if (drinkitem->Checked == true)
			container::Cart->Cartitems->Add(drink);
		if (desirts->Checked == true)
			container::Cart->Cartitems->Add(deseirt);
		MyForm_payment ^pay = gcnew MyForm_payment();
		pay->ShowDialog();	
		

	}
private: System::Void Search_Catag_Click(System::Object^  sender, System::EventArgs^  e) {
		/*combo_Resturant->Items->Clear();*/
		
		List<Resturant ^> ^avaRest = gcnew List<Resturant ^>();
		category ^ searchedCat = gcnew category();
		if (check_offer->Checked && combo_catag->SelectedIndex == -1 )
		{
			panel_res->Visible = true;
			avaRest = container::resturant->getresturantByoffer();
			combo_Resturant->Items->Clear();
			for (int i = 0; i < avaRest->Count; i++)
			{
				combo_Resturant->Items->Add(avaRest[i]->getRestaurantID() + "-" + avaRest[i]->getRestaurantname());
			}
		}
		else if (combo_catag->SelectedIndex > -1 && !check_offer->Checked)
		{
			panel_res->Visible = true;
		combo_Resturant->Items->Clear();
		searchedCat->catname = combo_catag->SelectedItem->ToString();
		searchedCat->completedata();
		avaRest = container::resturant->getresturantByCat(searchedCat);
		for (int i = 0; i < avaRest->Count; i++)
		{
			combo_Resturant->Items->Add(avaRest[i]->getRestaurantID() + "-" + avaRest[i]->getRestaurantname());
		}
		}
		else if (combo_catag->SelectedIndex == -1 && !check_offer->Checked){
			combo_Resturant->Items->Clear();
			MessageBox::Show("Please Select Your Search Operation", "Required", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (combo_catag->SelectedIndex > -1 && check_offer->Checked){
			combo_Resturant->Items->Clear();
			MessageBox::Show("Please Select only one Search Operation", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		
}
private: System::Void MyUserContro_Catagory_Load(System::Object^  sender, System::EventArgs^  e) {
			 List<category^>^ allcats = gcnew List<category ^>();
			 allcats = container::Category->getAllcats();
			 for (int i = 0; i < allcats->Count; i++)
			 {
				 combo_catag->Items->Add(allcats[i]->catname);
			 }
}
private: System::Void combo_catag_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void getitems_Click(System::Object^  sender, System::EventArgs^  e) {
	if (combo_Resturant->SelectedIndex==-1){
		MessageBox::Show("Select Resturant To know his Item", "Rquired", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
else{
	    container::Cart->Cartitems->Clear();
		container::resturant->completeData();
		itemsView->Items->Clear();
		for (int i = 0; i < container::resturant->Resturantitems->Count; i++)
		{
			if (container::resturant->Resturantitems[i]->Quantity > 0)
			{
				ListViewItem ^ items = gcnew ListViewItem();
				items->SubItems->Add(container::resturant->Resturantitems[i]->getID());
				items->SubItems->Add(container::resturant->Resturantitems[i]->getname());
				items->SubItems->Add(System::Convert::ToString(container::resturant->Resturantitems[i]->getindPrice()));
				items->SubItems->Add(System::Convert::ToString(container::resturant->Resturantitems[i]->getfamPrice()));
				itemsView->Items->Add(items);
			}
		}
		container::Cart->resturant = container::resturant;
	}
}
private: System::Void combo_Resturant_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 container::resturant = gcnew Resturant();
			 String^ resturant = combo_Resturant->SelectedItem->ToString();
			 String ^ restid = resturant->Split('-')[0];
			 String ^restname = resturant->Split('-')[1];
			 container::resturant->setRestaurantID(restid);
			 container::resturant->setRestaurantname(restname);
			 container::resturant->LoadItems();
}
		 int index = -1;

private: System::Void btn_chart_Click(System::Object^  sender, System::EventArgs^  e) {
	
	/*if (txt_num->Text == "" || combo_size->SelectedIndex == -1)
	{
		MessageBox::Show("Enter Size or Quantity", "Required", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}*/
	/*else
	{*/

		try{
			index = itemsView->FocusedItem->Index;
			Int32 quantity = System::Convert::ToInt32(txt_num->Text);
			String ^size = combo_size->SelectedItem->ToString();
			String ^ itemid = container::resturant->Resturantitems[index]->getID();
			String ^itemname = container::resturant->Resturantitems[index]->getname();
			float indprice = container::resturant->Resturantitems[index]->getindPrice();
			float famprice = container::resturant->Resturantitems[index]->getfamPrice();
			item ^selecteditem = gcnew item(itemid, itemname, indprice, famprice, quantity);
			selecteditem->Size = size;
			index = -1;
			try
			{
				container::Cart->Appenditems(selecteditem);
				MessageBox::Show("Item has Been Added Successfully To Your Cart\t\t", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
				btn_Buy->Enabled = true;
			}
			catch (String ^ err)
			{
				MessageBox::Show(err);
			}
		}
		catch (Exception^e){
			MessageBox::Show("Please Select And Enter All information About Your Order!", "Required", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

		}
	}

private: System::Void combo_size_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void itemsView_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
