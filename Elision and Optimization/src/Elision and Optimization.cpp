//============================================================================
// Name        : Elision.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Test.h"

using namespace std;

Test getTest(){
	return Test();
}

int main() {


	Test t1 = getTest();
	cout << t1 << endl;

	cout << "=================" << endl;

	vector<Test> vec{Test()};
	vector<Test>::iterator it = vec.begin();
	cout << *it << endl;





	return 0;
}
