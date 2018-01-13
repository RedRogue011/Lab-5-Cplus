#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int rangeX = 0x20; // 32 in dec
	int rangeY = 0x7F; // 127 in dec

	int lineControl = 0;

	for (int i = 0; i < (rangeY - rangeX); i++) // get the difference between the two to make less work
	{
		cout << (char)(rangeX + i) << " "; // turn it into an ascii value

		lineControl++;

		if (lineControl % 30 == 0) // divisible by 30?
		{
			cout << "\r\n";
		}
	}


	cout << endl;


	while (true)
	{

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
			cout << "Hello World!" << endl;
			break;
		default:
			cout << "Invalid input." << endl;
			break;
		}
	}
}
