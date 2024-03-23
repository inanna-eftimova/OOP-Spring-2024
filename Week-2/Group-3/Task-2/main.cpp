#include <iostream>
#include "triangle.hpp"

int main(){
  Triangle custom;
  custom.setA(3);
  custom.setB(4);
  custom.setC(5);
  std::cout << custom.inscribed_circle();
  return 0;
}