#include "Manger.h"
Manger::Manger()
{
}
void Manger::setID(String ^ id)
{
	this->ID = id;
}
String ^ Manger::GetID()
{
	return this->ID;
}
void Manger::setUserName(String ^ name)
{
	this->UserName = name;
}
String ^ Manger::GetUserName()
{
	return this->UserName;
}
void Manger::setPassword(String ^ password)
{
	this->password = password;
}
String ^ Manger::GetPassword()
{
	return this->password;
}
void Manger::setEmail(String ^ email)
{
	this->Email = email;
}
String ^ Manger::GetEmail()
{
	return this->Email;
}
void Manger::setPhone(String ^ phone)
{
	this->phone = phone;
}
String ^ Manger::GetPhone()
{
	return this->phone;
}
Int16 Manger::login(String ^username, String ^ password)
{
	Database ^ login = gcnew Database();
	login->openConnection();
	String ^ Query = "select * from users where username='" + username + "'And password='" + password + "'";
	SqlCommand ^ cmd = gcnew SqlCommand(Query, login->getConnection());
	Int16 count = System::Convert::ToInt16(cmd->ExecuteScalar());
	login->closeConnection();
	return count;
}
Int16 Manger::checkExistboy(Deliveryboy ^ boy)
{
	Database ^ check = gcnew Database();
	check->openConnection();
	String ^ Query = "select * from DBoyes where (BoyID='" + boy->GetID() + "' OR name='" + boy->GetboyName() + "' )AND restID = '" + boy->ResturantID + "'";
	SqlCommand ^ cmd = gcnew SqlCommand(Query, check->getConnection());
	Int16 count = System::Convert::ToInt16(cmd->ExecuteScalar());
	check->closeConnection();
	return count;
}
void Manger::addEmployee(Deliveryboy ^ boy)
{
	String ^ error = "This Delivery Boy is Already Exist at this Resturant";
	if (checkExistboy(boy) > 0)
	{
		throw error;
	}
	else
	{
		Database ^ addBoy = gcnew Database();
		addBoy->openConnection();
		String ^ Query = "INSERT INTO DBoyes (name , phone ,ordernum ,restID) VALUES ('" + boy->GetboyName() + "','" + boy->GetPhone() + "',0,'"+boy->ResturantID+"')";
		SqlCommand ^ cmd = gcnew SqlCommand(Query, addBoy->getConnection());
		cmd->ExecuteNonQuery();
		addBoy->closeConnection();
	}
}
void Manger::remove_employee(Deliveryboy ^ delboy)
{
	String ^ error = "Sorry But This Delivery Boy Dose not Exist At This Resturant";
	if (checkExistboy(delboy) > 0)
	{
		Database ^ removeBoy = gcnew Database();
		removeBoy->openConnection();
		String ^ Query = "DELETE FROM DBoyes WHERE BoyID = '" + delboy->GetID() + "' AND restID = '" + delboy->ResturantID + "'";
		SqlCommand ^ cmd = gcnew SqlCommand(Query, removeBoy->getConnection());
		cmd->ExecuteNonQuery();
		removeBoy->closeConnection();
	}
	else
	{
		throw error;
	}
}
List<Order ^> ^ Manger::viewBill(String ^ date)
{
	Order ^ order = gcnew Order();
	List<Order^> ^ allOrders = gcnew List<Order^>();
	String ^ Query = "SELECT orders.* ,users.username AS custName,users.phone AS custphone , DBoyes.name, DBoyes.phone , resturant.restName FROM orders INNER JOIN users ON users.userID = orders.userid INNER JOIN DBoyes ON DBoyes.boyID = orders.boyID INNER JOIN resturant ON resturant.returantID = orders.resturantID where CAST(arrivaltime AS DATE)='" + date + "'";
	Database ^ billdate = gcnew Database();
	billdate->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, billdate->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	while (reader->Read())
	{
		Order ^ order = gcnew Order();
		order->orderID = reader["orderID"]->ToString();
		order->customerName = reader["custName"]->ToString();
		order->customerphone = reader["custphone"]->ToString();
		order->resturantName = reader["restName"]->ToString();
		order->deliveryBoy = reader["name"]->ToString();
		order->deliveryphone = reader["phone"]->ToString();
		order->destination = reader["distenation"]->ToString();
		order->arrivalTime = reader["arrivaltime"]->ToString();
		order->price = reader["price"]->ToString();
		order->paymentMethod = reader["paymentmethod"]->ToString();
		order->requestTime = reader["orderReg"]->ToString();
		order->discount = reader["discount"]->ToString();
		order->totalPrice = reader["totalprice"]->ToString();
		order->stat = reader["stat"]->ToString();
		allOrders->Add(order);
	}
		reader->Close();
		billdate->closeConnection();
	return allOrders;
}
List<Order ^> ^ Manger::viewBill(Int32 userid)
{
	List<Order^> ^ allOrders = gcnew List<Order^>();
	String ^ Query = "SELECT orders.* ,users.username AS custName,users.phone AS custphone , DBoyes.name, DBoyes.phone , resturant.restName FROM orders INNER JOIN users ON users.userID = orders.userid INNER JOIN DBoyes ON DBoyes.boyID = orders.boyID INNER JOIN resturant ON resturant.returantID = orders.resturantID where orders.userid='"+userid+"'";
	Database ^ billuser = gcnew Database();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, billuser->getConnection());
	billuser->openConnection();
	SqlDataReader ^ reader = cmd->ExecuteReader();
	while (reader->Read())
	{
		Order ^ order = gcnew Order();
		order->orderID		   = reader["orderID"]->ToString();
		order->customerName    = reader["custName"]->ToString();
		order->customerphone   = reader["custphone"]->ToString();
		order->resturantName   = reader["restName"]->ToString();
		order->deliveryBoy     = reader["name"]->ToString();
		order->deliveryphone   = reader["phone"]->ToString();
		order->destination     = reader["distenation"]->ToString();
		order->arrivalTime     = reader["arrivaltime"]->ToString();
		order->price           = reader["price"]->ToString();
		order->paymentMethod   = reader["paymentmethod"]->ToString();
		order->requestTime     = reader["orderReg"]->ToString();
		order->discount        = reader["discount"]->ToString();
		order->totalPrice      = reader["totalprice"]->ToString();
		order->stat            = reader["stat"]->ToString();
		allOrders->Add(order);
	}
	reader->Close();
	billuser->closeConnection();
	return allOrders;
}
List<item ^ > ^ Manger::chackQuantity()
{
	List<item ^ > ^ Allitem = gcnew List<item ^ >();
	String ^ Query = "SELECT itemRest.*, item.*,resturant.restName FROM itemRest INNER JOIN item ON item.itemID = itemRest.itemID INNER JOIN resturant ON resturant.returantID = itemRest.restID";
	Database ^ Item = gcnew Database();
	Item->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, Item->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	while (reader->Read()){
		item^obj_item = gcnew item();
		obj_item->setID(reader["itemID"]->ToString());
		obj_item->setname(reader["itemname"]->ToString());
		obj_item->setindPrice(float::Parse(reader["individualprice"]->ToString()));
		obj_item->setfamPrice(float::Parse(reader["familyprice"]->ToString()));
		obj_item->Quantity = System::Convert::ToInt32(reader["quantity"]);
		obj_item->resturant = reader["restName"]->ToString();
		obj_item->resturantid = reader["restID"]->ToString();
		Allitem->Add(obj_item);
	}
	reader->Close();
	Item->closeConnection();
	return Allitem;
}