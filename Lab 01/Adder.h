/*
Name: Bailey Carothers
Section:



*/

#include <iostream>
#include <string.h>
using namespace std;

class Adder {

//Access Specifier
public:

//Data members
int first;
int second;

Adder()
{
	first=2;
	second=2;
}
void printNums()
{
	cout << "The two numbers are " << first << " and " << second << endl;
}

void newNums()
{
	cout << "Please enter the first number: ";
	cin >> first;
	cout << "Please enter the second number: ";
	cin >> second;
}
/*
int add();

int subtract();

int multiply();

int divide();

int get(char s[] );

void set(char s[],int);
*/
};