# include<iostream>
using namespace std;

int fact(int n){
    // cout << a << endl;
    int ans = 1;
    for ( int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main(){
    int a;
    cin >> a;
    int res = fact(a);
    // cout << n << endl;
    // cout << ans << endl;
    cout << res << endl;
}