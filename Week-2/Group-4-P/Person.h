#ifndef TASKS_PERSON
#define TASKS_PERSON

class Person
{
private:
  enum GENDER
  {
    UNKNOWN = -1,

    MALE,
    FEMALE,
    OTHER,

    GENDER_COUNT
  };

private:
  char username[64];
  char email[101];
  unsigned int age;
  char password[32];
  GENDER gender;

public:
  const char *getUsername() const;
  void setUsername(const char *username);

  const char *getEmail() const;
  void setEmail(const char *email);
  bool isAdult();
  bool writeInFile(const char* fileName) const;
};

#endif