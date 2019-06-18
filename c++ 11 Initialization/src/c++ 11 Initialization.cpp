//============================================================================
// Name        : c++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	string text [] = {"one ", "two ", "three"};

	cout << text[2] << endl;

	struct C1{
		string text;
		int value;
	};

	//this will only work with public variables like in a struct
	C1 c1{"hello", 10};

	cout << c1.text << endl;

	int value = 40;

	int* pValue ={&value};

	cout << *pValue << endl;





	return 0;
}
