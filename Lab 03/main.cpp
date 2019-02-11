#include "dlinked.cpp"
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
   cout << "The double linked list is: ";
   node1.display(); 
   cout << endl << "The double linked list backwards is: ";
   node1.display_back();
   return 0; 
}