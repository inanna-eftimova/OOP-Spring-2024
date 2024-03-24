#include <cstring>
#include "Student.h"

// int Student::counter = 0;

Student::Student(const char* name): fn(getCounter()){
  increaseCounter();
  this->fn = getCounter();
    if(std::strlen(name) <= 100){
       std::strcpy(this->name, name);
    }
}

void Student::increaseCounter(){
  this->counter++;
}

int Student::getCounter() const{
  return this->counter;
}

int Student::getFn() const{
  return this->fn;
}