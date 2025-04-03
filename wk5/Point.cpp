#include "Point.hpp"

//  Parameterised constructor
Point::Point(double xval, double yval)
{
    x = make_shared<double>(xval);
    y = make_shared<double>(yval);
}

//  Copy constructor
Point::Point(const Point &other)
{
    x = make_shared<double>(*other.x);
    y = make_shared<double>(*other.y);
}

//  Move constructor
Point::Point(Point &&other)
{
    x = move(other.x);
    y = move(other.y);
}

//  Copy assignment
Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        x = make_shared<double>(*other.x);
        y = make_shared<double>(*other.y);
    }
    return *this;
}

//  Move assignment
Point &Point::operator=(Point &&other)
{
    if (this != &other)
    {
        x = move(other.x);
        y = move(other.y);
    }
    return *this;
}

void Point::setX(double xval) { *x = xval; }
void Point::setY(double yval) { *y = yval; }

double Point::getX() { return *x; }
double Point::getY() { return *y; }

//  Output operator
ostream &operator<<(ostream &out, const Point &p1)
{
    out << "Point(";
    if (p1.x && p1.y)
    {
        out << *p1.x << ", " << *p1.y;
    }
    else
    {
        out << "null, null";
    }
    out << ")";
    return out;
}