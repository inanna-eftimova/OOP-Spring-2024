#ifndef TASK_USER
#define TASK_USER

class User
{
public:
User();
User(const char* iban, const char* name, double balance);
~User();
User(const User& other);
User& operator=(const User& other);
void addMoney(const double money);
void print();
private:
  char *iban;
  char *name;
  double balance;
};

#endif