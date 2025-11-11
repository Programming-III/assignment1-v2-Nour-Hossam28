#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

// ==================== Person Class Implementation =========================
Person:: Person(string name, int id){
this-> name= name;
this-> id= id;
}
Person ::Person(){
}
~Person ::Person(){
}
void Person::Person displayCourseInfo(){
Student.display();
 cout<< "Person's name: "<< name<< endl;
   cout<< "Person's id: "<< id<< endl;
    }
}






// ==================== Student Class Implementation ====================
Student:: Student(int yearLevel, string major) : Person(string name, int id){
this-> yearLevel =yearLevel;
   this-> major= major;
}
Student:: Student(){
}
~Student:: Student(){
}
void Student:: Student display();
display();
  cout<< "Student's year level: "<< yearLevel<< endl;
  cout<< "Student's Major: "<< major<< endl;





// ==================== Instructor Class Implementation ====================

Instructor:: Instructor(stirng department, int experienceYears): Person(string name, int id){
this-> department =department;
this->experienceYears= experienceYears;
}
Instructor:: Instructor(){
}
~Instructor:: Instructor(){
}
void Instructor:: Instructor display(){
   display();
cout<< "departement: " <<department;
cout<< "Years of experience: "<< experienceYears<< endl;
}


// ==================== Course Class Implementation ====================
Course :: Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents)
:Person(string name, int id) {
this-> courseCode=courseCode;
this-> courseName= courseName
   this->maxStudents= maxStudents;
students= nullptr;
this-> currentStudents= currentStudents;
}   

Course :: Course addStudent(const Student& s){
     Student * temp= new Student[maxStudents+1];
     for (int i=0; maxStudents; i++){
        temp[i]= students[i];
 }
  temp[maxStudents]= s;
  delete[] students;
  students= temp;
  maxStudents++;
  }

void Course:: Course displayCourseInfo(){
Student.display();
  cout<< "Course code: "<<courseCode<< endl;
  cout<< "Course Name: "<<courseName<< endl;
  cout<< "Max number of students: "<< maxStudents<< endl;
  cout<< "Current number of students: "<< currentStudents<< endl;
  for (int i=0; i<maxStudents; i++){
      cout<< "Students enrolled: "<< students[i].courseName<< endl;
    }
}






// ==================== Main Function ====================
int main() {
    Course c("CS101", "Introduction to programming", 3, "Omar nabil", 2202);
   c.addStudent("Omar Nabil" , 2202);
   Instructor I1("Dr. Lina Khaled", "Computer Science", 5);
   Student s1("Omar Nabil", 2, "Informatics");
    
    return 0;
}
