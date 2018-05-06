#pragma once
#include"MyUserContro_Catagory.h"
#include"container.h"
namespace Project17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_order;
	private: System::Windows::Forms::Panel^  panel_search;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comb_area;
	private: System::Windows::Forms::ComboBox^  comb_govern;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Search;
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
			this->panel_order = (gcnew System::Windows::Forms::Panel());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comb_govern = (gcnew System::Windows::Forms::ComboBox());
			this->comb_area = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel_search = (gcnew System::Windows::Forms::Panel());
			this->panel_order->SuspendLayout();
			this->panel_search->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_order
			// 
			this->panel_order->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel_order->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_order->Controls->Add(this->panel_search);
			this->panel_order->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_order->Location = System::Drawing::Point(0, 0);
			this->panel_order->Name = L"panel_order";
			this->panel_order->Size = System::Drawing::Size(672, 567);
			this->panel_order->TabIndex = 6;
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::Color::Olive;
			this->Search->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Search->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Search->Location = System::Drawing::Point(111, 148);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(147, 45);
			this->Search->TabIndex = 2;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &MyForm1::Search_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(20, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 27);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Governate";
			// 
			// comb_govern
			// 
			this->comb_govern->FormattingEnabled = true;
			this->comb_govern->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Cairo", L"Cairo", L"Cairo", L"Cairo", L"Cairo",
					L"Cairo", L"Cairo", L"Cairo"
			});
			this->comb_govern->Location = System::Drawing::Point(167, 47);
			this->comb_govern->Name = L"comb_govern";
			this->comb_govern->Size = System::Drawing::Size(146, 21);
			this->comb_govern->TabIndex = 0;
			// 
			// comb_area
			// 
			this->comb_area->FormattingEnabled = true;
			this->comb_area->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ain shams", L"Roxy", L"Helmyiat Elzayton" });
			this->comb_area->Location = System::Drawing::Point(167, 89);
			this->comb_area->Name = L"comb_area";
			this->comb_area->Size = System::Drawing::Size(146, 21);
			this->comb_area->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(37, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 27);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Area";
			// 
			// panel_search
			// 
			this->panel_search->Controls->Add(this->label2);
			this->panel_search->Controls->Add(this->comb_area);
			this->panel_search->Controls->Add(this->comb_govern);
			this->panel_search->Controls->Add(this->label1);
			this->panel_search->Controls->Add(this->Search);
			this->panel_search->Location = System::Drawing::Point(123, 152);
			this->panel_search->Name = L"panel_search";
			this->panel_search->Size = System::Drawing::Size(397, 236);
			this->panel_search->TabIndex = 6;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(672, 567);
			this->Controls->Add(this->panel_order);
			this->Name = L"MyForm1";
			this->Text = L"Location";
			this->panel_order->ResumeLayout(false);
			this->panel_search->ResumeLayout(false);
			this->panel_search->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Search_Click(System::Object^  sender, System::EventArgs^  e) {
				 container::resturant = gcnew Resturant();
				 if (comb_area->SelectedIndex ==-1|| comb_govern->SelectedIndex==-1){
					 MessageBox::Show("Please Select Your Place", "Worning", MessageBoxButtons::OK, MessageBoxIcon::Warning);

				 }

				 else
				 {
					 container::resturant->area = comb_area->SelectedItem->ToString();
					 container::resturant->governate = comb_govern->SelectedItem->ToString();
					 MyUserContro_Catagory^Cat = gcnew MyUserContro_Catagory();
					 panel_search->Visible = false;
					 panel_order->Controls->Add(Cat);
					 

				 }
		
	}
};
}
