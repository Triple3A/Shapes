#ifndef SPHERE_H
#define SPHERE_H

#include "shape.h"

class Shape;

class Sphere : public Shape 
{
public:
    Sphere(int init_x, int init_y, int init_z, int _radius);
    virtual void scale(int factor);
	virtual int volume() const;
	virtual std::string type() const;
private:
    int radius;
};
#endif