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

	Test(int i){
		cout << "Pramitorized constructor" << endl;
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

//check function which takes a lValue reference
void check(const Test &t){
	cout << "getTest() lValue function "<< endl;
}

//check function which takes a RValue reference
void check(Test &&t){
	cout << "getTest() RValue function "<< endl;
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

	Test *pT2 = getTest();     */

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


	///////////Refrence Rvalues and Lvalues//////////////////////////////

	//&rTest and t1 are Lvalue and therfor can be binded
	Test &rTest = t1;
	cout << rTest << endl;

	//dose not work!! &rTets2 is Lvalue but getTest is Rvalue
	//Test &rTest2 = getTest();

	//The exception to this is to make Test const
	//The return value life of getTest() will continue
	//untill &rTets2 is destroyed
	const Test &rTest2 = getTest();
	cout << rTest2 << endl;

	//Using const in the copy constructor allows us to do the following
	//the copy constructor uses a const Lvalue refreance and Test(1) is Rvalue as it as no name
	//and t3 is a Lvalue
	//side note had to use pramitorized constructor or copiler see t3(Test(1)); as a function
	Test t3(Test(1));
	cout << t3 << endl;

	//&& makes t4 an rValue refrence we can now bind t4 to getTest()
	Test &&t4 = getTest();
	cout << t4 << endl;

	//OR
	Test &&t5 = Test();
	cout << t5 << endl;


	cout << "======================" << endl;
	check(t5);
	cout << "======================" << endl;
	check(t3);
	check(Test());
	check(getTest());









	return 0;
}
