#include "dot.h"
#include <math.h>

Dot::Dot()
{
	x1 = 0; 
	y1 = 0;
	x2 = 0;
	y2 = 0;
}
Dot::Dot(double x_1, double y_1, double x_2, double y_2)
{
	this->x1 = x_1;
	this->y1 = y_1;
	this->x2 = x_2;
	this->y2 = y_2;
}
double Dot::distanceTo()
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}