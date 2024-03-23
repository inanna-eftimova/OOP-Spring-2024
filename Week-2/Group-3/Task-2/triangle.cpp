#include "triangle.hpp"
#include <cmath>

int Triangle::getA(){return a;}
int Triangle::getB(){return b;}
int Triangle::getC(){return c;}

void Triangle::setA(int newA){a=newA;}
void Triangle::setB(int newB){b=newB;}
void Triangle::setC(int newC){c=newC;}

int Triangle::perimetar(){return a+b+c;}
int Triangle::area(){
  int halfPerimetar = perimetar()/2;
  int area = halfPerimetar*(halfPerimetar-a)*(halfPerimetar-b)*(halfPerimetar-c);
  return sqrt(area);
}

int Triangle::inscribed_circle(){
  return area()/(perimetar()/2);
}