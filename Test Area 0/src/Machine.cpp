/*
 * Machine.cpp
 *
 *  Created on: 23 Jul 2019
 *      Author: adam
 */

#include "Machine.h"


//Constructors
Machine::Machine() {
	std::cout << "NO PRAMITOR CONSTRUCTOR FOR MACHINE CLASS RUNNING...." << std::endl;

}

Machine::Machine(std::string id):id(id){
	std::cout << "PRAMITOR CONSTRUCTOR FOR MACHINE CLASS RUNNING...." << std::endl;
}


//copy constructor
Machine::Machine(const Machine& rhs){
	std::cout << "MACHINE COPY CONSTRUCTOR RUNNING...." << std::endl;
	this->id = rhs.id;

}

//overloaded assinment operator=
const Machine& Machine::operator=(const Machine& rhs){
	std::cout << "MACHINE ASSINMENT OPERATOR RUNNING...." << std::endl;
	this->id = rhs.id;
	return *this;
}

//Methods
void Machine::print(){
  std::cout << "Machine id:" << id << std::endl;
}

//destructor
Machine::~Machine(){
	std::cout << "Destructor running " << std::endl;
}
