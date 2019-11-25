//============================================================================
// Name        : A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "FractalCreator.h"
#include "RGB.h"

using namespace std;
using namespace caveofprogramming;

int main() {



	/*RGB rgb1(4, 5, 6);
	RGB rgb2(1, 2, 3);

	RGB rgb3 = rgb1 - rgb2;

	cout << rgb3.m_r << ", " << rgb3.m_g << ", " << rgb3.m_b << endl;

	operator-(rgb1, rgb2);*/

	FractalCreator fractalCreator(800, 600);

	fractalCreator.run("test.bmp");

	cout << "finished." << endl;

	return 0;
}
