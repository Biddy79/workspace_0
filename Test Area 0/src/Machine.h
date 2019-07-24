/*
 * Machine.h
 *
 *  Created on: 23 Jul 2019
 *      Author: adam
 */

#ifndef MACHINE_H_
#define MACHINE_H_
#include <iostream>

class Machine {
private:
	std::string id;



public:
	//Constructors
	Machine();
	Machine(std::string id);

	//copy constructor
	Machine(const Machine& rhs);

	//overloaded assinment operator=
	const Machine& operator=(const Machine& rhs);

	//methods
    virtual void print();


    //destructor
   virtual ~Machine();

};

#endif /* MACHINE_H_ */
