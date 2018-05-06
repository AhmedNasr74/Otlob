#include "Customer.h"
Customer::Customer()
{
}
Customer::Customer(String^ username, String^ password, String^phone, String^ email, String ^ BD)
{
	this->UserName = username;
	this->password = password;
	this->phone = phone;
	this->Email = email;
	this->Birthdate = BD;
}
void Customer::setID(String ^ id)
{
	this->ID = id;
}
String ^ Customer::GetID()
{
	return this->ID;
}
void Customer::setUserName(String ^ name)
{
	this->UserName = name;
}
String ^ Customer::GetUserName()
{
	return this->UserName;
}
void Customer::setPassword(String ^ password)
{
	this->password = password;
}
String ^ Customer::GetPassword()
{
	return this->password;
}
void Customer::setEmail(String ^ email)
{
	this->Email = email;
}
String ^ Customer::GetEmail()
{
	return this->Email;
}
void Customer::setPhone(String ^ phone)
{
	this->phone = phone;
}
String ^ Customer::GetPhone()
{
	return this->phone;
}
void Customer::setBirthdate(String ^ birthdate)
{
	this->Birthdate = birthdate;
}
String ^ Customer::getBirthdate()
{
	return this->Birthdate;
}
Int16 Customer::login(String ^username, String ^ password)
{
	Database ^ login = gcnew Database();
	login->openConnection();
	String ^ Query = "select * from users where username='" + username + "'And password='" + password + "'";
	SqlCommand ^ cmd = gcnew SqlCommand(Query, login->getConnection());
	Int16 count = System::Convert::ToInt16(cmd->ExecuteScalar());
	login->closeConnection();
	return count;
}
Int16 Customer::checkFoundname(String ^ username)
{
	Database ^ login = gcnew Database();
	login->openConnection();
	String ^ Query = "select * from users where username='" + username + "'";
	SqlCommand ^ cmd = gcnew SqlCommand(Query, login->getConnection());
	Int16 count = System::Convert::ToInt16(cmd->ExecuteScalar());
	login->closeConnection();
	return count;
}
void Customer::Register()
{
	String ^ error = "Sorry , But this Username IS not available";
	if (checkFoundname(this->UserName) > 0)
	{throw
		 error;
	}
	else
	{
		Database ^ Register = gcnew Database();
		Register->openConnection();
		String ^ Query = "INSERT INTO users (username , password , email , phone ,Birthdate ,DateReg , permession) VALUES ('" + this->UserName + "','" + this->password + "','" + this->Email + "','" + this->phone + "','" + this->Birthdate + "',CURRENT_TIMESTAMP,0)";
		SqlCommand ^ cmd = gcnew SqlCommand(Query, Register->getConnection());
		cmd->ExecuteNonQuery();
		Register->closeConnection();
	}
}
void Customer::getData()
{
	Database ^ get = gcnew Database();
	get->openConnection();
	String ^ Query = "select userID , Birthdate ,phone from users where username='" + this->UserName + "'";
	SqlCommand ^ cmd = gcnew SqlCommand(Query, get->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	if (reader->Read())
	{
		this->ID = reader["userID"]->ToString();
		this->phone = reader["phone"]->ToString();
		this->Birthdate = reader["Birthdate"]->ToString();
	}
	get->closeConnection();
}
int Customer::checkDisc()
{
	int stat;
	Database ^ check = gcnew Database();
	check->openConnection();
	String ^ Query = "SELECT regstat FROM users WHERE username = '" + this->UserName + "'";
	SqlCommand ^ cmd = gcnew SqlCommand(Query, check->getConnection());
	SqlDataReader^rdr = cmd->ExecuteReader();
	if (rdr->Read())
		 stat = int::Parse(rdr["regstat"]->ToString());
	rdr->Close();
	if (stat == 0)
	{
		Query = "UPDATE users SET regstat =1 WHERE username='" + this->UserName + "'";
		cmd = gcnew SqlCommand(Query, check->getConnection());
		cmd->ExecuteNonQuery();
		check->closeConnection();
		return 1;
	}
		check->closeConnection();
		return 0;
}
void Customer::makeOrder(Usercart ^ c)
{
	Database ^ order = gcnew Database();
	order->openConnection();
	String ^ Query1 = "INSERT INTO orders (price ,discount,totalprice,orderReg ,arrivaltime ,paymentmethod ,userid ,resturantid ,boyid ,distenation,CreditNumber,stat)VALUES('" + c->price + "','" + c->getTotalDis() + "','" + c->totalprice + "',CURRENT_TIMESTAMP,'" + c->arrivaltime + "','" + c->paymentMethod + "','" + this->ID + "','" + c->resturant->getRestaurantID() + "','" + c->DeliveryBoy->GetID() + "','" + c->destination + "','"+c->getCard()+"','Under preparation')";
	SqlCommand ^ cmd = gcnew SqlCommand(Query1, order->getConnection());
	cmd->ExecuteNonQuery();
	String ^ Query2 = "SELECT TOP 1 orderID FROM orders WHERE userid = '" + this->ID + "' ORDER BY orderID DESC";
	cmd = gcnew SqlCommand(Query2, order->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	String ^ orderID;
	if (reader->Read())
		orderID = reader["orderID"]->ToString();
	reader->Close();
	for (int i = 0; i < c->Cartitems->Count; i++)
	{
		String ^Query3 = "INSERT INTO orderitems (orderID,itemID,quantity) VALUES ('"+orderID+ "','" + c->Cartitems[i]->getID() + "','" + c->Cartitems[i]->Quantity + "')";
		cmd = gcnew SqlCommand(Query3, order->getConnection());
		cmd->ExecuteNonQuery();
	}
	order->closeConnection();
}
List<Order ^> ^ Customer::LoadOrders()
{
	List<Order^> ^ allOrders = gcnew List<Order^>();
	String ^ Query = "SELECT orders.* ,users.username AS custName,users.phone AS custphone , DBoyes.name, DBoyes.phone , resturant.* FROM orders INNER JOIN users ON users.userID = orders.userid INNER JOIN DBoyes ON DBoyes.boyID = orders.boyID INNER JOIN resturant ON resturant.returantID = orders.resturantID where orders.userid='" + this->ID + "'";
	Database ^ billuser = gcnew Database();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, billuser->getConnection());
	billuser->openConnection();
	SqlDataReader ^ reader = cmd->ExecuteReader();
	while (reader->Read())
	{
		Order ^ order = gcnew Order();
		order->orderID = reader["orderID"]->ToString();
		order->customerName = reader["custName"]->ToString();
		order->customerphone = reader["custphone"]->ToString();
		order->resturantName = reader["restName"]->ToString();
		order->resturantID = reader["returantID"]->ToString();
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
	billuser->closeConnection();
	return allOrders;
}
void Customer::CancleOrder(String ^ orderid)
{
	String ^ Query = "SELECT stat , orderReg ,resturantid FROM orders WHERE orderID = '" + orderid + "'";
	Database ^ cancle = gcnew Database();
	cancle->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, cancle->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	DateTime localtime = System::DateTime::Now;

	if (reader->Read())
	{
		DateTime orderreg = System::DateTime::Parse(reader["orderReg"]->ToString());
		String ^ error;
		TimeSpan def = localtime.Subtract(orderreg);
		int def_totalmin = def.TotalMinutes;
		if (reader["stat"]->ToString() == "Delivered")
		{
			error = "Sorry, We can not Cancle Your Order Because This order IS Already Delivered Successfully";
			throw error;
		}
		else if (reader["stat"]->ToString() == "Returned")
		{
			error = "Sorry, We can not Cancle Your Order Because This order IS Already Returned !!";
			throw error;
		}
		else if (reader["stat"]->ToString() == "Canceled")
		{
			error = "Sorry, We can not Cancle Your Order Because This order IS Already Canceled !!";
			throw error;
		}
		else if (reader["stat"]->ToString() == "Under preparation" && def_totalmin <= 10)
		{/*cancle order first*/
			String ^ Resturant = reader["resturantid"]->ToString();
			reader->Close();
			Query = "UPDATE orders SET stat = 'Canceled' WHERE orderID ='" + orderid + "'";
			cmd = gcnew SqlCommand(Query, cancle->getConnection());
			cmd->ExecuteNonQuery();
			/*return quantity to resturant*/
			Query = "select itemID, quantity from orderitems where orderID ='" + orderid + "'";
			cmd = gcnew SqlCommand(Query, cancle->getConnection());
			SqlDataReader ^ items = cmd->ExecuteReader();
			List<item ^> ^orderitems = gcnew List<item ^>();
			while (items->Read())
			{
				item ^ temp = gcnew item(items["itemID"]->ToString(), "", 0.0, 0.0, int::Parse(items["quantity"]->ToString()));
				orderitems->Add(temp);
			}
			items->Close();
			for (int i = 0; i < orderitems->Count; i++)
			{
				items->Close();
				Query = "select quantity from itemRest where itemID ='" + orderitems[i]->getID() + "' AND restID = '" + Resturant + "'";
				cmd = gcnew SqlCommand(Query, cancle->getConnection());
				SqlDataReader ^ oldquant = cmd->ExecuteReader();
				if (oldquant->Read()){
					int newquantity = orderitems[i]->Quantity + int::Parse(oldquant["quantity"]->ToString());
					oldquant->Close();
					Query = "UPDATE itemRest SET quantity='" + newquantity + "'where itemID='" + orderitems[i]->getID() + "' AND restID = '" + Resturant + "'";
					cmd = gcnew SqlCommand(Query, cancle->getConnection());
					cmd->ExecuteNonQuery();
				}
			}
		}
		else
		{
			error = "Sorry But We can not Cancle Your Order Because allowed Time For Canclation Left !!";
			throw error;
		}
	}
	cancle->closeConnection();
}
void Customer::sendfeedback(String ^ orderid, String ^ comment, String ^ restid, Int16 rate)
{
	String ^ Query = "SELECT stat , orderReg ,resturantid FROM orders WHERE orderID = '" + orderid + "'";
	Database ^ feedback = gcnew Database();
	feedback->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, feedback->getConnection());
	SqlDataReader^reader = cmd->ExecuteReader();
	String^stat;
	String^err = "Wait Your Order Then comment";
	if (reader->Read())
		stat = reader["stat"]->ToString();
	reader->Close();
	if (stat == "Under preparation")
		throw err;
	else{
		Query = "INSERT INTO comment (comment,resturant_rate,orderid,resturantid)VALUES('" + comment + "','" + rate + "','" + orderid + "','" + restid + "')";
		cmd = gcnew SqlCommand(Query, feedback->getConnection());
		cmd->ExecuteNonQuery();
	}
	feedback->closeConnection();
}
void Customer::returnOrder(String ^ orderID)
{
	String ^ Query = "SELECT stat , orderReg FROM orders WHERE orderID = '" + orderID + "'";
	Database ^ returnOrder = gcnew Database();
	returnOrder->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, returnOrder->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	if (reader->Read())
	{
		String ^ error;
		if (reader["stat"]->ToString() == "Under preparation")
		{
			error = "You Can not return this order while it is Under preparation";
			throw error;
		}
		else if (reader["stat"]->ToString() == "Returned")
		{
			error = "You Can not return this order Because it is Already Returned Before";
			throw error;
		}
		else if (reader["stat"]->ToString() == "Canceled")
		{
			error = "You Can not return this order Because it is Already Canceled Before";
			throw error;
		}
		else
		{
			reader->Close();
			Query = "UPDATE orders SET stat = 'Returned' WHERE orderID ='"+orderID+ "'";
			cmd = gcnew SqlCommand(Query, returnOrder->getConnection());
			cmd->ExecuteNonQuery();
		}
		returnOrder->closeConnection();
	}
}
bool Customer::orders_today()
{
	//on customer birthdate he must take a voucher only one time
	DateTime ^ date = DateTime::Now;
	String ^ localtime = date->ToString("yyy-MM-dd");//convert our datetime to sql format
	String ^ Query = "select * from orders where userid='" + this->ID + "' AND CAST(orderReg AS DATE) = '" + localtime + "'";
	Database ^ check = gcnew Database();
	check->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, check->getConnection());
	Int64 count = System::Convert::ToInt64(cmd->ExecuteScalar());
	check->closeConnection();
	return (count > 0) ? true : false;
}