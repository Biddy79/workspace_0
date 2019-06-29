/*
 * ring.h
 *
 *  Created on: 10 Jun 2019
 *      Author: adam
 */

#ifndef RING_H_
#define RING_H_

#include <initializer_list>

template<class T>
class ring{
private:
	T* m_values;
    int	m_size;
    int m_pos;


public:

    class iterator;

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

	T& get(int pos){
		return m_values[pos];
	}

	// iterator functions

	iterator begin(){
			return iterator(*this, 0);
		}

	iterator end(){
		return iterator(*this, m_size);
	}


};

template<class T>
class ring<T>::iterator{
private:
	ring& m_ring;
	int m_pos;

public:
	iterator(ring& ring_ref, int pos):m_ring(ring_ref),m_pos(pos){

	}

	bool operator!=(const iterator &other) const {
			return !(this->m_pos == other.m_pos);
		}

	bool operator==(const iterator& other) const{
		return (m_pos == other.m_pos);
	}

	iterator& operator++(){
		m_pos++;
		return *this;
	}

	iterator& operator++(int){
		iterator& old = *this;
		++m_pos;
		//++(*this);

		return old;
	}

	T& operator*(){
		return m_ring.get(m_pos);
	}



};




#endif /* RING_H_ */
