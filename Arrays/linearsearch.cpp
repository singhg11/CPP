#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int item){
    for(int i = 0; i <= n; i++){
        if (item == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {1, 8, 15, 14, 12};
    int res = linearSearch(arr,5, 25);
    cout << res << endl;
    return 0;

}