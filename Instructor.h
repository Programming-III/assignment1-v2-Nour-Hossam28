#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
using namespace std;
class Instructor: public Person{
private:
string department;
int experienceYears;
public:
Instructor(stirng department, int experienceYears);
Instructor();
~Instructor();
void display();


};






#endif
