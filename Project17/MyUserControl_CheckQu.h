#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
#include "container.h"

namespace Project17 {

	/// <summary>
	/// Summary for MyUserControl_Check
	/// </summary>
	public ref class MyUserControl_Check : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl_Check(void)
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
		~MyUserControl_Check()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  itemsView;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  itemid;
	private: System::Windows::Forms::ColumnHeader^  itemname;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::TextBox^  txt_item;
	private: System::Windows::Forms::TextBox^  txt_rest;



	private: System::Windows::Forms::Button^  btn_Searchcus;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	protected:

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
			this->itemsView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->itemid = (gcnew System::Windows::Forms::ColumnHeader());
			this->itemname = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->txt_item = (gcnew System::Windows::Forms::TextBox());
			this->txt_rest = (gcnew System::Windows::Forms::TextBox());
			this->btn_Searchcus = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// itemsView
			// 
			this->itemsView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->itemid,
					this->itemname, this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->itemsView->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->itemsView->FullRowSelect = true;
			this->itemsView->GridLines = true;
			this->itemsView->Location = System::Drawing::Point(3, 67);
			this->itemsView->MultiSelect = false;
			this->itemsView->Name = L"itemsView";
			this->itemsView->Size = System::Drawing::Size(861, 382);
			this->itemsView->TabIndex = 30;
			this->itemsView->UseCompatibleStateImageBehavior = false;
			this->itemsView->View = System::Windows::Forms::View::Details;
			this->itemsView->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl_Check::itemsView_SelectedIndexChanged);
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
			this->itemid->Width = 130;
			// 
			// itemname
			// 
			this->itemname->Text = L"Item Name";
			this->itemname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->itemname->Width = 150;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Individual Price";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 150;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Family Price";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 150;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Quantity";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 130;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Resturant";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 145;
			// 
			// txt_item
			// 
			this->txt_item->Location = System::Drawing::Point(175, 27);
			this->txt_item->Name = L"txt_item";
			this->txt_item->Size = System::Drawing::Size(100, 20);
			this->txt_item->TabIndex = 31;
			// 
			// txt_rest
			// 
			this->txt_rest->Location = System::Drawing::Point(314, 26);
			this->txt_rest->Name = L"txt_rest";
			this->txt_rest->Size = System::Drawing::Size(100, 20);
			this->txt_rest->TabIndex = 32;
			// 
			// btn_Searchcus
			// 
			this->btn_Searchcus->BackColor = System::Drawing::Color::DimGray;
			this->btn_Searchcus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Searchcus->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Searchcus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Searchcus->Location = System::Drawing::Point(462, 26);
			this->btn_Searchcus->Name = L"btn_Searchcus";
			this->btn_Searchcus->Size = System::Drawing::Size(84, 23);
			this->btn_Searchcus->TabIndex = 35;
			this->btn_Searchcus->Text = L"Search ";
			this->btn_Searchcus->UseVisualStyleBackColor = false;
			this->btn_Searchcus->Click += gcnew System::EventHandler(this, &MyUserControl_Check::btn_Searchcus_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(171, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 20);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Item ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(310, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 20);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Resturant ID";
			// 
			// MyUserControl_Check
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_Searchcus);
			this->Controls->Add(this->txt_rest);
			this->Controls->Add(this->txt_item);
			this->Controls->Add(this->itemsView);
			this->Name = L"MyUserControl_Check";
			this->Size = System::Drawing::Size(864, 449);
			this->Load += gcnew System::EventHandler(this, &MyUserControl_Check::MyUserControl_Check_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				 List<item^>^ allitems = gcnew List<item^>();//global
	private: System::Void MyUserControl_Check_Load(System::Object^  sender, System::EventArgs^  e) {
				 allitems = container::manger->chackQuantity();
				 for (int i = 0; i < allitems->Count; i++)
				 {
					 ListViewItem ^ listitems = gcnew ListViewItem();
					 listitems->SubItems->Add(allitems[i]->getID());
					 listitems->SubItems->Add(allitems[i]->getname());
					 listitems->SubItems->Add(System::Convert::ToString(allitems[i]->getindPrice()));
					 listitems->SubItems->Add(System::Convert::ToString(allitems[i]->getfamPrice()));
					 listitems->SubItems->Add(System::Convert::ToString(allitems[i]->Quantity));
					 listitems->SubItems->Add(allitems[i]->resturant);
					 itemsView->Items->Add(listitems);
				 }
	}
private: System::Void itemsView_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Searchcus_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (txt_item->Text != "" && txt_rest->Text != ""){
			 item^ Item = gcnew item();
			 Item->setID(txt_item->Text);
			 Item->resturantid = txt_rest->Text;
			 int index = -1;
			 for (int i = 0; i <allitems->Count; i++)
			 if (allitems[i]->getID() == Item->getID() && allitems[i]->resturantid == Item->resturantid)
				 index = i;
				try
			 {
				 itemsView->Items[index]->Selected = true;
				 itemsView->Select();

			 }
				catch (Exception^e)
				{
					MessageBox::Show("This Item Dose not Exist At This Resturant","Warning",MessageBoxButtons::OK , MessageBoxIcon::Warning);
				}
			 }
			 else if (txt_item->Text == "" || txt_rest->Text == "")
			 {
				 MessageBox::Show("Please Enter Full Data", "Missing Data", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

			 }
			 
}
};
}
