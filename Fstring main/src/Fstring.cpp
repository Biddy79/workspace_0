/*
 * Fstring.cpp
 *
 *  Created on: 18 Jun 2019
 *      Author: adam
 */

#include "Fstring.h"
#include <iostream>


Fstring::Fstring():strlen(0),strarr(nullptr){

}

Fstring::Fstring(const char* str){
	int index = 0;

	if(str != nullptr){

	   //set length of strarr = to str by creating new array
	   // REMEBER TO DECLEAR HERE OR IT WILL BE OUT OF SCOPE
	   strarr = new char[index];

       //populate strarr with chars from str until nullptr reached
	     while(str[index] != '\0'){


	   //strarr = new char[index];

	   strarr[index] = str[index];

	   //std::cout << strarr[index] << std::endl;
	   //works here why?? big lesson it was declared out of scope

    	index++;

	}


	strlen = index;


	}

	//dose not work here why!!! BIG LESSON IT WAS DECLARED OUT OF SCOPE!!!!!
	//std::cout << strarr[index] << std::endl;

	if(str == 0){
		 strlen = 0;
		 strarr = 0;
	}
}

Fstring::Fstring(const Fstring& rhs){
		*this = rhs;
	}


int Fstring::getStrlen(){
	return strlen;
}



std::ostream& operator<<(std::ostream& os, const Fstring& str){
		 for(int i=0; i<str.strlen; i++){
			 os << str.strarr[i];
		 }
         return os;
}


const Fstring& Fstring::operator=(const Fstring& rhs){

	  strlen = rhs.strlen;
	  strarr = rhs.strarr;

      return *this;
}



Fstring::~Fstring(){
	delete [] strarr;
}
