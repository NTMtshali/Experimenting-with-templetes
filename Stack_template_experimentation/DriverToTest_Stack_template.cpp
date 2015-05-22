#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack<double> doubleStack(5);
	double doubleValue = 1.1;

	while (doubleStack.push(doubleValue))
	{
		cout << doubleValue << ' ';
		++doubleValue;
	}
	cout << "Stack is full. Cannot push " << doubleValue;
	cout << "\nPopping value from doubleStack\n";

	while (doubleStack.pop(doubleValue))
	{
		cout << doubleValue << ' ';
	}
	cout << "Stack is empty. Nothing to pop\n ";
	Stack<int> intStack;
	int intValue = 1;

	while (intStack.push(intValue))
	{
		cout << intValue << ' ';
		++intValue;
	}

	cout << "\nStack is full. Cannot push " << intValue << endl;
	cout << "Popping value from intStack\n";

	while (intStack.pop(intValue))
	{
		cout << intValue << ' ';
	}

	cout << "\nStack is empty. Nothing to pop" << endl;
}