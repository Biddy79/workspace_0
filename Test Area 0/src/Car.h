/*
 * Car.h
 *
 *  Created on: 23 Jul 2019
 *      Author: adam
 */

#ifndef CAR_H_
#define CAR_H_

#include "Machine.h"

class Car: public Machine {
private:
	std::string make;
	std::string id;

public:
	//Constructors
     Car();
	 Car(std::string id, std::string make);


	//Methods
	virtual void print();

	void setMake(std::string newMake);



};

#endif /* CAR_H_ */
