#include <iostream>
#include "Vector.h"

int main(){
  Vector one(14, 3);
  Vector two(4, 3, 7);
  one - two;
  one.print();
  return 0;
}