/*
 * Machine.h
 *
 *  Created on: 29 Jul 2019
 *      Author: adam
 */

#ifndef MACHINE_H_
#define MACHINE_H_

#include <iostream>

class Machine {
private:
	int id {0};
	std::string name {"Car"};

public:
	Machine();
	Machine(std::string name);


};

#endif /* MACHINE_H_ */
