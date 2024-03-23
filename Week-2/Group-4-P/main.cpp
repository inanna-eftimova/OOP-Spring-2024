#include <iostream>
#include "Person.h"

int main(){
  Person inana;
  inana.setUsername("Inana");
  std::cout << inana.getUsername();
  return 0;
}