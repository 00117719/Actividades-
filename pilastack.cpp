#include <iostream>
#include <stack>
using namespace std;



int main()
{
	stack<float> s;

	s.push(1);	// Insert "A" in the stack
	s.push(25);	// Insert "B" in the stack
	s.push(30);	// Insert "C" in the stack
	s.push(45);
	s.push(50);	// Insert "D" in the stack
	

	// Returns the number of elements present in the stack
	cout << "Stack size is " << s.size() << endl;

	// Prints the top of the stack ("D")
	cout << "Top element is: " << s.top() << endl;

	s.pop();	// removing the top ("D")
	s.pop();	// removing the next top ("C")

	cout << "Stack size is " << s.size() << endl;

	// check if stack is empty
	if (s.empty())
		cout << "Stack is Empty\n";
	else
		cout << "Stack is not Empty\n";

	return 0;
}