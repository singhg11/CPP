#include<iostream>
using namespace std;
#include "Student.cpp"
int main() {
    Student s1; // Constructor 1 called
    Student s2(101); //Constructor 2 called
    Student s3(20, 201); //Constructor 3 called
    Student s4(s3); // Copy constructor called
    s1 = s2; // copy assignment operator
    Student s5 = s4; // Copy constructor called -> Student s5(s4); 

    /*
    Student s1(10, 101);
    s1.display();
    Student s2(20, 201);
    s2.display();
    Student *s3 = new Student(30, 301);
    s3 -> display();
    s2 =s1;
    s2.display();
    *s3 = s1;
    s3 -> display();
    s2 = *s3;
    s2.display();

    delete s3;
    */

    /*
    Student s1(10, 1001);
    cout << "S1 : ";
    s1.display();
    
    Student s2(s1);
    cout << "S2 : ";
    s2.display();

    Student *s3 = new Student(20, 2002);
    cout << "S3 : ";
    s3 -> display();
    
    Student s4(*s3);

    Student *s5 = new Student (*s3);
    Student *s6 = new Student (s1);
    */
}