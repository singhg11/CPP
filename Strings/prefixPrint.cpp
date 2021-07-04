#include<iostream>
using namespace std;
#include<cstring>

void printAllPrefixes(char arr[]){
    // i represents end index of my prefix
    for (int i = 0; arr[i] != '\0'; i++) {
        // j represents start index of my prefix
        for (int j = 0; j <= i; j++){
            cout << arr[j];
        }
        cout << endl;
    }
}
int main() {
    char arr[100] = "abcd"; 
    printAllPrefixes(arr);
}