/*
 * RGB.h
 *
 *  Created on: 25 Nov 2019
 *      Author: adam
 */

#ifndef RGB_H_
#define RGB_H_

namespace caveofprogramming {

struct RGB {

	double m_r;
	double m_g;
	double m_b;

	RGB(double r, double g, double b);
};

RGB operator-(const RGB& first, const RGB& second);

} /* namespace caveofprogramming */

#endif /* RGB_H_ */
