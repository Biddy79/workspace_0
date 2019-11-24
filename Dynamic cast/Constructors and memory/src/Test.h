/*
 * Test.h
 *
 *  Created on: 11 Aug 2019
 *      Author: adam
 */

#ifndef TEST_H_
#define TEST_H_

#include<iostream>

class Test {
private:
	int* m_pBuffer;
	static const int SIZE{100};

public:
	Test();
	Test(int i);
	Test(const Test& other);
	Test& operator=(const Test& rhs);

	friend std::ostream& operator<<(std::ostream& out, const Test& test);

	virtual ~Test();
};

#endif /* TEST_H_ */
