#pragma once
using namespace System;
ref class item
{
private:
	String ^ itemid;
	String ^ itemname;
	float individualPrice;
	float familyPrice;
public:
	String ^ Size;
	Int32 Quantity;
	String^resturantid;
	String^resturant;
	item();
	item(String ^ id, String ^ name, float indviPr, float familyPr, Int32 quantity);
	void setID(String ^ resturantid);
	String ^ getID();

	void setname(String ^ resturantname);
	String ^ getname();

	void setindPrice(float price);
	float getindPrice();

	void setfamPrice(float price);
	float getfamPrice();

};

