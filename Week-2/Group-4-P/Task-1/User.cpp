#include "User.hpp"
#include <iostream>

const char* User::getUsername() const{
  return this->username;
}

void User::setUsername(const char* newUsername){
   if(std::strlen(newUsername) < 64){
     std::strcpy(this->username, newUsername);
   }
   return;
}

