//============================================================================
// Name        : Bind.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <functional>

using namespace std;

using namespace placeholders;

class Test{
public:
int add(int a, int b, int c){
	cout << a << ", " << b << ", " << c << endl;
	return a + b + c;
}

};
void run(function<int(int,int)> func){
	cout << func(10, 5) << endl;
}


int main() {

	Test test;

	auto calculate = bind(&Test::add, test, _2, 100, _1);

	cout << calculate(20, 50, 30) << endl;

    run(calculate);

	return 0;
}
