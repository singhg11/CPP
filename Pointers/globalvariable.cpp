#include<iostream>
using namespace std;

//Using global variable is very bad practice 
int a;
void g() {
    a++;
    cout << a << endl;
}

void f() {
    cout << a << endl;
    a++;
    g();
}

int main() {
    a = 10;
    f();
    cout << a << endl;
}