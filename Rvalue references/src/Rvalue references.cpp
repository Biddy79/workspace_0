//============================================================================
// Name        : Rvalue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
public:
	Test(){
		cout << "Test constructor" << endl;
	}

	friend ostream& operator<<(ostream& out,const Test& test);

};

ostream& operator<<(ostream& out,const Test& test){
		out << "Hello from test";
		return out;
	}

Test getTest(){
	return Test();
}

int main() {

	//Lvalues are anthing you can take the address of
	int value = 7;
	//value is and Lvalue as we can set a pointer to its address
	int  *pValue1 = &value;
	cout << *pValue1 << endl;

	//7 is an Rvalue as you cannot set a pointer to its address
	//int *pVlaue2 = &7;

	Test t1;
	//t1 is a Lvalue and we can set a pointer to its address
	Test *pT1 = &t1;
	cout << *pT1 << endl;

	Test t2 = getTest();
	cout << t2 << endl;
	/*cannot set a pointer to address of getTest() as it reutuns a
	temporary value this makes it an Rvalue

	Test *pT2 = &getTest();     */

	/*can set a pointer to address of value and incerment its value with ++
	this will work as the prefix increment operator it will incerment the
	value and then set the pointer to its address*/
	int *pValue3 = &++value;
	cout << *pValue3 << endl;

	/*this is invalid as pointer is set to point at value but then the value
	is incremented and thefore temporary using the postfix incerment operator

	int *pValue4 = &value++;    */


	//as before you can only take the address of Lvalues and not Rvlaues

	//this will not work
	//int *pValue5 = (&value) + 3;



	return 0;
}
