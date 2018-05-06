#include "Usercart.h"
Usercart::Usercart()
{
	Cartitems = gcnew List<item ^>();
	resturant = gcnew Resturant();
	userDiscount = 0;
	CreditCard = nullptr;
}
void Usercart::setCard(String ^ CreditNum)
{
	this->CreditCard = CreditNum;
}
String ^ Usercart::getCard()
{
	return this->CreditCard;
}
void Usercart::setOrderTime()
{
	DateTime ^ temp = DateTime::Now;
	this->orderReg = temp->ToString(("yyyy-MM-dd H:mm"));
	temp = (temp->AddMinutes(this->resturant->requstTime));
	this->arrivaltime = temp->ToString("yyyy-MM-dd H:mm");
}
void Usercart::Appenditems(item ^ Item)
{
	String ^ error = "Too Much\n Sorry But The Quantity needde is not Available Now! \n Maximum Quantity available now = ";
	String ^ Query = "select quantity from itemRest WHERE itemID = '" + Item->getID() + "'";
	Database ^ checkquantity = gcnew Database();
	checkquantity->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, checkquantity->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	if (reader->Read())
	{
		if (System::Convert::ToInt32(reader["quantity"]) < Item->Quantity)
		{
			throw error + reader["quantity"]->ToString();
		}
		else
		{
			Cartitems->Add(Item);
			Updateitems(Item); //item --
		}
	}
	checkquantity->closeConnection();
}
int Usercart::getTotalDis()
{
	return this->resturant->getdiscount() + userDiscount;
}
void Usercart::Updateitems(item ^Item)
{
	Database ^ decremnt_items = gcnew Database();
	decremnt_items->openConnection();
	String ^ Query = "select quantity from itemRest where itemID ='" + Item->getID() + "'";
	SqlCommand ^ cmd = gcnew SqlCommand(Query, decremnt_items->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	if (reader->Read())
	{
	int newQuantity = int::Parse(reader["quantity"]->ToString()) - Item->Quantity;
	reader->Close();
	 Query = "UPDATE itemRest SET quantity='"+newQuantity+"'WHERE itemID='" + Item->getID()+"'";
	 cmd = gcnew SqlCommand(Query, decremnt_items->getConnection());
	 cmd->ExecuteNonQuery();
	}
	decremnt_items->closeConnection();
}
void Usercart::calcPrice()
{
	this->price = 0.0;
	for (int i = 0; i < Cartitems->Count; i++)
	{
		if (Cartitems[i]->Size == "indvidual")
			this->price += Cartitems[i]->getindPrice() * Cartitems[i]->Quantity;
		else
			this->price += Cartitems[i]->getfamPrice()* Cartitems[i]->Quantity;
	}
	this->price += resturant->deliveryCharge;
}
void Usercart::calctotalPrice()
{
	int totaldiscount = getTotalDis();
	this->totalprice = price - ((totaldiscount* price) / 100);
}
