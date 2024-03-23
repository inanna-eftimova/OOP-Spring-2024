#include <iostream>

int is_fixed_point([](int n){ return n * 5;}, int num){
    return arrowFunc(num);
}

int main(){
  std::cout << std::boolalpha << is_fixed_point([](int n){ return n * 5;}, 0) << '\n';
  return 0;
}