# include<iostream>
using namespace std;

void print_1_to_n(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
}

int main(){
    print_1_to_n(10);
}