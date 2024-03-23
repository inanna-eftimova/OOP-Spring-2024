#include "Person.h"
#include <iostream>
#include <fstream>

bool Person::isAdult()
{
  if (age >= 18)
  {
    return true;
  }
  return false;
}

const char *Person::getUsername() const
{
  return this->username;
}

void Person::setUsername(const char *username)
{
  if (std::strlen(username) < 64)
  {
    std::strcpy(this->username, username);
    return;
  }

  std::cout << "Too long username\n";
}

const char *Person::getEmail() const
{
  return this->email;
}

void Person::setEmail(const char *email)
{
  if (std::strlen(email) < 100)
  {
    std::strcpy(this->email, email);
    return;
  }
}

bool Person::writeInFile(const char* fileName) const
{
    std::ofstream out(fileName);

    if (!out.is_open())
    {
        std::cout << "Error while opening file...\n";
        return false;
    }

    out << this->username << ' '
        << this->email << ' '
        << this->password << ' '
        << this->age << '\n';
    out.close();
    
    return true;
}