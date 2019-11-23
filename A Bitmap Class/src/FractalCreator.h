/*
 * FractalCreator.h
 *
 *  Created on: 23 Nov 2019
 *      Author: adam
 */

#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include "Zoom.h"

using namespace std;

namespace caveofprogramming {

class FractalCreator {
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
