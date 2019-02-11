#include "dlinked.h"
//Function that allows main to insert numbers into the linked list
void Node::insert(int new_data)
{ 
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
   newnode->numStored  = new_data; 
   newnode->prev = NULL; 
   newnode->next = NULL;     
   if(head !=  NULL)
   {
      temp = head;
      while(temp->next != NULL)
      {
         temp = temp->next;
      }
      temp->next = newnode;
      newnode->prev = tail;
      tail = newnode;
   }
   else
   {
      head = newnode;
      tail = newnode;
   }
} 
//Function to display each member of the linked list back to the user
void Node::display() { 
   struct Node* pointer;
   pointer = head;
   while (pointer != NULL) 
   { 
      cout << pointer->numStored <<" "; 
      pointer = pointer->next; 
   } 
} 
//Function to delete first number of the linked list
void Node::display_back()
{
   struct Node* pointer;
   pointer = tail;
   while (pointer != NULL)
   {
      cout << pointer->numStored << " ";
      pointer = pointer->prev;
   }
}