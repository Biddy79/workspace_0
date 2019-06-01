//============================================================================
// Name        : Nested.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "ring.h"

using namespace std;

int main() {

	//ring<int>::iterator it;

	//it.print();


	    ring<string> textring(3);

	    textring.add("one");
		textring.add("two");
		textring.add("three");


	for(int i=0; i<textring.size(); i++){
		cout << textring.get(i) << endl;

	}

	cout << endl;

	for(ring<string>::iterator it = textring.begin(); it != textring.end(); it++){
		    cout << *it << endl;
	}

	cout << endl;

	for(string value: textring){
		cout << value << endl;
	}



	return 0;
}
