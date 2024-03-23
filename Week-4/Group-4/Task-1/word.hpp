#ifndef TASKS_WORD
#define TASKS_WORD

class Word
{
private:
  char text[20];
public:
 Word operator+(char symbol); 
 void print() const;
};

#endif