//============================================================================
// Name        : Static.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Parent{
public:
	virtual void print(){
		cout << "Parent" << endl;
	}
};

class Son: public Parent{
public:
	virtual void print(){
		cout << "Son" << endl;
	}
};

void function(Parent &p){
	cout << "Lvalue ref function" << endl;
	p.print();
}

void function(Parent &&p){
	cout << "Rvalue ref function" << endl;
	p.print();
}

int main() {

	float value{23.5};
	//c style cast
	cout << (int)value << endl;

	cout << "======================" << endl;

	//static cast only checked at compile time!!!!

	Parent parent;

	//Rvalue ref &&p1. parent cast to Rvalue. This then casts &&p1 to Lvalue
	Parent &&p1 = static_cast<Parent &&>(parent);
	cout << "p1" << endl;
	//p1 now uses Lvalue function after casting
	function(p1);




	return 0;
}
