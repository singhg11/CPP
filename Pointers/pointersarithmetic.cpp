#include<iostream>
using namespace std;
int main() {
    int i = 10;
    int *p = &i;
    cout << p << endl;

    p = p + 2;
    cout << p << endl;

    p = p - 2;
    cout << p << endl;

    double d = 28.3;
    double *dp = &d;
    cout << dp << endl;
    dp = dp + 2;
    cout << dp << endl;

}