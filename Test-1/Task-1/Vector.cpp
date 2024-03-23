#include <iostream>
#include <cmath>
#include "Vector.h"

Vector::Vector(): x(0), y(0), z(0){};

Vector::Vector(int x, int y = 0): x(x), y(y), z(0){};

Vector::Vector(int x, int y, int z): x(x), y(y), z(z){};

const int Vector::magnitude() const
{
  return sqrt((this->x*this->x)+(this->y*this->y)+(this->z*this->z));
}

void Vector::normalize(){
  this->x = 1;
  this->y = 1;
  this->z = 1;
}
void Vector::print(){
  std::cout << this->x << this->y << this->z;
};

Vector& Vector::operator+(const Vector& other){
  if(this!=&other){
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
  }
  return *this;
}

Vector& Vector::operator-(const Vector& other){
  if(this!=&other){
    this->x -= other.x;
    this->y -= other.y;
    this->z -= other.z;
  }
  return *this;
}