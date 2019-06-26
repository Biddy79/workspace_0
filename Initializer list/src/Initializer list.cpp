//============================================================================
// Name        : Initializer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Test.h"
using namespace std;

int main() {

	vector <string> numbers {"one ", "two ", "three ",};
	cout << numbers[2] << endl;

	Test t1({"four ", "five ", "six ", "seven "});

	Test t2;
	t2.print({1,2,3,4,5});


	return 0;
}
