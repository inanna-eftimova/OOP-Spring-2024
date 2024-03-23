#include <iostream>
#include <cstring>
#include "User.hpp"

User::User() : balance(0), iban(new char[1]), name(new char[1])
{
  this->iban[0] = '\0';
  this->name[0] = '\0';
}
User::User(const char *iban, const char *name, double balance)
    : balance(balance),
      iban(new char[std::strlen(iban) + 1]),
      name(new char[std::strlen(name) + 1])
{
  std::strcpy(this->name, name);
  std::strcpy(this->iban, iban);
  this->balance = balance;
}
User::User(const User &other)
{
  this->iban = new char[std::strlen(other.iban) + 1];
  std::strcpy(this->iban, other.iban);
  this->name = new char[std::strlen(other.name) + 1];
  std::strcpy(this->name, other.name);
  this->balance = other.balance;
}
User &User::operator=(const User &other)
{
  if (this != &other)
  {
    delete[] this->iban;
    delete[] this->name;
    this->iban = new char[std::strlen(other.iban) + 1];
    std::strcpy(this->iban, other.iban);
    this->name = new char[std::strlen(other.name) + 1];
    std::strcpy(this->name, other.name);
    this->balance = other.balance;
  }
  return *this;
}
User::~User()
{
  delete[] this->iban;
  delete[] this->name;
}

void User::addMoney(const double money){
  this->balance += money;
}

void User::print(){
  std::cout << this->balance;
}