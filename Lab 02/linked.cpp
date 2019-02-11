#include "linked.h"
//Function that allows main to insert numbers into the linked list
void Node::insert(int new_data) { 
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   if(head != NULL)
   {
      temp = head;
      while(temp->next != NULL)
      {
         temp = temp->next;
      }
      temp->next = new_node;
   }
   else
   {
   head = new_node; 
   }
} 
//Function to display each member of the linked list back to the user
void Node::display() { 
   struct Node* pointer;
   pointer = head;
   while (pointer != NULL) { 
      cout<< pointer->numStored <<" "; 
      pointer = pointer->next; 
   } 
} 
//Function to delete first number of the linked list
void Node::delete_first_num()
{
   Node *temp=new Node;
   temp=head;
   head=head->next;
   delete temp;
}