//============================================================================
// Name        : Perfect.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{


};

template<typename T>
void call(T &&arg){
	//adding satatic_cast<T> will make sure check calls the right version of check!
	//forward<T> is short hand in this case for static_cast<T>
	check(forward<T>(arg));
}

//
void check(Test& test){
	cout << "Lvalue" << endl;
}

void check(Test&& test){
	cout << "Rvalue" << endl;
}

int main() {

	//test is Lvalue &test
	Test test;
	call(test);

	//Test() is Rvalue &&Test()
	call(Test());




	return 0;
}
