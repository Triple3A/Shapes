#ifndef CONE_H
#define CONE_H

#include "shape.h"

class Shape;

class Cone : public Shape 
{
public:
    Cone(int init_x, int init_y, int init_z, int _radius, int _height);
    virtual void scale(int factor);
	virtual int volume() const;
	virtual std::string type() const;
private:
    int radius;
	int height;
};
#endif