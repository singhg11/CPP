#include<iostream>
#include<cstring>
using namespace std;
class Student{
    int age;
    public:
    char *name;
    Student(int age, char *name){
        this -> age = age;
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
    }
    void display() {
        cout << name << " " << age <<endl; 
    }
    //Copy Constructor3
    //  Inbuilt copy constructor makes always shallow copy
    Student(Student const &s){
        this -> age = s.age;
        // this -> name = s.name; // Shallow Copy
        // Deep Copy
        this -> name = new char[strlen(s.name) + 1];
        strcpy(this -> name, s.name);
    }
};
int  main(){
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();
    Student s2(s1);
    s2.name[0] = 'x';
    s1.display();
    s2.display();
}