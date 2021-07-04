# include<iostream>
using namespace std;
int main(){
    // Adding two numbers
    int x = 10; //4 byte
    int y = 10;
    int z = x + y;
    cout << z << endl;
    char d = 'x'; // 1 byte
    cout << d << endl;
    float f = 3.5; // 4 byte
    cout << f << endl;
    bool b = true; // 1 byte
    cout << b << endl;
    int size = sizeof(b);
    cout << size << endl;
}