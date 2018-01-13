#include "stdafx.h"
#include <iostream>
using namespace std;

bool checkOperator(char t)
{
	switch (t)
	{
	case '+':
	case '-':
	case '/':
	case '*':
		return true;
	default:
		return false;
	}
}

void CalcLoop()
{
	float x = 0;
	float y = 0;
	char myFunction = 'a';

	cout << "Enter first value: ";
	cin >> x;

	cout << "Enter second value: ";
	cin >> y;

	cout << "Function: ";
	cin >> myFunction;

	bool c = checkOperator(myFunction);

	while (true)
	{
		if (c == true)
		{
			break;
		}
		else {
			cout << "Function: ";
			cin >> myFunction;
			c = checkOperator(myFunction);
		}
	}

	float result = 0;

	switch (myFunction)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '/':
		result = x / y;
		break;
	case '*':
		result = x * y;
		break;
	}

	cout << x << " " << myFunction << " " << y << " = " << result << endl;

}

int main()
{

DO_LOOP:
	CalcLoop();

TERMINAL_INPUT:
	cout << "(C)ontinue, or E(x)it?: ";

	char input = 'a';
	cin >> input;

	switch (input)
	{
	case 'x':
	case 'X':
		cout << "Goodbye cruel world!" << endl;
		return 0;
	case 'c':
	case 'C':
		goto DO_LOOP;
	default:
		cout << "Invalid input.";
		goto TERMINAL_INPUT;

	}
}