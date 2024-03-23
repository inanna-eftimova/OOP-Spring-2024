#include "car.hpp"


Car::Car(){
  power = 90;
  gas = 0;
  diraction = 0;
}

int Car::getPower() const{
   return power;
}

int Car::getGas() const{
  return gas;
}

int Car::getDiraction() const{
  return diraction;
}

void Car::update(){
  if(power+15<= 150){
    power+=15;
  }
}

void Car::fill(){
  gas = 100;
}

// void Car::setPower(int _power){
//     power = _power;
// }

// void Car::setGas(int _gas){
//   gas = _gas;
// }

// void Car::setDiraction(int _diraction){
//   diraction = _diraction;
// }