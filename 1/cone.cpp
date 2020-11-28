#include "cone.h"

std::string Cone::type() const
{
	return "Cone";
}

Cone::Cone(int init_x, int init_y, int init_z, int _radius, int _height)
	: Shape(init_x, init_y, init_z)
{
	radius = _radius;
	height = _height;
}

void Cone::scale(int factor)
{
	radius *= factor;
	height *= factor;
}

int Cone::volume() const
{
	double vol = PI * pow(radius, 2) * height / 3;
	return int(vol);
}