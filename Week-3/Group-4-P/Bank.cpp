#include <iostream>
#include "Bank.h"

Bank::Bank()
    : balance(0),
      iban(new char[1]{'\0'}),
      name(new char[1]{'\0'}) {}

Bank::Bank(const char *iban, const char *name, float balance)
    : balance(balance),
      iban(new char[std::strlen(iban) + 1]{'\0'}),
      name(new char[std::strlen(name) + 1]{'\0'})
{
  std::strcpy(this->iban, iban);
  std::strcpy(this->name, name);
  this->balance = balance;
}

Bank::Bank(const Bank &other)
{
  this->balance = other.balance;

  this->iban = new char[std::strlen(other.iban) + 1]{'\0'};
  std::strcpy(this->iban, other.iban);

  this->name = new char[std::strlen(other.name) + 1]{'\0'};
  std::strcpy(this->name, other.name);
}
Bank &Bank::operator=(const Bank &other)
{
  if (this != &other)
  {
    delete[] this->iban;
    this->iban = new char[std::strlen(other.iban) + 1]{'\0'};
    std::strcpy(this->iban, other.iban);
    delete[] this->name;
    this->name = new char[std::strlen(other.name) + 1]{'\0'};
    std::strcpy(this->name, other.name);
    this->balance = other.balance;
  }
  return *this;
}
Bank::~Bank()
{
  delete[] this->iban;
  delete[] this->name;
}
const float Bank::getBalance() const
{
  return this->balance;
}

void Bank::setBalance(const float newBalance)
{
  if (newBalance > 0)
  {
    this->balance = newBalance;
  }
}