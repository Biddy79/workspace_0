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

int main() {


	auto size = 3;

	vector<string> vec {"one", "two", "three"};

	int count = count_if(vec.begin(), vec.end(),
			[size](string test){return test.size() == size;});

	cout << count << endl;

	return 0;
}
