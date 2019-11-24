/*
 * FractalCreator.h
 *
 *  Created on: 23 Nov 2019
 *      Author: adam
 */

#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include <cstdint>
#include <math.h>
#include <memory>
#include "Bitmap.h"
#include "ZoomList.h"
#include "Mandelbrot.h"

using namespace std;

namespace caveofprogramming {

class FractalCreator {
private:
	int m_width;
	int m_height;
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total{0};

public:
	FractalCreator(int width, int height);
	virtual ~FractalCreator();

	void calculateIterations();
	void calculateTotalIteration();
	void drawFractal();
	void addZoom(const Zoom& zoom);
	void writeBitmap(string name);
};

} /* namespace caveofprogramming */

#endif /* FRACTALCREATOR_H_ */
