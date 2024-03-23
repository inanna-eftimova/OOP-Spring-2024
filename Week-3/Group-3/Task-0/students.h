#ifndef TASKS_STUDENTS_H
#define TASKS_STUDENTS_H


class Students {
public:
    int getCourse() const;
    int getGroup() const;
    int getFn() const;
private:
    char[50] name;
    int course, group, fn;
    double average_grade;
};


#endif
