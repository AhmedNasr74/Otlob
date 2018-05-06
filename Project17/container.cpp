#include "container.h"
container::container()
{
	container::manger = gcnew Manger();
	container::customer = gcnew Customer();
	container::deliveryboy = gcnew Deliveryboy();
	container::Category = gcnew category();
	container::resturant = gcnew Resturant();
	container::Item = gcnew item();
	container::Cart = gcnew Usercart();
}
