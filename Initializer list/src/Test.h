/*
 * Test.h
 *
 *  Created on: 26 Jun 2019
 *      Author: adam
 */

#ifndef TEST_H_
#define TEST_H_

#include <iostream>
#include <initializer_list>

//using namespace std;

class Test {
public:
	Test();

	Test(std::initializer_list<std::string> texts);

	void print(std::initializer_list<int> number);

};

#endif /* TEST_H_ */
