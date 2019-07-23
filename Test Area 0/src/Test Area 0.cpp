//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Machine.h"
#include "Car.h"

using namespace std;

int main() {

	Machine m1("0");
	m1.print();

	cout << "============================== \n" << endl;

	Car c1("B.M.W", "1");
	c1.print();

	cout << "============================== \n" << endl;

	Machine m2("2");
	m2.print();

	cout << "============================== \n" << endl;

	m2 = m1;
	m2.print();

	cout << "============================== \n" << endl;

	Machine m3(c1);
	m3.print();






	return 0;
}
