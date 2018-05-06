#include "Deliveryboy.h"
Deliveryboy::Deliveryboy()
{
}
Deliveryboy::Deliveryboy(String ^ id, String ^ name, String ^ phone, Int16 ordersnum, String ^ restID)
{
	this->ID = id;
	this->UserName = name;
	this->phone = phone;
	this->numoforders = ordersnum;
	this->ResturantID = restID;
}
void Deliveryboy::setID(String ^ id)
{
	this->ID = id;
}
String ^ Deliveryboy::GetID()
{
	return this->ID;
}
void Deliveryboy::setboyName(String ^ name)
{
	this->UserName = name;
}
String ^ Deliveryboy::GetboyName()
{
	return this->UserName;
}
void Deliveryboy::setPhone(String ^ phone)
{
	this->phone = phone;
}
String ^ Deliveryboy::GetPhone()
{
	return this->phone;
}
void Deliveryboy::incrementORDER()
{
	this->numoforders += 1;
	String ^ Query = "UPDATE DBoyes SET ordernum='" + this->numoforders + "' where BoyID = '"+this->ID+"'";
	Database ^ incerment = gcnew Database();
	incerment->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, incerment->getConnection());
	cmd->ExecuteNonQuery();
	incerment->closeConnection();
}
void Deliveryboy::UpdateLatestorder(String ^ time)
{
	String ^ Query = "select latestorder from DBoyes where BoyID ='"+this->ID+"'";
	Database ^ db = gcnew Database();
	db->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, db->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	String ^ readedtime;
	String ^ newQuery;
	if (reader->Read())
	{
		DateTime ^ temp = System::Convert::ToDateTime(reader["latestorder"]);
		readedtime = temp->ToString("yyyy-MM-dd H:mm");
	}
	reader->Close();
	newQuery = (time == readedtime) ? "UPDATE DBoyes SET numat_latest = 2  where BoyID ='" + this->ID + "'" : "UPDATE DBoyes SET latestorder = '"+time+"', numat_latest = 1  where BoyID ='" + this->ID + "'";
	cmd = gcnew SqlCommand(newQuery, db->getConnection());
	cmd->ExecuteNonQuery();
	db->closeConnection();
}