//============================================================================
// Name        : Function.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

//using check function as funtion pointer
bool check(string& test){
	return test.size() == 3;
}

class Check{
public:
	//functor overloaded() operator //
	bool operator()(string& test){
		return test.size() == 5;
	}
}
//instantiateing and object of Check class to be used as paramitor in count_if function below
check1;


int main() {


	auto size = 3;

	vector<string> vec {"one", "two", "three"};

	//pasing lambda to count_if function
	int count = count_if(vec.begin(), vec.end(),
			[size](string test){return test.size() == size;});
	cout << count << endl;

	//passing function pointer check to count_if function
	count = count_if(vec.begin(), vec.end(), check);
	cout << count << endl;

	count = count_if(vec.begin(), vec.end(), check1);
	cout << count << endl;



	return 0;
}
