# include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool divided = false;
    /* // Using while
    int d = 2;
    while (d < n) {
        if (n % d == 0) {
            cout << "Not Prime" << endl;
            divided = true;
            break;
        }
        d = d + 1;
    }
    if (!divided){
        cout << "Prime" << endl;
    } */

    for ( int d = 2; d < n; d++) {
        if (n % d == 0){
            divided = true;
        } 
    }
    if (divided){
        cout << "Not Prime" << endl;
    } else {
        cout << "Prime" << endl;
    }
    
}