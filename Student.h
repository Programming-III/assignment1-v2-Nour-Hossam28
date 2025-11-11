#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

class Student: public Person{
private:
int yearLevel;
string major;
public: 
void display(){
  display();
  cout<< "Student's year level: "<< yearLevel<< endl;
  cout<< "Student's Major: "<< major<< endl;
}

};














#endif
