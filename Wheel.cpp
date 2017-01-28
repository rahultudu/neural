/*
//										DEFINITION OF WHEEL FUNCTIONS
*/
#include "Wheel.h"
using namespace std;

void wheel::set_radius(float a, float b, float c)
{
	outer_r = a;
	inner_r = b;
	axle_r = c;
}

vector<float> wheel::get_radius()
{
	vector<float> V;
	V.push_back(outer_r);
	V.push_back(inner_r);
	V.push_back(axle_r);
	return V;
}

void wheel::set_wheel_colour(float a, float b, float c)
{
	wheel_r = a;
	wheel_g = b;
	wheel_b = c;
}

vector<float> wheel::get_wheel_colour()
{
	vector<float> V;
	V.push_back(wheel_r);
	V.push_back(wheel_g);
	V.push_back(wheel_b);
	return V;
}

void wheel::set_axle_colour(float a, float b, float c)
{
	axle_r = a;
	axle_g = b;
	axle_b = c;
}

vector<float> wheel::get_axle_colour()
{
	vector<float> V;
	V.push_back(axle_r);
	V.push_back(axle_g);
	V.push_back(axle_b);
	return V;
}

void wheel::set_pos(float a, float b)
{
	x = a;
	y = b;
}

vector<float> wheel::get_pos()
{
	vector<float> V;
	V.push_back(x);
	V.push_back(y);
	return V;
}
