#ifdef TASKS_COUNTED
#define TASKS_COUNTED
#include <cstddef>

class Counted{
public:
static std::size_t getCount() {return count;}
private:
 static std::size_t count;
};

#endif