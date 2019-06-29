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

	   // textring.add({"one", "two", "three"});

		textring.add("One");
		textring.add("Two");
		textring.add("Three");

	    for(int i=0; i<textring.size(); i++){
	    	cout << textring.get(i) << endl;
	    }

	    cout << "=====================" << endl;

	    cout << "using iterator class " << endl;

	    for(ring<string>::iterator it=textring.begin(); it!=textring.end();it++){
	    	cout << *it << endl;
	    }

	    cout << "=====================" << endl;

	    cout << "using c++11 " << endl;

	    for(auto text: textring){
	    	cout << text << endl;
	    }

	    //creating an iterator object on the fly!!!!!!!!!!!!!!
	    cout << "=====================" << endl;
	    ring<string>::iterator it(textring,1);

	    cout << *it << endl;

	return 0;
}
