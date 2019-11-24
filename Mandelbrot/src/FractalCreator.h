/*
 * FractalCreator.h
 *
 *  Created on: 23 Nov 2019
 *      Author: adam
 */

#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include <memory>
#include "Zoom.h"

using namespace std;

namespace caveofprogramming {

class FractalCreator {
private:
	int m_width;
	int m_height;
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;

public:
	FractalCreator(int width, int height);
	virtual ~FractalCreator();

	void calculateIterations();
	void drawFractal();
	void addZoom(const Zoom& zoom);
	void writeBitmap(string name);
};

} /* namespace caveofprogramming */

#endif /* FRACTALCREATOR_H_ */
