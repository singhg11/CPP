#include<iostream>
#include<cstring>
using namespace std;
class Student{
    public :
    int age;
    const int rollNumber; 
    int &x; // age reference variable
    
    // Initialization List with Constructor
    Student(int r, int age) : rollNumber(r), age(age), x(this -> age) {
        // rollNumber  = r; // Not allowed
    }

    void display(){
        cout << age << " " << rollNumber <<  endl;
    }
};

int  main(){  
    Student s1(101, 10);
    s1.age = 10;
    // s2.rollNumber = 101;
    s1.display();
}