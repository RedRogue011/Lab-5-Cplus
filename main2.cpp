// main2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
	string input = "";
	while (true) {

		getline(cin, input);
		
		if (input == "exit") {


			return 0;

		}
		else {

			cout << "hello world" << endl; 

		}

	}



	


}

