#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::Sql;
using namespace System::Data::SqlClient;
public ref class Database
{
private:SqlConnection^ connection;
public:
	Database();
	void openConnection();
	void closeConnection();
	SqlConnection ^ getConnection();
};

