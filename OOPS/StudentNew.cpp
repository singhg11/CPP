#include<iostream>
using namespace std;
#include "Student.cpp"
int main() {
    Student s(10, 1001);
    cout << "Address  of s : " << &s <<endl;
    Student s1(20);
    s1.display();
    
    /*
    Student s1;
    s1.display();
    
    Student s2;

    Student *s3 = new Student;
    s3->display();

    cout << "parameterised constructor demo" << endl;
    Student s4(101);
    s4.display();

    Student *s5 = new Student(102);
    s5 ->display();

    
    Student s6(10, 200);
    s6.display();

    Student *s7 = new Student(20, 202);
    s7 ->display();
    */
}