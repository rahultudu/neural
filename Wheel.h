/*
//										WHEEL CLASS
*/
#include <vector>
using namespace std;

class wheel
{
	//private variable related to wheels
private:
	float outer_r, inner_r, axle_r;							
	float wheel_r, wheel_g, wheel_b;						
	float axle_r, axle_g, axle_b;							
	float x, y;	

	//public utility functions
public:
	void set_radius(float a, float b, float c);

	vector<float> get_radius();

	void set_wheel_colour(float a, float b, float c);

	vector<float> get_wheel_colour();

	void set_axle_colour(float a, float b, float c);

	vector<float> get_axle_colour();

	void set_pos(float a, float b);

	vector<float> get_pos();


};