//============================================================================
// Name        : Auto.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory> //unique_ptr in memory

using namespace std;

class Test{
private:
int num;

public:
	Test(){
		cout << "created " << endl;
	}

	Test(int num): num(num){
		cout << num << endl;
	}

	void greet(){
		cout << "hello" << endl;
	}

	~Test(){
		cout << "destroyed" << endl;
	}
};

using namespace std;

int main() {

	unique_ptr<Test> pTest(new Test);
	pTest->greet();

	unique_ptr<Test[]> pTestArray(new Test[2]);
	pTestArray[1].greet();

	cout << "finish" << endl;



	return 0;
}//objects of test are automaticly destroyed here
