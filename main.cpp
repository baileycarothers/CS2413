#include "class.cpp"
//#include "class.h"
#include <iostream>

int main() {
	Address addr1;
	Address *addr2 = new Address;

	addr1.set_city("Lubbock");

	cout << "City is: " << addr1.get_city() << endl;
	cout << "Zip is: " << *addr1.zip << endl;
	cout << "City 2 is: " << addr2 ->get_city() << endl;

	return 0;
}