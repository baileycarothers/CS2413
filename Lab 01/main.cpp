#include "Adder.cpp"
int main()
{
	//For our first Adder class, we initiate it with no variables
	//Which defaults it to 2 and 2
	Adder adder1; //Declaring obj1 of class Adder
	adder1.printNums(); //Print the numbers
	//Time to perform all operations to the first adder
	adder1.add();
	adder1.subtract();
	adder1.multiply();
	adder1.divide();
	adder1.get(1); //Return the number in the first slot
	adder1.set(1,9); //Set the number in the first slot to 9
	adder1.printNums(); //Print out our numbers again to verify the change
	//Declare a second adder initialized to 6 and 9
	Adder adder2(6,9);
	adder2.printNums(); //Print nums back out to check for correct initialization
	return 0;
}