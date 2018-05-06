#include "item.h"


item::item()
{
}
item::item(String ^ id, String ^ name, float indviPr, float familyPr, Int32 quantity)
{
	this->itemid = id;
	this->itemname = name;
	this->individualPrice = indviPr;
	this->familyPrice = familyPr;
	this->Quantity = quantity;
}
void item::setID(String^ id){
	this->itemid = id;
}
void item::setname(String^ name){
	this->itemname = name;
}
void item::setindPrice(float price){
	this->individualPrice = price;
}
void item::setfamPrice(float price){
	this->familyPrice = price;
}

String^ item::getID(){
	return this->itemid;
}
String^ item::getname(){
	return this->itemname;
}
float item::getindPrice(){
	return this->individualPrice;
}
float item::getfamPrice(){
	return this->familyPrice;
}

