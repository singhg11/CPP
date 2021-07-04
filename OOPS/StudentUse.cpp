#include<iostream>
using namespace std;
#include "Student.cpp"
int main() {
    // creating objects statically
    Student s1; 
    Student s2;
    Student s3, s4, s5;
    // s1.age = 25;
    s1.rollNumber = 101;
    cout << "S1 Age : " << s1.getAge() << endl;
    cout << "S1 Roll Number : " << s1.rollNumber << endl;
    
    s1.display(); 
    s2.display();
    // s2.age = 30;
    
    // creating objects dynamically
    Student *s6 = new Student;
    // (*s6).age = 31;
    (*s6).rollNumber = 202;
    (*s6).display();
    cout << "S6 Age : " << s6 -> getAge() << endl;
    // or use this for above two line
    // s6 -> age = 31;
    // s6 -> rollNumber = 202;

}