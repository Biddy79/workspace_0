/*
 * Car.cpp
 *
 *  Created on: 23 Jul 2019
 *      Author: adam
 */

#include "Car.h"
//Constructors
Car::Car() {
	std::cout << "NO PARAMITOR CAR CLASS CONSTRUCTOR RUNNING....." << std::endl;
}

Car::Car(std::string make, std::string id):make(make),id(id) {
	std::cout << "PARAMITOR CAR CLASS CONSTRUCTOR RUNNING....." << std::endl;

}

//Methods
void Car::print(){
	std::cout << "Car make:" << make << " Car id:" << id <<std::endl;
}

void Car::setMake(std::string newMake){
	make = newMake;
}
