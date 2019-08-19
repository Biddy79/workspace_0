/*
 * Test.h
 *
 *  Created on: 19 Aug 2019
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
	Test(const Test& other);
	Test& operator=(const Test& rhs);

	friend std::ostream& operator<<(std::ostream& out, Test& test);




	virtual ~Test();
};

#endif /* TEST_H_ */
