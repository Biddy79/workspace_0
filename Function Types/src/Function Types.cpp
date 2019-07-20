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
	return test.size() == 5;
}

//function template type
void run(function<bool(string&)> check){
	string test = "stars";
	cout << check(test) << endl;
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

	auto lambda = [size](string test) {return test.size() == size;};

	//pasing lambda to count_if function
	int count = count_if(vec.begin(), vec.end(), lambda);
	cout << count << endl;

	//passing function pointer check to count_if function
	count = count_if(vec.begin(), vec.end(), check);
	cout << count << endl;

	count = count_if(vec.begin(), vec.end(), check1);
	cout << count << endl;

	// function template type
	run(lambda);
	run(check);
	run(check1);

	function<int (int, int)> add = [](int one, int two ){return one + two;};
	cout << add(10, 10) << endl;


	return 0;
}
