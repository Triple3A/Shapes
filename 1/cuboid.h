#ifndef CUBOID_H
#define CUBOID_H

#include "shape.h"

class Shape;

class Cuboid : public Shape 
{
public:
    Cuboid(int init_x, int init_y, int init_z, int _width, int _height, int _depth);
    virtual void scale(int factor);
	virtual int volume() const;
	virtual std::string type() const;
private:
	int width;
	int height;
	int depth;
};
#endif