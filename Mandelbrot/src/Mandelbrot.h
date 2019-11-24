/*
 * Mandelbrot.h
 *
 *  Created on: 17 Oct 2019
 *      Author: adam
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace caveofprogramming {

class Mandelbrot {
public:
	static const int MAX_ITERATIONS = 1000;

public:
	Mandelbrot();

	static int getIterations(double x, double y);

	virtual ~Mandelbrot();
};

} /* namespace caveofprogramming */

#endif /* MANDELBROT_H_ */
