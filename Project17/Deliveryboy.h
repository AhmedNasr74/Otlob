#pragma once
using namespace System;
#include "Database.h"
public ref class Deliveryboy
{
private:
	String ^ ID;
	String ^ UserName;
	String ^ phone;
public:
	Int16 numoforders;
	String ^ ResturantID;

	Deliveryboy();
	Deliveryboy(String ^ id, String ^ name, String ^ phone, Int16 ordersnum, String ^ restID);
	void setID(String ^ id);
	String ^ GetID();

	void setboyName(String ^ name);
	String ^ GetboyName();

	void setPhone(String ^ phone);
	String ^ GetPhone();
	void incrementORDER(); //oreders ++ for all
	void UpdateLatestorder(String ^ time);
};

