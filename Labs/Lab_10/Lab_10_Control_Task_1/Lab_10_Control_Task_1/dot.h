#pragma once

class Dot
{
private:
	double x1;
	double y1;
	double x2;
	double y2;
public:
	Dot();
	Dot(double x_1, double y_1, double x_2, double y_2);
	double distanceTo();
};