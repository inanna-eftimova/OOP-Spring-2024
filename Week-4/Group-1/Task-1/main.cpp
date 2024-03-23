#include <iostream>
#include "complex.hpp"

Complex sum(Complex n1, Complex n2){
  Complex result;
  result.setA(n1.getA() + n2.getA());
  result.setB(n1.getB() + n2.getB());
  return result;
}

int main(){
  Complex myNum;
  myNum.setA(5);
  myNum.setB(6);

  Complex myNum1;
  myNum1.setA(4);
  myNum1.setB(5);
  Complex finalR = sum(myNum1, myNum);
  finalR.print();
  return 0;
}