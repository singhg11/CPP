#include<iostream>
using namespace std;

int sum1(int a[], int size, int start = 0){
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans += a[i];
    }
    return ans;
}

int sum2(int a, int b, int c = 0, int d = 0){
    return a + b + c + d;
}

int main() {
    int a[20];
     for (int i = 0; i < 20; i++) {
        cin >> a[i];
    }
    cout << sum1(a, 20) << endl;
}