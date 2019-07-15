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

///////////passing class Test variabels with this//////////////////
class Test{
private:
	int one {1};
	int two {2};

public:
	void run(){
		////local variabels//////
		int three {3};
		int four {4};
		//////crated lambda inside of run function this as acsees to priavte variabels/////
		auto pTest = [this, three, four](){
			///by default one and two are passed by refrence and therfor can be changed
			one = 400;
			two = 300;
			//////can not change three and for as they are passed by value///
			//////three = 1000; four = 600; will not work !!!!
			//////to make that work you would have to pass by refrence using &
			/////[&, this]///////
				cout << one << endl;
				cout << two << endl;
				cout << three << endl;
				cout << four << endl;

			};
		////running labda here!!! /////
		 pTest();
	}


};

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

//////////////////////////lambda captureing expressions///////////////////////

		//////local variables////////////
		int one {1};
		int two {2};
		int three {3};


///////////////capture onw and two by value/////////////////not captureing three!!!//
///////////////note the () at the end will run the lambda expresion//////////
		[one,two](){cout << one << " " << two << endl;}();

/////////////capture all local variabels by value///////////////////////
		[=](){cout << one << " " << two << " " << three << endl;}();

///////////capture one and two by reference but three by value/////////////
////////// so we can now change one and two as they are pased by reference but not three//
	[&, three](){one = 4; two = 5; cout << one << " " << two << " " << three << endl;}();

///////we can have multiple combinations in the [] of a labda to captuer local veriabels//
/////// now only two is pased by reference and the rest are passed by value/////
	[=, &two](){two = 0; cout << one << " " << two << " " << three << endl;}();

/////////here we have all passed by reference/////////////////////
	[&](){one = 1; two = 2; three = 3; cout << one << " " << two << " " << three << endl;}();

/////////defult capture all local variabels by value//////////////////////
////////so if variabels are just named (like one below) they will be passed by value////
////////and as I have used & the rest will be passed by reference
	[&, one](){two = 10; three = 20; cout << one << " " << two << " " << three << endl;}();

/////////////////passing this to lambda classe above!!!!//////////////////////////
	Test t1;
	t1.run();




	return 0;

}
