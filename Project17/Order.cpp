#include "Order.h"
Order::Order()
{
}
void Order::CheckorderStat()
{
	String ^ Query = "update orders set orders.stat = 'Delivered' where arrivaltime < CURRENT_TIMESTAMP AND orders.stat = 'Under preparation'";
	Database ^ check = gcnew Database();
	check->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, check->getConnection());
	cmd->ExecuteNonQuery();
	check->closeConnection();
}
List<item^>^ Order::getitems(String^userid)
{
	String ^ Query = "select item.itemname , orderitems.quantity, orders.userid from orderitems INNER JOIN item ON item.itemID = orderitems.itemID INNER JOIN orders ON orders.orderID = orderitems.orderID  where orderitems.orderID ='" + this->orderID + "' AND orders.userid ='"+userid+"'";
	Database^getitems = gcnew Database();
	getitems->openConnection();
	SqlCommand ^ cmd = gcnew SqlCommand(Query, getitems->getConnection());
	SqlDataReader ^ reader = cmd->ExecuteReader();
	List<item^ >^items = gcnew List<item^>();
	while (reader->Read())
	{
		item ^ temp = gcnew item();
		temp->setname(reader["itemname"]->ToString());
		temp->Quantity = System::Convert::ToInt32(reader["quantity"]);
		items->Add(temp);
	}
	reader->Close();
	getitems->closeConnection();
	return items;
}