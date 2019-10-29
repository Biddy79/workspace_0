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

	int iterations = 0;

	int histogram [5] {1, 2, 3, 4, 5};

	for(int i=0; i<5; i++){
		 histogram[iterations]++;
	}

	for(int i=0; i<5; i++){
		cout << "INDEX:" << i << " " << histogram[i] << endl;
	}








	return 0;
}
