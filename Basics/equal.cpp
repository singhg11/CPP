# include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    bool isEqual = (a == b);
    bool isAGreater = (a > b);
    bool isALess = (a < b);
    cout << "Are they equal " << isEqual << endl;
    cout << "is A greater " << isAGreater << endl;
    cout << "is A less " << isALess << endl;
    bool third = isEqual && isAGreater;
    bool fourth = isEqual || isAGreater;
    

    cout << "Not equal " << !isEqual << endl;
}
