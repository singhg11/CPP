#include<iostream>
using namespace std;
#include<cstring>
int main() {
    char input1[100] = "abcd";
    // cin >> input1; 
    char input2[100] = "hello";
    // cin >> input2;  

    cout << "Before Copying : " << endl;
    cout << "Input 1 : " << input1 << endl;
    cout << "Input 2 : " << input2 << endl;
    // strcpy(input1, "hello");
    // strncpy(input1, input2, 3);
    strncpy(input1, "xy", 4);
    cout << "After Copying : " << endl;
    cout << "Input 1 : " << input1 << endl;
    cout << "Input 2 : " << input2 << endl;

    /*
    if(strcmp(input1, input2) == 0){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    */

    /*
    int len = strlen(input1);   
    cout <<"length : " << len << endl;
    */
}