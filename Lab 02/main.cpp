#include "linked.cpp"
int main() 
{ 
   //Declare new node called node1
   Node node1;
   //Insert numbers into our linked list
   node1.insert(1);
   node1.insert(2);
   node1.insert(3);
   node1.insert(4);
   node1.insert(5);
   //Output linked list to the user
   cout << "The linked list is: ";
   node1.display(); 
   //Delete first num of linked list then output again
   node1.delete_first_num();
   cout << endl << "After deleting the first element we are left with: ";
   node1.display();
   return 0; 
}