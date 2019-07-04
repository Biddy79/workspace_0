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

//function that takes a function and returns a value (in this case a double)!
void runDivide(double (*pDivide)(double num1, double num2) ){
	auto sum = pDivide(9, 3);

	cout << sum << endl;

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

		auto pDivide = [](double num1, double num2) -> double {
			if(num2 == 0.0){
				return 0;
			}

			return num1/num2;
		};

		cout << pDivide(10.5, 12.5) << endl;

		runDivide(pDivide);

	return 0;
}
