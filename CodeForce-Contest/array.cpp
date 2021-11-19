#include<bits/stdc++.h>
using namespace std;
int main(){
    // int x[5], sum = 0;
    // x[0] = 5;
    // x[1] = 6;
    // x[2] = 5;
    // x[3] = 58;
    // x[4] = 8;
    // for(int i = 0; i<=4; i++){
    //     sum = x[i] + sum;

    // }
    // cout << sum <<endl;

    int num[5];

    for(int i = 0; i<5; i++){
        cin >> num[i];
    }
    
    cout << "Even" << endl;
    for(int i = 0; i < 5; i++){
        if(num[1] % 2 ==0){
            cout << num[i];
        }
    }
    cout << endl;
    cout << "Odd" << endl;
    for(int i = 0; i < 5; i++){
        if(num[i] % 2 != 0){
            cout << num[i];
        }
    }
}