/*
 * Test.cpp
 *
 *  Created on: 26 Jun 2019
 *      Author: adam
 */

#include "Test.h"

Test::Test(){};

Test::Test(std::initializer_list<std::string> texts) {
	for(auto value: texts){
		std::cout << value << std::flush;
	}
	        std::cout << std::endl;
}

void Test::print(std::initializer_list<int> number){
	for(auto values: number){
		std::cout << values << std::flush;
	}
}

