#include "Adder.h"
//Standard initialization to 2 and 2
Adder::Adder()
{
	first=2;
	second=2;
}
//Allows class initialization to 2 numbers of choice
Adder::Adder(int x, int y)
{
	first = x;
	second = y;
}
//Prints the two numbers within the class to the user
void Adder::printNums()
{
	cout << "The two numbers are " << first << " and " << second << endl;
}
//Unused, allows the user to set both numbers manually
void Adder::newNums()
{
	cout << "Please enter the first number: ";
	cin >> first;
	cout << "Please enter the second number: ";
	cin >> second;
}
//Adds the two numbers within the class
int Adder::add()
{
	cout << first << "+" << second << "=" << first + second << endl;
	return first + second;
}
//Subtracts the two numbers within the class
int Adder::subtract()
{
	cout << first << "-" << second << "=" << first - second << endl;
	return first - second;	
}
//Multiplies the two numbers within the class
int Adder::multiply()
{
	cout << first << "*" << second << "=" << first * second << endl;
	return first * second;	
}
//Divides the two numbers within the class
int Adder::divide()
{
	cout << first << "/" << second << "=" << first / second << endl;
	return first / second;	
}
//Gets the number selected by the function call
int Adder::get(int selection)
{
	if(selection == 1)
	{
		cout << first << endl;
		return first;
	}
	else if(selection == 2)
	{
		cout << second << endl;
		return second;
	}
}
//Changes the number selected by the function call to the second number in the function call
void Adder::set(int selection, int newNum)
{
	if(selection == 1)
		first = newNum;
	else if(selection == 2)
		second = newNum;
}