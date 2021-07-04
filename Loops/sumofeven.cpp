# include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0){
            sum = sum + i; 
        }
        i = i + 1;
    }
    cout << "Sum of all even numbers: " << sum << endl;
}