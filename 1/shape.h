#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <vector>
#include <cmath>

const double PI = 3.14;
const std::string TYPE = "type: ";
const std::string COMMA = ", ";
const std::string CENTER = "center: ";
const std::string VOLUME = "volume: ";
const std::string PARENTHESIS1 = "(";
const std::string PARENTHESIS2 = ")";

class Shape 
{
public:
    Shape(int init_x, int init_y, int init_z);
    void move(int dx, int dy, int dz);
	virtual int volume() const = 0;
    virtual void scale(int factor) = 0;
	virtual std::string type() const = 0;
	friend std::ostream& operator<<(std::ostream& out, const Shape *shape);
protected:
    int x;
    int y;
	int z;
};
#endif