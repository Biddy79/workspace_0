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
#include <vector>
#include "Bitmap.h"
#include "ZoomList.h"
#include "Mandelbrot.h"
#include "RGB.h"

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

	vector <int> m_ranges;
	vector <RGB> m_colors;
	vector <int> m_rangeTotals;

	bool m_bGotFirstRange{false};

private:
	void calculateIterations();
	void calculateTotalIteration();
	void calculateRnageTotals();
	void drawFractal();
	void writeBitmap(string name);




public:
	FractalCreator(int width, int height);
	void addRange(double rangeEnd, const RGB &rgb);
	void addZoom(const Zoom& zoom);
	virtual ~FractalCreator();
	void run(string name);

	int getRange(int iterations) const;


};

} /* namespace caveofprogramming */

#endif /* FRACTALCREATOR_H_ */
