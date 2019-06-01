//============================================================================
// Name        : Advanced.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	auto words = {"one", "Two", "Three" };

	for(auto word: words){
		cout << word << endl;
	}

	cout << "==========================" << endl;

	const char *texts [] = {"Four", "Five", "Six" };

	for(int i=0; i < sizeof(texts); i++){
		cout << texts[i] << endl;
	}


	vector<int> numbers;

			numbers.push_back(5);
			numbers.push_back(10);
			numbers.push_back(15);

			for(auto number: numbers){
				cout << number << endl;
			}







	return 0;
}
