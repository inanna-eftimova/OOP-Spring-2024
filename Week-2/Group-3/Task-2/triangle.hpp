#ifndef HPP_TRIANGLE
#define HPP_TRIANGLE


class Triangle{
  public:
  int perimetar();
  int area();
  int inscribed_circle();
  int getA();
  int getB();
  int getC();
  void setA(int);
  void setB(int);
  void setC(int);
  private:
  int a;
  int b;
  int c;
};

#endif