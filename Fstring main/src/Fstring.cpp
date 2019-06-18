/*
 * Fstring.cpp
 *
 *  Created on: 18 Jun 2019
 *      Author: adam
 */

#include "Fstring.h"


Fstring::Fstring():strlen(0),strarr(nullptr),c_strarr(nullptr){

}

Fstring::Fstring(const char* str){
	c_strarr = 0;
	int index = 0;

	if(str != 0){

//set length of strarr = to str and populate strarr until \0 reached

	while(str[index] != '\0'){

		index++;

		strlen = index;
		strarr = new char[strlen];

		strarr[index] = str[index];


	}


	}

	if(str == 0){
		 strlen = 0;
		 strarr = 0;
		 c_strarr = 0;

	}


}

Fstring::Fstring(const char& fstr){
	return this;
}


int Fstring::getStrlen(){
	return strlen;
}

/*
needs word!!!
std::ostream& operator<<(std::ostream& os, Fstring& str){
		 for(int i=0; i<str.strlen; i++){
			 os << str.strarr[i];
		 }
         return os;
}*/






Fstring::~Fstring(){
	delete [] strarr;
}
