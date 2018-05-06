#pragma once
#include "Resturant.h"
#include "item.h"
#include "Database.h"
#include "Deliveryboy.h"

ref class Usercart
{
private: String ^ CreditCard;
public:
	float price;
	float totalprice;
	Resturant ^ resturant;
	List<item ^> ^ Cartitems;
	Deliveryboy ^ DeliveryBoy;
	String ^ paymentMethod;
	String ^ destination;
	int userDiscount;
	String ^ orderReg;
	String ^ arrivaltime;
	Usercart();
	void setCard(String ^);
	String ^ getCard();
	void calcPrice();
	int getTotalDis();
	void calctotalPrice();
	void setOrderTime();
	void Updateitems(item^ Item); // item -- @ database 
	void Appenditems(item ^ Item);
};

