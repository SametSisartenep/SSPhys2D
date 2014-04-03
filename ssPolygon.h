#ifndef SSPOLYGON_H
#define SSPOLYGON_H

#include "ssVec2D.h"

class ssPolygon
{
	public:
		ssPolygon();
		virtual ~ssPolygon();

		ssVec2D vertex_A;
		ssVec2D vertex_B;
		ssVec2D vertex_C;
		double area;
		double perimeter;
	//protected:
	//private:
}

#endif //SSPOLYGON_H
