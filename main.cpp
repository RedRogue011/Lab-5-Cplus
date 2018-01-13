// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	char x = 'A';

	while ( true ) {
		cin >> x;

		switch (x)
		{

			case'x':
			case'X':
				return 0;
              
			default:
				cout << "hello world" << endl;
				

		}
		
	}
		
 
}




