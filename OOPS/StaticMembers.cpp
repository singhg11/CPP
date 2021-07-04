#include<iostream>
using namespace std;

class Student{
    // for static property we use static keyword
    static int totalStudents; // total number of students

    public:
    // By default non-static
    int rollNumber;
    int age;
    Student(){
        totalStudents++;
    }

    int getRollNumber(){
        return rollNumber;
    }
    static int getTotalStudents() {
        return totalStudents;
    }
};

//scope resolution operator ::
int Student :: totalStudents = 0; //initialize static data members

int main(){
    Student s1;
    Student s2;
    Student s3, s4, s5;
    cout << Student :: getTotalStudents() << endl;
    // cout << Student :: totalStudents << endl;
    // cout << s5.totalStudents << endl; // This line gives same output as it is above line but this is logically incorrect
}