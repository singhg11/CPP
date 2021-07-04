#include<iostream>
using namespace std;
// creating class
class Student{
    public: 
        int rollNumber;
    private:
        int age;

    public:

    // Destuctor
    ~Student(){
        cout << "Destructor called!" << endl;
    }
// Default Constructor
    Student(){
        cout << "Constructor1 called!" << endl;
    }

// parameterised Constructor
    Student(int rollNumber) {
        cout << "Constructor2 called!" << endl;
        this -> rollNumber = rollNumber;
    }

    Student(int a, int r) {
        cout << "this : " << this << endl;
        cout << "Constructor3 called!" << endl;
        (*this).age = a;
        this -> rollNumber = r;
    }

    void display(){
        cout << age << " " << rollNumber <<  endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        if(a < 0) {
            return;
        }
        age = a;
    }
};