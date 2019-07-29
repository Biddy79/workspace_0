/*
 * Machine.cpp
 *
 *  Created on: 29 Jul 2019
 *      Author: adam
 */

#include "Machine.h"

Machine::Machine() {
	std:: cout << "no paratmitor constructor called..." << std::endl;

}

Machine::Machine(std::string name):name(name){
	std:: cout << "paratmitor constructor called..." << std::endl;
}
