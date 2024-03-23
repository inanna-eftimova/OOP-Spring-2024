#include <iostream>

class Rational
{
public:
  int getA() const {return a;};
  int getB() const {return b;};
  int setA(int newA) {a = newA; return a;};
  int setB(int newB) {a = newB; return b;};

private:
int a;
int b;
};

int main()
{
  Rational person;
  person.setA(4);
  std::cout << person.getA();
  return 0;
}