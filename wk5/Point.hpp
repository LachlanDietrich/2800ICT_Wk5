#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <memory>
using namespace std;

class Point
{
private:
    shared_ptr<double> x;
    shared_ptr<double> y;

public:
    Point() : x{make_shared<double>(0.0)}, y{make_shared<double>(0.0)} {};   //  default contructor
    Point(double x, double y); //  parameterised constructor

    Point(const Point &other); //  copy constructor
    Point(Point &&other);      //  move constructor

    Point &operator=(const Point &other);   //  copy assignment
    Point &operator=(Point &&other);        //  move assignment

    void setX(double x);
    void setY(double y);

    double getX();
    double getY();

    friend ostream &operator<<(ostream &out, const Point &p1);  //  output operator
};

#endif