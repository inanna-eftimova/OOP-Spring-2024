#ifndef TASK_VECTOR
#define TASK_VECTOR

class Vector{
  public:
  Vector();
  Vector(int x, int y);
  Vector(int x, int y, int z);
  Vector& operator+(const Vector& other);
  Vector& operator-(const Vector& other);
  bool operator==(const Vector& other);
  void operator*=(const int number);
  const int magnitude() const;
  void normalize();
  void print();
private:
int x,y,z;
};

#endif