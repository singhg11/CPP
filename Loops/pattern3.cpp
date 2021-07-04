# include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    int val = 1;
    while (i <= n) {
        int k = 1;
        while (k <= (n - i)){
            cout << " \t";
            k = k + 1;
        }
        int j = 1;
        while (j <= i) {
            cout << val << "\t";
            j = j + 1; 
            val = val + 1;  
        }
        cout << endl;
        i = i + 1;
    }
}