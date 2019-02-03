/*
Name: Bailey Carothers
Section: 501
Email: Bailey.carothers@ttu.edu
Description: The purpose of this program is to demonstrate proficiency with classes.
			 The Adder class can perform basic math operations and change its members
*/

#include <string>
#include <iostream>
#include <string.h>
using namespace std;

class Adder {

//Access Specifier
public:

//Data members
int first;
int second;

Adder();
Adder(int x, int y);
void printNums();
void newNums(); //Unimplemented, allows user to change both nums at once
int add();
int subtract();
int multiply();
int divide();
int get(int selection);
void set(int selection, int newNum);
};