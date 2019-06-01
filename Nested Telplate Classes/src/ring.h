/*
 * ring.h
 *
 *  Created on: 19 May 2019
 *      Author: adam
 */

#ifndef RING_H_
#define RING_H_

#include<iostream>

using namespace std;

template<class T>
class ring {
private:
	T *m_value;
	int m_size;
	int m_pos;

public:
	class iterator;

public:

	ring(int size):m_value(NULL), m_size(size), m_pos(0) {
		m_value = new T[size];
	}

	void add(T obj) {

			m_value[m_pos++] = obj;

	    	if (m_pos == m_size) {
			 m_pos = 0;
		}

	}

	int size() {
		return m_size;
	}

	T &get(int pos) {
		return m_value[pos];
	}

	iterator begin(){
		return iterator(0, *this);
	}

	iterator end(){
			return iterator(m_size, *this);
		}



	~ring() {
		delete[] m_value;
	}

};

template<class T>
class ring<T>::iterator {
private:
	int &m_pos;
	ring &aRing;

public:
	void print() {
		cout << "Hello " << T() << endl;
	};



	iterator(int pos, ring &ring_Ref):m_pos(pos), aRing(ring_Ref){

	}


	iterator &operator++(int){

		//ERROR ERROR!!!!!!!!!!!!!!!


		}

	iterator &operator++(){
			 m_pos++;
			 return *this;
		}

	bool operator!=(const iterator &other) const{
		return *this != other;
	}

	bool operator==(const iterator &other) const {
			return m_pos == other.m_pos;
		}


	T& operator*(){
		return aRing.get(m_pos);

	}

};

#endif /* RING_H_*/

