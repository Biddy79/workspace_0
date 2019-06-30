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

	//default and delete key words are used to show which constructors will
	//compile

	//standard constructor
	Test() = default;

	//copy constructor
	Test(const Test& other) = delete;

	//overloaded operator=
	Test& operator=(const Test& rhs) = default;

	//prints out id and name
	void print(){
		cout << id << " " << name << endl;
	};

};

int main() {

	//uses standard constructor
	Test t1;
	t1.print();


	/*uses copy constructor to set t3 = t1 but this no longer compiles has
	 * the delete key word as been used above!!
	Test t2(t1);
	t2.print();
    */

	//uses overloaded operator = to set t4 = t1 this compile as the default key
	//word as been used above!!
	Test t4;
	t4 = t1;
	t4.print();






	return 0;
}
