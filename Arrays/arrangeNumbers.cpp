#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int start = 0;
    int end = n - 1;
    int val = 1;
    for(int i = 0; i < n; i++) {
        if(val % 2 != 0){
            arr[start] = val;
            start++;
        } else {
            arr[end] = val;
            end--;
        }
        val++;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}