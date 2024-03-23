#ifndef TASKS_User
#define TASKS_User

class User
{
public:
  const char *getUsername() const;
  void setUsername(const char *newUsername);
  GENDER getGender() const;

private:
  enum GENDER
  {
    UNKNOWN = -1,

    MALE,
    FEMALE,
    OTHER,

    GENDER_COUNT

  }; 
private : 
char username[64];
GENDER genre;
};
#endif