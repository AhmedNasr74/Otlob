#pragma once
#include "Database.h"
#include"item.h"
#include"category.h"
#include "Deliveryboy.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data;
ref class Resturant
{
private:
	String ^ Restaurantid;
	String ^ Restaurantname;
	Int16 discount;
public:
	String ^ governate;
	String ^ area;
	Int16 requstTime;
	float deliveryCharge;
	List<item ^> ^Resturantitems;
	Resturant();
	Resturant(String ^ id, String ^ name, String ^ governate, String ^ area, Int16 discount, Int16 time);
	void setRestaurantID(String ^ id);
	void setRestaurantname(String ^ name);
	void setdiscount(Int16 discount);
	String ^ getRestaurantID();
	String ^ getRestaurantname();
	void completeData();
	Int16 getdiscount();
	List<Resturant ^> ^ getresturantByCat(category ^ cat);
	List<Resturant ^> ^ getresturantByoffer();
	void LoadItems();
	Deliveryboy ^ GenerateBoy(DateTime^arrivaltime);
};

