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

	//no = needed in c++ 11
	string text [] {"one ", "two ", "three"};

	cout << text[2] << endl;

	struct C1{
		string text;
		int value;
	};

	//this will only work with public variables in a class. Struct variables are public by default!!!
	C1 c1{"hello", 10};

	cout << c1.text << " " << c1.value << endl;


	//you can also initialise struct variables using the syntax below adding multiple objects
	struct{
		string text2;
		int value2;
		} R1{"Struct R1", 500} , R2{"Struct R2", 1000};

		cout << R1.text2 << " " << R1.value2 << endl;
		cout << R2.text2 << " " << R2.value2 << endl;

	//no = needed in c++ 11
	int value{5};
	cout << value << endl;

	//pointers can also be initialised with out the = below will point at NULL
	//nullptr is a new key word in c++11
	int *pSomthing{nullptr};
	cout << pSomthing << endl;

	//or the pointer can be set to point at address like below
	int *pSomthing2{&value};
	cout << *pSomthing2 << endl;

	//new can also be initialised with out =
	int *pNumbers = new int[3]{10,20,30};
	cout << pNumbers[2] << endl;
	delete [] pNumbers;

	//c++11 no longer needs pushback to initialise vector
	vector<string> strings{"five ", "ten ", "fifteen " };
	cout << strings[2] << endl;

	//can also use c++11 auto key word
	for(auto text: strings){
		cout << text << flush;
	}



	return 0;
}
