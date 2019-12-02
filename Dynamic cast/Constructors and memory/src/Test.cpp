/*
 * Test.cpp
 *
 *  Created on: 11 Aug 2019
 *      Author: adam
 */

#include "Test.h"
#include <memory.h> // needed if using memset() and memcpy()


Test::Test() {
	std::cout << "Constructor" << std::endl;
	m_pBuffer = new int[SIZE]{};
	//memset(m_pBuffer, 0, sizeof(int)*SIZE);
	//old way of setting all bites to 0 using memset
}

Test::Test(int i){
	std::cout << "Paramitorized Constructor" << std::endl;
	m_pBuffer = new int[SIZE]{};
	for(int i=0; i<SIZE; i++){
		m_pBuffer[i] = 7*i;
	}
}

Test::Test(const Test& other){
	std::cout << "Copy Constructor" << std::endl;
	m_pBuffer = new int[SIZE]{};

	//memcpy!! used to copy memory from m_pbuffer to other.m_pBuffer
	memcpy(m_pBuffer, other.m_pBuffer, SIZE*sizeof(int));
}

Test& Test::operator=(const Test& rhs){
	std::cout << "Assinment operator" << std::endl;

	m_pBuffer = new int[SIZE]{};
	memcpy(m_pBuffer, rhs.m_pBuffer, SIZE*sizeof(int));

	return *this;
}

std::ostream& operator<<(std::ostream& out, const Test& test){
	out << "Hello from Test";
	return out;
}

Test::~Test() {
	std::cout << "Destructor" << std::endl;
	delete [] m_pBuffer;
}

