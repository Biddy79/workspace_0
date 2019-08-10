/*
 * Test.cpp
 *
 *  Created on: 6 Aug 2019
 *      Author: adam
 */

#include "Test.h"


Test::Test(){
	std::cout << "Constructor" << std::endl;
}

Test::Test(int num) {
	std::cout << "Paramitor Constructor" << std::endl;

}

Test::Test(const Test& other, int num){
	std::cout << "Copy Constructor" << std::endl;
}

Test& Test::operator=(const Test& rhs){
	 std::cout << "Assinment operator" << std::endl;
	    return *this;
}

Test::~Test() {
	std::cout << "Destructor" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Test& test){
	out << "Hello from Test";
	return out;
}
