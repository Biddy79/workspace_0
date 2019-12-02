/*
 * RGB.cpp
 *
 *  Created on: 25 Nov 2019
 *      Author: adam
 */

#include "RGB.h"

namespace caveofprogramming {

RGB::RGB(double r, double g, double b):m_r(r), m_g(g), m_b(b) {
	// TODO Auto-generated constructor stub

}



RGB operator-(const RGB& first, const RGB& second){
	return  RGB(first.m_r - second.m_r, first.m_g - second.m_g, first.m_b - second.m_b);
}

} /* namespace caveofprogramming */
