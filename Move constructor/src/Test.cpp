/*
 * Test.cpp
 *
 *  Created on: 19 Aug 2019
 *      Author: adam
 */

#include "Test.h"
#include <memory.h>

Test::Test() {
	std::cout << "Constructor" << std::endl;
	m_pBuffer = new int[SIZE]{};
}

Test::Test(const Test& other){
	std::cout << "copy constructor" << std::endl;
	m_pBuffer = new int[SIZE]{};
	memcpy(m_pBuffer, other.m_pBuffer, SIZE*sizeof(int));
}

Test& Test::operator=(const Test& rhs){
	 std::cout << "assinment operator" << std::endl;
	 m_pBuffer = new int[SIZE]{};
	 memcpy(m_pBuffer, rhs.m_pBuffer, SIZE*sizeof(int));
	 return *this;
}

Test::Test(Test &&other){
	 std::cout << "Move constructor" << std::endl;
	 m_pBuffer = other.m_pBuffer;
	 //need to set to nullptr so that m_pBuffer is not deleted
	 other.m_pBuffer = nullptr;

}

Test& Test::operator=(Test&& rhs){
	std::cout << "Move assignment operator" << std::endl;
	delete [] m_pBuffer;
	m_pBuffer = rhs.m_pBuffer;
	rhs.m_pBuffer = nullptr;
	return *this;
}

std::ostream& operator<<(std::ostream& out, Test& test){
	out << "Hello from Test class";
	return out;
}

Test::~Test() {
	std::cout << "Destructor " << std::endl;
	 delete [] m_pBuffer;
}

