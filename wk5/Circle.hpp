#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <iostream>
#include "Point.hpp"

using namespace std;

class Circle
{
private:
    Point center;
    double radius;

public:
    // Circle() : center{Point()}, radius{} {};    //  default contructor
    Circle(double x=0, double y=0, double r=0);    //  parameterised constructor

    void setCenter(double x, double y);
    void setCenter(const Point &newCenter);
    void setRadius(double newRadius);

    const Point& getCenter() const;
    double getRadius();

    friend ostream &operator<<(ostream &out, const Circle &c1);
};

#endif