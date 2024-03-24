#ifndef TASK_STUDENT
#define TASK_STUDENT

class Student
{
public:
  Student(const char *personName);
  int getFn() const;
  void increaseCounter();
  int getCounter() const;

private:
  char *name;
  unsigned int fn;
  static int counter;
};
#endif