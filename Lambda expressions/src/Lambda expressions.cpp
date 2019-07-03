//============================================================================
// Name        : Lambda.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//function that takes a function and returns void with no peramitiors
//or in this case lambda expression
void test(void (*pFunc)() ){
	pFunc();
}


//function that takes a function and returns void with a string peramitior

void testGreet(void (*greet)(string name) ){
	cout << "hello " << flush;
	greet("Adam ");

}


int main() {

	////////////////basic ladbda expression/////////////////////////

		//lambda expression set equal to auto func
		auto func = [](){cout << "Hello" << endl;};
		//func called
		func();
		//test fuction called which takes a lambda expretion func
		test(func);
		//passing lambda expression directly into test function
		test([](){cout << "Hello again" << endl;});

  //////////////////////lambda expressions with paramitors //////////////////////


		//this lambda takes a string peramitor
		auto pGreet = [](string name){cout << "hello " << name << endl;};
		//lanbda's can just be called like a function
		pGreet("Adam");
		//testGreet function called which takes lanbda expression pGreet
		testGreet(pGreet);


 //////////////////////lambda expressions with return types //////////////////////


	return 0;
}
