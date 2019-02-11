#include "linked.cpp"
int main() 
{ 
   Node node1;
   node1.insert(1);
   node1.insert(2);
   node1.insert(3);
   node1.insert(4);
   node1.insert(5);
   cout << "The linked list is: ";
   node1.display(); 
   node1.delete_first_num();
   cout << endl << "After deleting the first element we are left with: ";
   node1.display();
   return 0; 
}