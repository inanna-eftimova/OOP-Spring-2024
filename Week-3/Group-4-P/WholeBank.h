#ifndef TASKS_WHOLEBANK
#define TASKS_WHOLEBANK
#include "Bank.h"
class WholeBank{
public:
void printBanks() const;
private:
Bank* banks;
};
#endif