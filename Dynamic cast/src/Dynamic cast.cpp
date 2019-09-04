//============================================================================
// Name        : Dynamic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//class needes to be virtual to make polymorphic
class Parent{
public:
	virtual void print(){
		cout << "parent" << endl;
	}

};

class Son: public Parent{
public:
	void print(){
			cout << "son" << endl;
		}

};


int main() {

	Parent parent;
	Son son;

	Parent *pPS = &son;
	/*dynamic cast checks code at run time by return nullptr if invalid
	if *pPS above is set to point at &parent this will then set *pSS
	below to nullptr*/

	//casting *pPS to Son*
	Son *pSS = dynamic_cast<Son *>(pPS);

	//cheking if *pSS is valid
	if(pSS == nullptr){
		cout << "Invalid cast" << endl;
	}
	else{
		cout << pSS << endl;
	}
	return 0;
}
