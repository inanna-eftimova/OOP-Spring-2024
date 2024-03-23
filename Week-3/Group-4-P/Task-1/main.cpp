#include <iostream>
#include "./User.hpp"

int main(){
  User dsk("123eds", "inana", 100);
  dsk.addMoney(200);
  dsk.print();
  return 0;
}