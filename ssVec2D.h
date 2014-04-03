#ifndef SSVEC2D_H
#define SSVEC2D_H

#include <cmath>
#include "ssPhys2D.h"

class ssVec2D
{
	public:
		ssVec2D();
		ssVec2D(double sx, double sy);
		virtual ~ssVec2D();

		double x;		// x component
		double y;		// y component
		double angle;		// Angle to x's axis
		double magnitude;	// |v| = Vector's magnitude

		void set_X(double sx);
		void set_Y(double sy);
		void set_Angle(double sangle);
		void set_Magnitude(double smagnitude);

		double get_X();
		double get_Y();
		double get_Angle();
		double get_Magnitude();

		void set_Rotation(double sangle);
		void set_Position(double sx, double sy);
		void set_MagnitAngle(double smagnitude, double sangle);

		ssVec2D get_Unit();
		ssVec2D get_Opposite();
		ssVec2D get_Orthogonal();

		ssVec2D be_Unit();
		ssVec2D be_Opposite();
		ssVec2D be_Orthogonal();

		friend double operator* (ssVec2D v, ssVec2D u);
		friend double operator/ (ssVec2D v, ssVec2D u);
		friend ssVec2D operator* (ssVec2D v, double k);
		friend ssVec2D operator/ (ssVec2D v, double k);
		friend ssVec2D operator+ (ssVec2D v, ssVec2D u);
		friend ssVec2D operator- (ssVec2D v, ssVec2D u);
		friend ssVec2D operator+ (ssVec2D v, double k);
		friend ssVec2D operator- (ssVec2D v, double k);

		friend void operator*= (ssVec2D v, double k);
		friend void operator/= (ssVec2D v, double k);
		friend void operator+= (ssVec2D v, ssVec2D u);
		friend void operator-= (ssVec2D v, ssVec2D u);
		friend void operator+= (ssVec2D v, double k);
		friend void operator-= (ssVec2D v, double k);

	//protected:
	//private:
};
#endif //SSVEC2D_H
