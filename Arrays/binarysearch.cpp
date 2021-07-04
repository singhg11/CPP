#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int val){
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == val) {
            return mid;
        } else if (val < arr[mid]) {
            end = mid -1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int item;
    cin >> item;

    cout << binarySearch(arr, n, item) << endl;
    return 0;
}