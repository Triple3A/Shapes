#include "sphere.h"

std::string Sphere::type() const
{
	return "Sphere";
}

Sphere::Sphere(int init_x, int init_y, int init_z, int _radius)
    : Shape(init_x, init_y, init_z)
{
	radius = _radius;
}

void Sphere::scale(int factor)
{
    radius *= factor;
}

int Sphere::volume() const
{
	double vol = 4 * PI / 3 * pow(radius, 3);
	return int(vol);
}