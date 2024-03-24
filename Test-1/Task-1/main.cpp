#include <iostream>
#include "Vector.h"

int main(){
  Vector one(14, 3);
  Vector two(4, 3, 7);
  Vector three(4, 3, 7);
  std::cout << (two == three);
  return 0;
}