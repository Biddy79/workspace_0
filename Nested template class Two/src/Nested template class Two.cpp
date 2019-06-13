//============================================================================
// Name        : Nested.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"

using namespace std;

int main() {


		cout << "=====================" << endl;

	    ring<string> textring(3);

		textring.add("One");
		textring.add("Two");
		textring.add("Three");


	    for(int i=0; i<textring.size(); i++){
	    	cout << textring.get(i) << endl;
	    }

	    cout << "=====================" << endl;

	    ring<string>::iterator it = textring.begin();

	    cout << "iterator class begin " << *it << endl;




	    /*for(ring<string>::iterator it=textring.begin(); it!=textring.end; it++){
	    	cout << *it << endl;
	    }*/



	return 0;
}
