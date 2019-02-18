#include "single_stack_queue.cpp"
int main () 
{ 
    stack <int> stack1; 
    stack1.push(1); 
    stack1.push(2); 
    stack1.push(3); 
    stack1.push(4); 
    stack1.push(5); 
    cout << "The stack is: "; 
    stack_display(stack1);
    cout << "The size of the stack is: " << stack1.size() << endl; 
    cout << "The number on top of the stack is: " << stack1.top() << endl; 
    queue <int> queue1;
    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    cout << "The queue is: ";
    queue_display(queue1);
    return 0; 
} 