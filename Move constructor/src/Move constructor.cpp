//============================================================================
// Name        : Move.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Test.h"
#include <vector>
using namespace std;

Test getTest(){
	return Test();
}

int main() {

	vector<Test> vec;
	vec.push_back(Test());

	cout << "=======================" << endl;

	Test t1;
	t1 = getTest();



	return 0;
}
