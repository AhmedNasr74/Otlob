#pragma once
using namespace System;
public ref class Person abstract
{
protected:
	String ^ ID;
	String ^ UserName;
	String ^ password;
	String ^ Email;
	String ^ phone;
public:
	Person();
	virtual  void setID(String ^ id)abstract;
	virtual  String ^ GetID() abstract;

	virtual  void setPassword(String ^ pass) abstract;
	virtual  String ^ GetPassword() abstract;

	virtual  void setUserName(String ^ name) abstract;
	virtual  String ^ GetUserName() abstract;


	virtual  void setEmail(String ^ email) abstract;
	virtual  String ^ GetEmail() abstract;

	virtual  void setPhone(String ^ phone) abstract;
	virtual  String ^ GetPhone() abstract;
	virtual Int16 login(String ^ username, String ^ password) abstract;
};

