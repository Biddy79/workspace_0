/*
 * Test.h
 *
 *  Created on: 6 Aug 2019
 *      Author: adam
 */

#ifndef TEST_H_
#define TEST_H_

#include<iostream>

class Test {
public:
	Test();
	Test(int num);
	Test(const Test& other,int num);
	Test& operator=(const Test&);

	friend std::ostream& operator<<(std::ostream &out, const Test& test);

	virtual ~Test();
};




#endif /* TEST_H_ */
