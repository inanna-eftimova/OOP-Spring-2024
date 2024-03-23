#include <iostream>
// using UnaryOperation = double(*)(double);

// double twice(UnaryOperation operation, double n) {
//   return operation(operation(n));
// }

double twice(double(*operation)(double), double n) {
  return operation(operation(n));
}
double square(double n) {
  return n * n;
}

int main() {
  std::cout << twice(square, 2) << '\n';

  twice([](double a) -> double {
      return a*a;
  }, 2);
  return 0;
}