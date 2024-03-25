#include <iostream>
#include "WholeBank.h"

void WholeBank::printBanks() const{
  int size = sizeof(this->banks) / sizeof(this->banks[0]);
  for(int i = 0; i < size; i++){
    //  std::cout << this->banks[i] << " ";
  }
}