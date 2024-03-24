#ifndef TASK_CIRCLE
#define TASK_CIRCLE

class Circle{
public:
Circle();
Circle(double center, double radius);
double area() const;
double perimeter() const;
private:
double center, radius;
};

#endif