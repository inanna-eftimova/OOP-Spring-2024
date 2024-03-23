#include <iostream>
#include "rational.cpp"

int main()
{
  Rational person(3,4);
  person.setA(4);
  std::cout << person.getA();
  return 0;
}