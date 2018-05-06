#include "category.h"

category::category()
{
}
category::category(String ^ id, String ^ name)
{
	this->catid = id;
	this->catname = name;
}
void category::completedata()
{
	String ^ Query = "SELECT catID FROM category where catname = '"+this->catname+ "'";
	Database ^ database = gcnew Database();
	database->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, database->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	if (reader->Read())
	{
		this->catid = reader["catID"]->ToString();
	}
	reader->Close();
	database->closeConnection();

}
List<category ^> ^ category::getAllcats()
{
	List<category ^> ^ Allcats = gcnew List<category ^>();
	String ^ Query = "SELECT * FROM category";
	Database ^ database = gcnew Database();
	database->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, database->getConnection());
	SqlDataReader ^ categories = cmd->ExecuteReader();
	while (categories->Read())
	{
		String ^ id = categories["catID"]->ToString();
		String ^ name = categories["catname"]->ToString();
		category ^ temp = gcnew category(id, name);
		Allcats->Add(temp);
	}
	return Allcats;
}

