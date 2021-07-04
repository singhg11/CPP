#include<iostream>
using namespace std;

int main() {
    int arr[100][100];
    int m, n;
    cin >> m >> n;

    // taking input
    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // printing arry row wise
    cout << "Row Wise: " << endl;
    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // printing arry column wise
    cout << "Column Wise: " << endl;
    for(int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}