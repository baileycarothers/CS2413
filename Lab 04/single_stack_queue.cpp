#include "single_stack_queue.h"
void stack_display(stack <int> x) 
{ 
    while (!x.empty()) 
    { 
        cout << '\t' << x.top(); 
        x.pop(); 
    } 
    cout << endl; 
}
void queue_display(queue <int> q)
{
	while (!q.empty())
	{
		cout << q.front() << ' ';
		q.pop();
	}
	cout << endl;
}