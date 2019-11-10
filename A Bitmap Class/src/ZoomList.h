/*
 * ZoomList.h
 *
 *  Created on: 8 Nov 2019
 *      Author: adam
 */

#ifndef ZOOMLIST_H_
#define ZOOMLIST_H_

#include "Zoom.h"
#include <vector>
#include <utility>

namespace caveofprogramming {


class ZoomList {
private:
	int m_width{0};
	int m_height{0};
	std::vector<Zoom> zooms;

public:
	ZoomList(int width, int height);
	void add(const Zoom &zoom);
	std::pair<double, double> doZoom(int x, int y);


};

} /* namespace caveofprogramming */

#endif /* ZOOMLIST_H_ */
