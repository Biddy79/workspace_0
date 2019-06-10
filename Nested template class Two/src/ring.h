/*
 * ring.h
 *
 *  Created on: 10 Jun 2019
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


public:
	ring(int size):m_values(nullptr), m_size(size), m_pos(0){
		 m_values  = new T[size];
	}

	~ring(){
		   delete [] m_values;
	   }


	void add(T value){
			m_values[m_pos] = value;

			m_pos++;

			if(m_pos == m_size){
				m_pos = 0;
			}
	}

	int size(){
		return m_size;
	}

	T& get(int i){
		return m_values[i];
	}

};






#endif /* RING_H_ */
