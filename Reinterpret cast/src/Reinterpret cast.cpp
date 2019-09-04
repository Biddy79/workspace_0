//============================================================================
// Name        : Reinterpret.cpp
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

class Brother: public Parent{
public:
	virtual void print(){
			cout << "Brother" << endl;
		}
};

int main() {

	Parent parent;
	Son son;
	Brother brother;

	Parent *pPS = &son;
	pPS->print();

	//Dose not work would need to cast pPS to Brother*
	//Brother *pBP = pPS;

	/*dynamic_cast set to nullptr if cast makes no sense
	Brother *pBP = dynamic_cast<Brother *> (pPS);

	//can then check
	if(pBP == nullptr){
		cout << "invalid" << endl;
	}
	else{
	    cout <<	pBP << endl;
	};*/

	//static_cast will allow this cast in this case and
	//static cast only checks cast when code is compiled
	/*Brother *pBP = static_cast<Brother *> (pPS);
	pBP->print();*/

	//reinterpret_cast will also allow this as there is no checking
	//this can be unsafe. must be sure cast makes sense!!!
	Brother *pBP = reinterpret_cast<Brother *> (pPS);
	pBP->print();


	return 0;
}
