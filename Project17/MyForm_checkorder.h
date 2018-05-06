#pragma once
#include "container.h"
#include"MyForm11.h"
namespace Project17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm_checkorder
	/// </summary>
	public ref class MyForm_checkorder : public System::Windows::Forms::Form
	{
	public:
		MyForm_checkorder(void)
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
		~MyForm_checkorder()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:



	private: System::Windows::Forms::Button^  btn_CancelOrder;

	private: System::Windows::Forms::Button^  btn_coment;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  Edit_order;
	private: System::Windows::Forms::ListView^  ordersView;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;


	private: System::Windows::Forms::ColumnHeader^  resturant;
	private: System::Windows::Forms::ColumnHeader^  delivery;
	private: System::Windows::Forms::ColumnHeader^  deliverphone;
	private: System::Windows::Forms::ColumnHeader^  regtime;
	private: System::Windows::Forms::ColumnHeader^  arrivaltime;
	private: System::Windows::Forms::ColumnHeader^  totalprice;
	private: System::Windows::Forms::ColumnHeader^  orderstat;
	private: System::Windows::Forms::TextBox^  txt_ordertid;
	private: System::Windows::Forms::Panel^  comment_panel;
	private: System::Windows::Forms::NumericUpDown^  cmnt_rate;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  brn_FeedBack;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  comment_cmnt;








	private: System::Windows::Forms::TextBox^  txt_retid;

	private: System::Windows::Forms::Button^  button1;









	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  btn_DetailsOrder;
	private: System::Windows::Forms::Button^  button7;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_checkorder::typeid));
			this->btn_CancelOrder = (gcnew System::Windows::Forms::Button());
			this->btn_coment = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_retid = (gcnew System::Windows::Forms::TextBox());
			this->txt_ordertid = (gcnew System::Windows::Forms::TextBox());
			this->Edit_order = (gcnew System::Windows::Forms::Button());
			this->ordersView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->resturant = (gcnew System::Windows::Forms::ColumnHeader());
			this->delivery = (gcnew System::Windows::Forms::ColumnHeader());
			this->deliverphone = (gcnew System::Windows::Forms::ColumnHeader());
			this->regtime = (gcnew System::Windows::Forms::ColumnHeader());
			this->arrivaltime = (gcnew System::Windows::Forms::ColumnHeader());
			this->totalprice = (gcnew System::Windows::Forms::ColumnHeader());
			this->orderstat = (gcnew System::Windows::Forms::ColumnHeader());
			this->comment_panel = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->brn_FeedBack = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comment_cmnt = (gcnew System::Windows::Forms::TextBox());
			this->cmnt_rate = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn_DetailsOrder = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->comment_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmnt_rate))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_CancelOrder
			// 
			this->btn_CancelOrder->BackColor = System::Drawing::Color::Olive;
			this->btn_CancelOrder->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_CancelOrder->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_CancelOrder->ForeColor = System::Drawing::Color::White;
			this->btn_CancelOrder->Location = System::Drawing::Point(340, 52);
			this->btn_CancelOrder->Name = L"btn_CancelOrder";
			this->btn_CancelOrder->Size = System::Drawing::Size(90, 41);
			this->btn_CancelOrder->TabIndex = 3;
			this->btn_CancelOrder->Text = L"Cancel Order";
			this->btn_CancelOrder->UseVisualStyleBackColor = false;
			this->btn_CancelOrder->Click += gcnew System::EventHandler(this, &MyForm_checkorder::btn_CancelOrder_Click);
			// 
			// btn_coment
			// 
			this->btn_coment->BackColor = System::Drawing::Color::Olive;
			this->btn_coment->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_coment->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_coment->ForeColor = System::Drawing::Color::White;
			this->btn_coment->Location = System::Drawing::Point(187, 52);
			this->btn_coment->Name = L"btn_coment";
			this->btn_coment->Size = System::Drawing::Size(109, 41);
			this->btn_coment->TabIndex = 4;
			this->btn_coment->Text = L"Comment";
			this->btn_coment->UseVisualStyleBackColor = false;
			this->btn_coment->Click += gcnew System::EventHandler(this, &MyForm_checkorder::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->txt_retid);
			this->panel1->Controls->Add(this->txt_ordertid);
			this->panel1->Controls->Add(this->btn_coment);
			this->panel1->Controls->Add(this->btn_CancelOrder);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(366, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(433, 102);
			this->panel1->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Olive;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(302, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 41);
			this->button4->TabIndex = 69;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Olive;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(146, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 41);
			this->button3->TabIndex = 68;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Olive;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(7, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 40);
			this->button2->TabIndex = 67;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(51, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 40);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Return Order";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm_checkorder::button1_Click);
			// 
			// txt_retid
			// 
			this->txt_retid->Location = System::Drawing::Point(147, 21);
			this->txt_retid->Name = L"txt_retid";
			this->txt_retid->ReadOnly = true;
			this->txt_retid->Size = System::Drawing::Size(100, 20);
			this->txt_retid->TabIndex = 7;
			this->txt_retid->Visible = false;
			// 
			// txt_ordertid
			// 
			this->txt_ordertid->Location = System::Drawing::Point(26, 21);
			this->txt_ordertid->Name = L"txt_ordertid";
			this->txt_ordertid->ReadOnly = true;
			this->txt_ordertid->Size = System::Drawing::Size(100, 20);
			this->txt_ordertid->TabIndex = 6;
			this->txt_ordertid->Visible = false;
			// 
			// Edit_order
			// 
			this->Edit_order->BackColor = System::Drawing::Color::Olive;
			this->Edit_order->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Edit_order->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Edit_order->ForeColor = System::Drawing::Color::White;
			this->Edit_order->Location = System::Drawing::Point(685, 197);
			this->Edit_order->Name = L"Edit_order";
			this->Edit_order->Size = System::Drawing::Size(103, 38);
			this->Edit_order->TabIndex = 8;
			this->Edit_order->Text = L"Edit";
			this->Edit_order->UseVisualStyleBackColor = false;
			this->Edit_order->Click += gcnew System::EventHandler(this, &MyForm_checkorder::Edit_order_Click);
			// 
			// ordersView
			// 
			this->ordersView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->resturant,
					this->delivery, this->deliverphone, this->regtime, this->arrivaltime, this->totalprice, this->orderstat
			});
			this->ordersView->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->ordersView->FullRowSelect = true;
			this->ordersView->GridLines = true;
			this->ordersView->Location = System::Drawing::Point(1, 243);
			this->ordersView->MultiSelect = false;
			this->ordersView->Name = L"ordersView";
			this->ordersView->Size = System::Drawing::Size(798, 210);
			this->ordersView->TabIndex = 32;
			this->ordersView->UseCompatibleStateImageBehavior = false;
			this->ordersView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 2;
			// 
			// resturant
			// 
			this->resturant->Text = L"Resturant";
			this->resturant->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->resturant->Width = 100;
			// 
			// delivery
			// 
			this->delivery->Text = L"Delivery Boy";
			this->delivery->Width = 90;
			// 
			// deliverphone
			// 
			this->deliverphone->Text = L"Delivery Phone";
			this->deliverphone->Width = 110;
			// 
			// regtime
			// 
			this->regtime->Text = L"Request Time";
			this->regtime->Width = 135;
			// 
			// arrivaltime
			// 
			this->arrivaltime->Text = L"Arrival Time";
			this->arrivaltime->Width = 135;
			// 
			// totalprice
			// 
			this->totalprice->Text = L"Total Price";
			this->totalprice->Width = 100;
			// 
			// orderstat
			// 
			this->orderstat->Text = L"Order Status";
			this->orderstat->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->orderstat->Width = 118;
			// 
			// comment_panel
			// 
			this->comment_panel->BackColor = System::Drawing::Color::Transparent;
			this->comment_panel->Controls->Add(this->button6);
			this->comment_panel->Controls->Add(this->brn_FeedBack);
			this->comment_panel->Controls->Add(this->label3);
			this->comment_panel->Controls->Add(this->comment_cmnt);
			this->comment_panel->Controls->Add(this->cmnt_rate);
			this->comment_panel->Controls->Add(this->label2);
			this->comment_panel->Location = System::Drawing::Point(0, 0);
			this->comment_panel->Name = L"comment_panel";
			this->comment_panel->Size = System::Drawing::Size(367, 189);
			this->comment_panel->TabIndex = 35;
			this->comment_panel->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Olive;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Enabled = false;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(79, 151);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 34);
			this->button6->TabIndex = 70;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// brn_FeedBack
			// 
			this->brn_FeedBack->BackColor = System::Drawing::Color::Olive;
			this->brn_FeedBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->brn_FeedBack->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brn_FeedBack->ForeColor = System::Drawing::Color::White;
			this->brn_FeedBack->Location = System::Drawing::Point(109, 151);
			this->brn_FeedBack->Name = L"brn_FeedBack";
			this->brn_FeedBack->Size = System::Drawing::Size(175, 34);
			this->brn_FeedBack->TabIndex = 39;
			this->brn_FeedBack->Text = L"Send FeedBack";
			this->brn_FeedBack->UseVisualStyleBackColor = false;
			this->brn_FeedBack->Click += gcnew System::EventHandler(this, &MyForm_checkorder::brn_FeedBack_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(3, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 27);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Comment";
			// 
			// comment_cmnt
			// 
			this->comment_cmnt->Location = System::Drawing::Point(103, 69);
			this->comment_cmnt->Multiline = true;
			this->comment_cmnt->Name = L"comment_cmnt";
			this->comment_cmnt->Size = System::Drawing::Size(264, 75);
			this->comment_cmnt->TabIndex = 37;
			// 
			// cmnt_rate
			// 
			this->cmnt_rate->Location = System::Drawing::Point(189, 26);
			this->cmnt_rate->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->cmnt_rate->Name = L"cmnt_rate";
			this->cmnt_rate->Size = System::Drawing::Size(120, 20);
			this->cmnt_rate->TabIndex = 36;
			this->cmnt_rate->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(3, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 27);
			this->label2->TabIndex = 35;
			this->label2->Text = L"rate a restaurant";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Olive;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(639, 197);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 38);
			this->button5->TabIndex = 69;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// btn_DetailsOrder
			// 
			this->btn_DetailsOrder->BackColor = System::Drawing::Color::Olive;
			this->btn_DetailsOrder->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_DetailsOrder->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_DetailsOrder->ForeColor = System::Drawing::Color::White;
			this->btn_DetailsOrder->Location = System::Drawing::Point(533, 199);
			this->btn_DetailsOrder->Name = L"btn_DetailsOrder";
			this->btn_DetailsOrder->Size = System::Drawing::Size(103, 38);
			this->btn_DetailsOrder->TabIndex = 70;
			this->btn_DetailsOrder->Text = L"Details";
			this->btn_DetailsOrder->UseVisualStyleBackColor = false;
			this->btn_DetailsOrder->Click += gcnew System::EventHandler(this, &MyForm_checkorder::btn_DetailsOrder_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Olive;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Enabled = false;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Location = System::Drawing::Point(487, 199);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 38);
			this->button7->TabIndex = 71;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// MyForm_checkorder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(800, 456);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->btn_DetailsOrder);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->comment_panel);
			this->Controls->Add(this->ordersView);
			this->Controls->Add(this->Edit_order);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm_checkorder";
			this->Text = L"Customer Orders";
			this->Load += gcnew System::EventHandler(this, &MyForm_checkorder::MyForm_checkorder_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->comment_panel->ResumeLayout(false);
			this->comment_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmnt_rate))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 comment_panel->Visible = true;	
				
	}
			 int index = -1;
	private: System::Void Edit_order_Click(System::Object^  sender, System::EventArgs^  e) {
            

		panel1->Enabled = true;
		int index = ordersView->FocusedItem->Index;
		txt_ordertid->Text = orders[index]->orderID;
		txt_retid->Text = orders[index]->resturantID;
}
private: System::Void btn_return_Click(System::Object^  sender, System::EventArgs^  e) {

}
List<Order ^> ^ orders = gcnew List<Order ^>(); //global
private: System::Void MyForm_checkorder_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 orders = container::customer->LoadOrders();
			 ordersView->Items->Clear();
			 if (orders->Count != 0){
				 for (int i = 0; i < orders->Count; i++)
				 {
						 ListViewItem ^ listitems = gcnew ListViewItem();
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
}
	private: System::Void brn_FeedBack_Click(System::Object^  sender, System::EventArgs^  e) {
		/*comment*/
		if (txt_ordertid->Text == "" || comment_cmnt->Text == ""){
			MessageBox::Show("Enter Your full Comment", "Required", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else{
			try
			{
				container::customer->sendfeedback(txt_ordertid->Text, comment_cmnt->Text, txt_retid->Text, System::Convert::ToInt16(cmnt_rate->Text));
				MessageBox::Show("Thank You","Done",MessageBoxButtons::OK, MessageBoxIcon::Information);
				comment_panel->Visible = false;
				panel1->Enabled = false;
				
			}
			catch (String^err)
			{
				MessageBox::Show(err);
			}
		}
	}
private: System::Void returnbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void btn_CancelOrder_Click(System::Object^  sender, System::EventArgs^  e) {
	
			 try{
				 container::customer->CancleOrder(txt_ordertid->Text);
				 orders = container::customer->LoadOrders();
				 ordersView->Items->Clear();
				 if (orders->Count != 0){
					 for (int i = 0; i < orders->Count; i++)
					 {
						 ListViewItem ^ listitems = gcnew ListViewItem();
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
				 MessageBox::Show("Your Order Cancled","Done",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 comment_panel->Visible = true;
			 }
			 catch (String ^err)
			 {
				 MessageBox::Show(err);
			 }
}
private: System::Void returnorder_Click(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
			 try
			 {
				 container::customer->returnOrder(txt_ordertid->Text);
				 MessageBox::Show("Your Order Returned \t\t\n Otlop Team Ask You To Tell US About The Reason", "Done",MessageBoxButtons::OK, MessageBoxIcon::Information);
				 orders = container::customer->LoadOrders();
				 ordersView->Items->Clear();
				 if (orders->Count != 0){
					 for (int i = 0; i < orders->Count; i++)
					 {
						 ListViewItem ^ listitems = gcnew ListViewItem();
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
				 comment_panel->Visible = true;
			 }
			 catch (String^err)
			 {
				 MessageBox::Show(err);
			 }
}
private: System::Void returnorder_Click_1(System::Object^  sender, System::EventArgs^  e) {
			
			
}
private: System::Void btn_DetailsOrder_Click(System::Object^  sender, System::EventArgs^  e) {
	int index = ordersView->FocusedItem->Index;
	container::order = orders[index];
	MyForm11^ viewitem = gcnew MyForm11();
	viewitem->ShowDialog();
}
};
}
