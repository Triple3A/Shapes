#include "cuboid.h"

std::string Cuboid::type() const
{
	return "Cuboid";
}

Cuboid::Cuboid(int init_x, int init_y, int init_z, int _width, int _height, int _depth)
    : Shape(init_x, init_y, init_z)
{
	width = _width;
	height = _height;
	depth = _depth;
}

void Cuboid::scale(int factor)
{
	width *= factor;
	height *= factor;
	depth *= factor;
}

int Cuboid::volume() const
{
	return width * height * depth;
}