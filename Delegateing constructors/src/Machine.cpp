/*
 * Machine.cpp
 *
 *  Created on: 29 Jul 2019
 *      Author: adam
 */

#include "Machine.h"

// Delegated Machine constructor to call Machine constructor that takes
// a string and int pramitor
Machine::Machine(): Machine("Printer ", 1) {
	std::cout << "Machine no paratmitor constructor called. " << std::endl;
	std::cout << "Name " << name << "id " << id << std::endl;

}

Machine::Machine(std::string name) {
	this->name = name;
	std::cout << "Machine with one string "
			  << "paratmitor constructor called..." << std::endl;
}

Machine::Machine(std::string name, int id):name (name),id (id)  {
	std::cout << "Machine contructor with string and in pramitors " << std::endl;
}
