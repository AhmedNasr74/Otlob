#include "Resturant.h"
Resturant::Resturant()
{
	Resturantitems = gcnew List<item ^ >();
}
Resturant::Resturant(String ^ id, String ^ name, String ^ governate, String ^ area, Int16 discount, Int16 time)
{
	this->Restaurantid = id;
	this->Restaurantname = name;
	this->governate = governate;
	this->area = area;
	this->discount = discount;
	this->requstTime = time;
}
void Resturant::setRestaurantID(String ^ id) {
	Restaurantid = id;
}
void Resturant::setRestaurantname(String ^ name)
{
	this->Restaurantname = name;
}
void Resturant::setdiscount(Int16 disc) {
	this->discount = disc;
}
String ^ Resturant::getRestaurantID() {
	return this->Restaurantid;
}
String ^ Resturant::getRestaurantname() {
	return this->Restaurantname;
}
Int16 Resturant::getdiscount() {
	return this->discount;
}
void Resturant::completeData()
{
	String ^ Query = "SELECT * From resturant where returantID ='"+this->Restaurantid+"'";
	Database ^ complete = gcnew Database();
	complete->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, complete->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	if (reader->Read())
	{
		this->discount  = System::Convert::ToInt32(reader["discount"]);
		this->requstTime = System::Convert::ToInt32(reader["requstTime"]);
		this->deliveryCharge = float::Parse(reader["delivercharge"]->ToString());
		
	}
	reader->Close();
	complete->closeConnection();
}
List<Resturant ^> ^ Resturant::getresturantByCat(category ^ cat)
{
	List<Resturant ^> ^ resturants = gcnew List<Resturant ^>();
	Database ^ getResturants = gcnew Database();
	String ^ Query = "SELECT resturant.* FROM restCat INNER JOIN resturant ON resturant.returantID = restCat.restID WHERE restCat.catID = '" + cat->catid + "' AND resturant.governorate = '" + this->governate + "' AND resturant.area = '" + this->area + "'";
	getResturants->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, getResturants->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	while (reader->Read())
	{
		String ^ id = reader["returantID"]->ToString();
		String ^ name = reader["restName"]->ToString();
		String ^ gover = reader["governorate"]->ToString();
		String ^ areea = reader["area"]->ToString();
		Int16 discount = System::Convert::ToInt16(reader["discount"]);
		Int16 rqstTime = System::Convert::ToInt16(reader["requstTime"]);
		Resturant ^ resturant = gcnew Resturant(id, name, gover, areea, discount, rqstTime);
		resturants->Add(resturant);
	}
	reader->Close();
	getResturants->closeConnection();
	return resturants;
}
List<Resturant ^> ^ Resturant::getresturantByoffer()
{
	List<Resturant ^> ^ resturants = gcnew List<Resturant ^>();
	Database ^ getResturants = gcnew Database();
	String ^ Query = "SELECT * FROM resturant WHERE governorate = '" + this->governate + "' AND area = '" + this->area + "' AND discount > 0";
	getResturants->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, getResturants->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	while (reader->Read())
	{
		String ^ id = reader["returantID"]->ToString();
		String ^ name = reader["restName"]->ToString();
		String ^ gover = reader["governorate"]->ToString();
		String ^ areea = reader["area"]->ToString();
		Int16 discount = System::Convert::ToInt16(reader["discount"]);
		Int16 rqstTime = System::Convert::ToInt16(reader["requstTime"]);
		Resturant ^ resturant = gcnew Resturant(id, name, gover, areea, discount, rqstTime);
		resturants->Add(resturant);
	}
	reader->Close();
	getResturants->closeConnection();
	return resturants;
}
void Resturant::LoadItems()
{
	item ^ temp = gcnew item();
	String ^ Query = "SELECT itemRest.quantity , item.* FROM itemRest INNER JOIN item ON item.itemID = itemRest.itemID WHERE restID = '" + this->Restaurantid + "'";
	Database ^ getitems = gcnew Database();
	getitems->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, getitems->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	while (reader->Read())
	{
		String ^ id = reader["itemID"]->ToString();
		String ^ name = reader["itemname"]->ToString();
		float indPrice = float::Parse(reader["individualprice"]->ToString());
		float famPrice = float::Parse(reader["familyprice"]->ToString());
		Int32 quantity = System::Convert::ToInt32(reader["quantity"]);
		temp = gcnew item(id, name, indPrice, famPrice, quantity);
		Resturantitems->Add(temp);
	}
	getitems->closeConnection();
}
Deliveryboy ^ Resturant::GenerateBoy(DateTime^arrivaltime)
{
	String ^ Query1 = "select TOP 1 * from DBoyes where restID = '"+this->Restaurantid+"' AND ordernum < 2 order by ordernum";
	DateTime ^ temptime = arrivaltime;
	String ^ strtime = temptime->ToString("yyyy-MM-dd H:mm");
	String ^ Query2 = "select TOP 1 * from DBoyes where DBoyes.restID = '" + this->Restaurantid + "' AND (DBoyes.latestorder < '" + strtime + "' OR (DBoyes.latestorder = '" + strtime + "' AND numat_latest < 2)) order by ordernum";
	Database ^ genrateBoy = gcnew Database();
	SqlDataReader ^ reader;
	genrateBoy->openConnection();
	SqlCommand ^  cmd1 = gcnew SqlCommand(Query1, genrateBoy->getConnection());
	SqlCommand ^  cmd2 = gcnew SqlCommand(Query2, genrateBoy->getConnection());
	Int16 count = System::Convert::ToInt16(cmd1->ExecuteScalar());
	if (count > 0)
		reader = cmd1->ExecuteReader();
	else
		reader = cmd2->ExecuteReader();
	Deliveryboy ^ DB = gcnew Deliveryboy();
	if (reader->Read())
	{
		String ^ boyid = reader["BoyID"]->ToString();
		String ^ name = reader["name"]->ToString();
		String ^ phone = reader["phone"]->ToString();
		String ^ restid = reader["restID"]->ToString();
		Int16 numofOrders = System::Convert::ToInt16(reader["ordernum"]);
		DB = gcnew Deliveryboy(boyid, name, phone, numofOrders, restid);
	}
	reader->Close();
	genrateBoy->closeConnection();
	DB->UpdateLatestorder(strtime);
	return DB;
}