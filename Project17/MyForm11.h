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
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11()
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::ListView^  itemlist;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  custname;
	private: System::Windows::Forms::ColumnHeader^  custphone;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->itemlist = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->custname = (gcnew System::Windows::Forms::ColumnHeader());
			this->custphone = (gcnew System::Windows::Forms::ColumnHeader());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(599, 376);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// itemlist
			// 
			this->itemlist->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemlist.BackgroundImage")));
			this->itemlist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->custname,
					this->custphone
			});
			this->itemlist->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->itemlist->ForeColor = System::Drawing::Color::Indigo;
			this->itemlist->FullRowSelect = true;
			this->itemlist->GridLines = true;
			this->itemlist->Location = System::Drawing::Point(32, 45);
			this->itemlist->MultiSelect = false;
			this->itemlist->Name = L"itemlist";
			this->itemlist->Size = System::Drawing::Size(507, 269);
			this->itemlist->TabIndex = 72;
			this->itemlist->UseCompatibleStateImageBehavior = false;
			this->itemlist->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 2;
			// 
			// custname
			// 
			this->custname->Text = L"Item Name";
			this->custname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->custname->Width = 250;
			// 
			// custphone
			// 
			this->custphone->Text = L"Quantity";
			this->custphone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->custphone->Width = 250;
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 376);
			this->Controls->Add(this->itemlist);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm11";
			this->Text = L"Order Details";
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm11_Load(System::Object^  sender, System::EventArgs^  e) {
				 itemlist->Items->Clear();
				 List<item^>^ items = gcnew List<item^>();
				 try{
					 items = container::order->getitems(container::customer->GetID());
					 for (int i = 0; i < items->Count; i++)
					 {
						 ListViewItem ^ listitems = gcnew ListViewItem();
						 listitems->SubItems->Add(items[i]->getname());
						 listitems->SubItems->Add(System::Convert::ToString(items[i]->Quantity));
						 itemlist->Items->Add(listitems);
					 }
				 }
				 catch (String ^ err)
				 {
					 MessageBox::Show(err);
				 }
	}
private: System::Void btn_Searchcus_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}



private: System::Void txt_orderid_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Searchcus_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 
			 
}
};
}
