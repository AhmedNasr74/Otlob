#pragma once
#include "Person.h"
#include "Database.h"
#include "Usercart.h"
#include "Order.h"
ref class Customer : public Person
{
	String ^ Birthdate;
public:
	Customer();
	Customer(String^ username, String^ password, String^phone, String^ email, String ^ BD);
	void setID(String ^ id) override;
	String ^ GetID() override;

	void setUserName(String ^ name) override;
	String ^ GetUserName() override;

	void  setPassword(String ^ pass) override;
	String ^ GetPassword() override;

	void setEmail(String ^ email) override;
	String ^ GetEmail() override;


	void setPhone(String ^ phone) override;
	String ^ GetPhone() override;

	void setBirthdate(String ^ birthdate);
	String ^ getBirthdate();

	Int16 checkFoundname(String ^ username);
	Int16 login(String ^ username, String ^ password) override;
	void Register();
	int checkDisc();
	void getData();
	List<Order ^> ^ LoadOrders();
	bool orders_today();
	void makeOrder(Usercart ^ cart);
	void CancleOrder(String ^ orderID);
	void returnOrder(String ^ orderID);
	void sendfeedback(String ^ orderID, String ^ comment, String ^ restid, Int16 rate);//
};

