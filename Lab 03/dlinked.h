/*
Name: Bailey Carothers
Section: 501
Email: Bailey.carothers@ttu.edu
Description: The purpose of this program is to demonstrate proficiency with doubly linked lists.
			 The Linked class is used to create a doubly linked list then print it backwards.
*/
#include <iostream>
using namespace std;
//Declare class called node
class Node { 
public:
	//Initialize for data storage
	int numStored; 
	//Initialize pointers for usage in functions
	struct Node *next;
	struct Node *prev;
	struct Node *temp;
	struct Node* head = NULL;
	struct Node* tail = NULL;
	//Function prototypes
	void insert(int new_data);
	void display();
	void display_back();
};