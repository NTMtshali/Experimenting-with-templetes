#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

template <typename T>
void printNumbers(Stack<T> &theStack, T value, const string stackName)
{
	while (theStack.push(value))
	{
		cout << value++ << ' ';
	}

	cout << "\nstack " << stackName << "is full. Cannot push " << value;
	cout << "\nPopping values from " << stackName << "\n";

	while (theStack.pop(value))
	{
		cout << value << ' ';
	}

	cout << "\nStack " << stackName << "is empty. Nothing to pop\n" << endl;
}

int main()
{
	Stack<double> doubleStack(5);
	double doubleValue = 1.1;

	Stack<int> intStack;
	int intValue = 1;

	printNumbers(doubleStack, doubleValue, "doubleStack");
	printNumbers(intStack, intValue, "intStack");

}