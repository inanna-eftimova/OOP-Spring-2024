#include <iostream>
#include "Bank.h"
#include "WholeBank.h"

int main(){
  Bank myBank;
  std::cout << myBank.getBalance();
  return 0;
}