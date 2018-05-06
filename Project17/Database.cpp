#include "Database.h"
Database::Database()
{
	this->connection = gcnew SqlConnection();
	connection->ConnectionString = "Data Source=AHMAD-NASR\\SQLEXPRESS;Initial Catalog=ottlob;Integrated Security=True";
}
void Database::openConnection()
{
	this->connection->Open();
}
void Database::closeConnection()
{
	this->connection->Close();
}
SqlConnection ^ Database::getConnection()
{
	return this->connection;

}
