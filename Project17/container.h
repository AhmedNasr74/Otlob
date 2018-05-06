#pragma once
#include "Database.h"
#include "Person.h"
#include "Manger.h"
#include "Customer.h"
#include "Deliveryboy.h"
#include "category.h"
#include "Resturant.h"
#include "item.h"
#include "Usercart.h"
#include "Order.h"
ref class container
{
public:
	static Manger ^ manger;
	static Customer ^ customer;
	static Deliveryboy ^ deliveryboy;
	static category ^ Category;
	static Resturant ^ resturant;
	static item ^ Item;
	static Usercart ^ Cart;
	static Order^order;
	container();
};


