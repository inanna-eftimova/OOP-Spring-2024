#include "word.hpp"
#include <iostream>

Word Word::operator+(char symbol){
    if((sizeof(text) / sizeof(text[0])) < 20){
       int index = sizeof(text) / sizeof(text[0]);
       text[index] = symbol;
    }
   //  return Word;
}

void Word::print() const{
   std::cout << text;
}