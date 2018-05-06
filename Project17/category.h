#pragma once
#include "Database.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
ref class category
{

public:
	String ^ catid;
	String ^ catname;
	category();//finish
	category(String ^ id, String ^ name);
	void completedata();
	List<category ^> ^ getAllcats();
};


