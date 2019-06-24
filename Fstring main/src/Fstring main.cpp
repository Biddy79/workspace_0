//============================================================================
// Name        : Fstring.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fstring.h"
using namespace std;

int main() {



	Fstring text = "Hello";

	cout << text << endl;
	cout << text.getStrlen() << endl;

	Fstring text2("Welcome");
	cout << text2 << endl;
	cout << text2.getStrlen() << endl;

	Fstring text3;
	text3 = text2;
	cout << text3 << endl;

	return 0;
}
