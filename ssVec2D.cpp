#include "ssVec2D.h"

/*
sSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSs
sS
sS	- x and y axis in SI Units based on meter(m) i.e: m, m/s, m/s², N, etc.
sS 	- angle in radians
sS 	- magnitude in SI Units based on meter(m).
sS
sSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSs
*/

ssVec2D::ssVec2D()
{
	x = y = angle = magnitude = 0;
}

ssVec2D::ssVec2D(double sx, double sy)
{
	x = sx;
	y = sy;
	angle = atan2(y, x);
	magnitude = sqrt(x * x + y * y);
}

void ssVec2D::set_X(double sx)
{
	x = sx;
	angle = atan2(y, x);
	magnitude = sqrt(x * x + y * y);
}

void ssVec2D::set_Y(double sy)
{
	y = sy;
	angle = atan2(y, x);
	magnitude = sqrt(x * x + y * y);
}

void ssVec2D::set_Angle(double sangle)
{
	angle = sangle;
	x = cos(angle) * magnitude;
	y = sin(angle) * magnitude;
}

void ssVec2D::set_Magnitude(double smagnitude)
{
	magnitude = smagnitude;
	x = cos(angle) * magnitude;
	y = sin(angle) * magnitude;
}

double ssVec2D::get_X()
{
	return x;
}

double ssVec2D::get_Y()
{
	return y;
}

double ssVec2D::get_Angle()
{
	return angle;
}

double ssVec2D::get_Magnitude()
{
	return magnitude;
}

void ssVec2D::set_Rotation(double sangle)
{
	angle += sangle;
	x = cos(angle) * magnitude;
	y = sin(angle) * magnitude;
}

void ssVec2D::set_Position(double sx, double sy)
{
	x = sx;
	y = sy;
	angle = atan2(y, x);
	magnitude = sqrt(x * x + y * y);
}

void ssVec2D::set_MagnitAngle(double smagnitude, double sangle)
{
	magnitude = smagnitude;
	angle = sangle;
	x = cos(angle) * magnitude;
	y = sin(angle) * magnitude;
}

ssVec2D ssVec2D::get_Unit()
{
	return ssVec2D(x/magnitude, y/magnitude);
}

ssVec2D ssVec2D::get_Opposite()
{
	return ssVec2D(x, y) * -1;
}

ssVec2D ssVec2D::get_Orthogonal()
{
	return ssVec2D(-y, x);
}

ssVec2D ssVec2D::be_Unit()
{
	magnitude = 1;
	x = cos(angle);
	y = sin(angle);
}

ssVec2D ssVec2D::be_Opposite()
{
	x *= -1;
	y *= -1;
	angle = atan2(y, x);
	magnitude = sqrt(x * x + y * y);
}

ssVec2D ssVec2D::be_Orthogonal()
{
	double sx = x;
	x = -y;
	y = sx;
	angle = atan2(y, x);
	magnitude = sqrt(x * x + y * y);
}

double operator* (ssVec2D v, ssVec2D u)
{
	return v.x * u.x + v.y * u.y;
}

double operator/ (ssVec2D v, ssVec2D u)
{
	return v.x / u.x + v.y / u.y;
}

ssVec2D operator* (ssVec2D v, double k)
{
	return ssVec2D(v.x * k, v.y * k);
}

ssVec2D operator/ (ssVec2D v, double k)
{
	return ssVec2D(v.x / k, v.y / k);
}

ssVec2D operator+ (ssVec2D v, ssVec2D u)
{
	return ssVec2D(v.x + u.x, v.y + u.y);
}

ssVec2D operator- (ssVec2D v, ssVec2D u)
{
	return ssVec2D(v.x - u.x, v.y - u.y);
}

ssVec2D operator+ (ssVec2D v, double k)
{
	return ssVec2D(v.x + k, v.y + k);
}

ssVec2D operator- (ssVec2D v, double k)
{
	return ssVec2D(v.x - k, v.y - k);
}

void operator*= (ssVec2D v, double k)
{
	v = v * k;
}

void operator/= (ssVec2D v, double k)
{
	v = v / k;
}

void operator+= (ssVec2D v, ssVec2D u)
{
	v = v + u;
}

void operator-= (ssVec2D v, ssVec2D u)
{
	v = v - u;
}

void operator+= (ssVec2D v, double k)
{
	v = v + k;
}

void operator-= (ssVec2D v, double k)
{
	v = v - k;
}

ssVec2D::~ssVec2D()
{
	
}
