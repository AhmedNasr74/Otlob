#pragma once
#include "Person.h"
#include "Database.h"
#include "Deliveryboy.h"
#include "item.h"
#include "Order.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data;
ref class Manger : public Person
{
public:
	Manger();
	void setID(String ^ id)override;
	String ^ GetID() override;

	void setPassword(String ^ pass) override;
	String ^ GetPassword() override;

	void setUserName(String ^ name) override;
	String ^ GetUserName() override;


	void setEmail(String ^ email) override;
	String ^ GetEmail() override;

	void setPhone(String ^ phone) override;
	String ^ GetPhone() override;
	Int16 login(String ^ username, String ^ password) override;
	Int16 checkExistboy(Deliveryboy ^ boy);
	void addEmployee(Deliveryboy ^ boy);
	void remove_employee(Deliveryboy ^ boy);
	List<Order ^> ^ viewBill(String ^ date);
	List<Order ^> ^ viewBill(Int32 userID);
	List<item ^> ^chackQuantity();
};

