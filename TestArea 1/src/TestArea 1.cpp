//============================================================================
// Name        : TestArea.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

int main() {

	int iterations = 3;

	int histogram [5]{0};

	cout << histogram[3] << endl;

	for(int i=0; i<5; i++){
	   histogram[iterations]++;

	}

	cout << histogram[3] << endl;

	return 0;
}
