#include "shape.h"

Shape::Shape(int init_x, int init_y, int init_z) 
	: x(init_x), y(init_y), z(init_z) {};

void Shape::move(int dx, int dy, int dz)
{
    x += dx;
    y += dy;
	z += dz;
}

std::ostream& operator<<(std::ostream& out, const Shape *shape)
{
	out << TYPE << shape->type() << COMMA;
	out << CENTER + PARENTHESIS1 << shape->x << COMMA << shape->y << COMMA << shape->z << PARENTHESIS2 + COMMA;
	out << VOLUME << shape->volume();
	return out;
}
