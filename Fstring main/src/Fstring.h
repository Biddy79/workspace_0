/*
 * Fstring.h
 *
 *  Created on: 18 Jun 2019
 *      Author: adam
 */

#ifndef FSTRING_H_
#define FSTRING_H_

#include <iostream>

class Fstring {
private:
	int strlen;
    char* strarr;
	char* c_strarr;


public:
	//constructors
	Fstring();
	Fstring(const char* str);
	Fstring(const char& fstr);

	//operator overloaded functions


	friend std::ostream& operator<<(std::ostream& os, const Fstring& str);


	int getStrlen();

    //Destructor
	~Fstring();

};

#endif /* FSTRING_H_ */
