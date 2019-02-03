#include <string>
using namespace std;

class Address{
	string street;
	string city;
public:
	int *zip;
	//constructor
	Address();
	//Destructor
	~Address();
	string get_street();
	string get_city();
	void set_street(string);
	void set_city(string);
};