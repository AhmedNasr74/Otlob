#pragma once
#include "Database.h"
#include "item.h"
using namespace System;
using namespace System::Collections::Generic;
ref class Order
{
public:
	String ^ orderID;
	String ^ customerName;
	String ^ customerphone;
	String  ^resturantID;
	String  ^resturantName;
	String ^ deliveryBoy;
	String ^ deliveryphone;
	String ^requestTime;
	String ^arrivalTime;
	String ^ paymentMethod;
	String ^ destination;
	String ^ totalPrice;
	String ^ discount;
	String ^ price;
	String ^ stat;
	Order();
	void CheckorderStat();
	List<item^>^ getitems(String^userid);
};

