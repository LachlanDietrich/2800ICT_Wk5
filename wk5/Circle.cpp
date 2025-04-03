#include "Circle.hpp"
#include "Point.hpp"

//  Parameterised constructor
Circle::Circle(double xval, double yval, double r)
{
    center = Point(xval,yval);
    radius = r;
}

//  Center setter
void Circle::setCenter(double xval, double yval)
{
    center.setX(xval);
    center.setY(yval);
}

//  Center setter using Pointer
void Circle::setCenter(const Point &newCenter)
{
    center = newCenter;
}

//  Radius setter
void Circle::setRadius(double newRadius)
{
    radius = newRadius;
}

//  Radius getter
double Circle::getRadius() { return radius; }

//  Center getter
const Point& Circle::getCenter() const { return center; }

//  Output operator
ostream &operator<<(ostream &out, const Circle &c1)
{
    out << "Circle(center: ";
    out << c1.center;
    out << ", radius: " << c1.radius << ")";   
    return out;
}