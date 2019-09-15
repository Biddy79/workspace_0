//============================================================================
// Name        : Shared.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>

using namespace std;

class Test{
private:
int num;

public:
	Test():num(0){
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

	/*shared_ptr is diffrent from unique_ptr in the way that all
	 * pointer are destroyed together when going out of scope
	 * below pTest2 is set to point at pTest1 and is not destroyed
	 * untill leaving main {} even though when have declared new scope
	 * boundaries */

int main() {


	shared_ptr<Test> pTest2(nullptr);


	{//new scope boudaries declared

	shared_ptr<Test> pTest1 = make_shared<Test>();

	pTest2 = pTest1;

	}

	cout<< "finished" << endl;

	return 0;
}
