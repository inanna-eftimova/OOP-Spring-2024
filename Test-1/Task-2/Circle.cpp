#include "Circle.h"

const double PI  =3.141592653589793238463;

Circle::Circle(): radius(0), center(0){};
Circle::Circle(double center, double radius): radius(radius), center(center){};

double Circle::area() const{
    return this->radius*this->radius*PI;
}

double Circle::perimeter() const{
  return 2*PI*this->radius;
}