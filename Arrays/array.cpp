#include<iostream>
using namespace std;

void display(int arr[], int n){
    cout << "The elements of array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[100];
    // take array input
    cout << "Enter the elements of arry : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    display(arr, n);
    /* // display
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout <<"\n" << arr << endl;
    */
}