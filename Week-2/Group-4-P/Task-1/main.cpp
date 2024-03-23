#include <iostream>
#include "User.hpp"

int main(){
  User Inana;
  Inana.setUsername("Inana");
  std::cout << Inana.getUsername();
  return 0;
}