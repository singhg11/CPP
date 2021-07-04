# include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    /* // while loop
    while (i <= n) {
        cout << i << ", ";
        i = i + 1;
    }
    cout << endl; */

    // for loop
    for (int i = 1; i <= n; i++){
        cout << i << ", ";
    }
}