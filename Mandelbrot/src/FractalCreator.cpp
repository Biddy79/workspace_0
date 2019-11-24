/*
 * FractalCreator.cpp
 *
 *  Created on: 23 Nov 2019
 *      Author: adam
 */

#include "FractalCreator.h"
#include "Mandelbrot.h"

namespace caveofprogramming {

FractalCreator::FractalCreator(int width, int height):m_width(width),m_height(height),
								m_histogram(new int[Mandelbrot::MAX_ITERATIONS] { 0 }),
								m_fractal(new int[m_width * m_height] { 0 }) {


}

FractalCreator::~FractalCreator() {

}

    void FractalCreator::calculateIterations(){

    };

	void FractalCreator::drawFractal(){

	};

	void FractalCreator::addZoom(const Zoom& zoom){

	};

	void FractalCreator::writeBitmap(string name){

	};


} /* namespace caveofprogramming */
