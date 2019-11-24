//============================================================================
// Name        : A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>





#include "FractalCreator.h"

using namespace std;
using namespace caveofprogramming;

int main() {

	int height = 600;

	FractalCreator fractalCreator(800, 600);


	fractalCreator.addZoom(Zoom(307, height - 186, 0.1));
	fractalCreator.addZoom(Zoom(326, height - 402, 0.1));
	fractalCreator.calculateIterations();
	fractalCreator.calculateTotalIteration();
	fractalCreator.drawFractal();
	fractalCreator.writeBitmap("test.bmp");

	cout << "finished." << endl;

	return 0;
}
