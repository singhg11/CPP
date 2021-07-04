# include<iostream>
using namespace std;
int main()
{
    int f;
    cout << "Enter the Fahrenheit Value" << endl;
    cin >> f;
    // int c = (5.0 / 9) * (f - 32);
    int c = (5 * (f - 32))/9;
    cout << c << endl;
    cout << (5.0 / 9) * (f - 32) << endl;
}
