#ifndef HPP_COMPLEX
#define HPP_COMPLEX

class Complex{
  public:
  void print() const;
  int getA() const;
  int getB() const;
  int setA(int newA);
  int setB(int newB);

  private:
  int a,b;
};

#endif