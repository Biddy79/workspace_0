//============================================================================
// Name        : Object.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
private:
	int id{10};
	string name{"Bob"};


public:
	//standard constructor
	Test(){};

	//initialised constructor sets value to id but dose not set value for name
	Test(int id):id(id){};

	//copy constructor
	Test(const Test&  other){
		this->id = other.id; this->name = other.name;

	};

	//overloaded operator=
	Test& operator=(const Test& rhs){
		this->id = rhs.id;
		this->name = rhs.name;

		return *this;
	};

	//prints out id and name
	void print(){
		cout << id << " " << name << endl;
	};

};

int main() {

	//uses standard constructor
	Test t1;
	t1.print();

	//uses initialised constructor setting id to 20
	Test t2(20);
	t2.print();

	//uses copy constructor to set t3 = t1
	Test t3(t1);
	t3.print();

	//uses overloaded operator= to set t4 = t2
    Test t4 = t2;   //or t4 = t2;
    t4.print();




	return 0;
}
