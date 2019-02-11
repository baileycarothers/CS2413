/*
Name: Bailey Carothers
Section: 501
Email: Bailey.carothers@ttu.edu
Description: The purpose of this program is to demonstrate proficiency with linked lists.
			 The Linked class is used to create a singly linked list then delete the first element
*/
#include <iostream>
using namespace std;
//Declare class called node
class Node { 
public:
	//Initialize for data storage
	int numStored; 
	struct Node *next;
	//Function prototypes
	void insert(int newNum);
	void display();
	void delete_first();
}; 
struct Node* head = NULL;