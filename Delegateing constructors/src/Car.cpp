/*
 * Car.cpp
 *
 *  Created on: 29 Jul 2019
 *      Author: adam
 */

#include "Car.h"
//Delegating car constructor to call Machine constructor with one string paramitor
Car::Car(): Machine("Car"){
		std::cout << "car no pramitor constructor " << std::endl;
}

