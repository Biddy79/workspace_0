//============================================================================
// Name        : A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdint>
#include <math.h>
#include <memory>
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "FractalCreator.h"

using namespace std;
using namespace caveofprogramming;

int main() {

	FractalCreator fractalCreator(800, 600);

	Bitmap bitmap(WIDTH, HEIGHT);

	ZoomList zoomList(WIDTH, HEIGHT);

	zoomList.add(Zoom(WIDTH/2, HEIGHT/2, 4.0/WIDTH));
	zoomList.add(Zoom(307, HEIGHT - 186, 0.1));
	zoomList.add(Zoom(326, HEIGHT - 402, 0.1));


	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {

			pair<double, double> coords = zoomList.doZoom(x, y);

			int iterations = Mandelbrot::getIterations(coords.first, coords.second);

			fractal[y * WIDTH + x] = iterations;

			if (iterations != Mandelbrot::MAX_ITERATIONS) {
				histogram[iterations]++;
			}


		}
	}



	int total = 0;
	for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
		total += histogram[i];
	}



	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {

			uint8_t red = 0;
			uint8_t green = 0;
			uint8_t blue = 0;

			int iterations = fractal[y * WIDTH + x];

			if (iterations != Mandelbrot::MAX_ITERATIONS) {

				double hue = 0.0;

				for (int i = 0; i <= iterations; i++) {
					hue += ((double) histogram[i]) / total;
				}

				green = hue * 255;

			}

			bitmap.setPixel(x, y, red, green, blue);

		}
	}

	cout << endl;

	int count = 0;

	for(int i=0; i <= Mandelbrot::MAX_ITERATIONS; i++){
		cout  <<  histogram[i] << " " << flush;
		count += histogram[i];

	}

	cout << count << WIDTH*HEIGHT << endl;

	cout << endl;

	bitmap.write("test.bmp");

	cout << "finished." << endl;

	return 0;
}
