/*
 * Test.cpp
 *
 *  Created on: 19 Aug 2019
 *      Author: adam
 */

#include "Test.h"
#include <memory.h>

Test::Test() {
	m_pBuffer = new int[SIZE]{};
}

Test::Test(const Test& other){
	m_pBuffer = new int[SIZE]{};
	memcpy(m_pBuffer, other.m_pBuffer, SIZE*sizeof(int));
}

Test& Test::operator=(const Test& rhs){
	 m_pBuffer = new int[SIZE]{};
	 memcpy(m_pBuffer, rhs.m_pBuffer, SIZE*sizeof(int));
	 return *this;
}


std::ostream& operator<<(std::ostream& out, Test& test){
	out << "Hello from Test class";
	return out;
}

Test::~Test() {
	 delete [] m_pBuffer;
}

