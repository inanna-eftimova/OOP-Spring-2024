#ifndef HPP_RATIONAL
#define HPP_RATIONAL

class Rational
{
public:
Rational(int, int);
  int getA() const;
  int getB() const;
  void setA(int);
  void setB(int);

private:
int a;
int b;
};

#endif