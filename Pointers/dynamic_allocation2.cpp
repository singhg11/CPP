#include<iostream>
using namespace std;
int main() {
    int *p = new int;
    delete p; // for release single element int pointed by pointer
    p = new int;
    delete p;

    p = new int[100];
    delete[] p; // array deletion
    /*
    while (true) {
        int i = 10;
    }
    while (true) {
        int *p = new int;
        *p = 10;
    }
    */
}