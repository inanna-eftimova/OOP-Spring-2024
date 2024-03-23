#ifndef TASKS_BANK
#define TASKS_BANK

class Bank
{
public:
  Bank();
  Bank(const char* iban, const char* name, float ballance);
  Bank(const Bank& other);
  Bank& operator =(const Bank& other);
  ~Bank();
  const float getBalance() const;
  void setBalance(const float newBalance);

private:
  char* iban;
  char* name;
  float balance;
};

#endif