#include "complex.hpp"
#include <iostream>

int Complex::getA() const {
  return a;
}

int Complex::getB() const {
  return b;
}

int Complex::setA(int newA) {
    a = newA;
    return newA;
}

int Complex::setB(int newB){
  b = newB;
  return newB;
}

void Complex::print() const{
  std::cout << a << b;
}