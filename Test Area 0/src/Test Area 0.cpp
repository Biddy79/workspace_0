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

Machine* getMachine(){
	Machine* m6 = new Machine;
	return m6;
}

//passing lambda in to test true or false
bool check(string str){
	  return str == "Ford";

}

int main() {


	Machine m1("0");
	m1.print();

	cout << "============================== \n" << endl;

	Car c1("B.M.W", "1");
	c1.print();

	cout << "============================== \n" << endl;

	//using lambda to set c1 make then output using print
	auto lambda = [&c1](string make){c1.setMake(make); c1.print();
	return make;};

	//pasing lambda to check to test for true or false
	check(lambda("Ford"));

	cout << "============================== \n" << endl;

	Machine m2("2");
	m2.print();

	cout << "============================== \n" << endl;

	m2 = m1;
	m2.print();

	cout << "============================== \n" << endl;

	//m3 set = to m2 using copy constructor // as been set = to m1 se above
	Machine m3(m2);
	m3.print();

	cout << "============================== \n" << endl;

	//using vertual method to set a machine object to a car refreance
	Machine *m4 = &c1;
	cout << "using virtual method " << flush; m4->print();

	cout << "============================== \n" << endl;

	//set a new machine = to car called print method from car
	//using virtual key word
	Machine *m5 = new Car("vw","2");
    m5->print();
	delete m5;

	cout << "============================== \n" << endl;
	//setting Machine pointer to getMachine fuction which creates
	//a new Machine and returnes it
	Machine* newMachine = getMachine();
	cout << "Setting newMachine = to return type of getMachine(): " << endl;
	newMachine->print();
	//make sure to delete here!!! as new key word as been used in getMachine
	//fuction above!!!
	delete newMachine;



	return 0;
}
