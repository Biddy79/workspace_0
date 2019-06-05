/*
 * ring.h
 *
 *  Created on: 5 Jun 2019
 *      Author: adam
 */

#ifndef RING_H_
#define RING_H_

template<class T>
class ring{
private:
	T* m_values;
    int	m_size;
    int m_pos;


private:
	ring(int size):m_values(nullptr), m_size(size), m_pos(0){
		 m_values  = new T[size];
	}

   ~ring(){
	   delete [] m_values;
   }

};



#endif /* RING_H_ */
