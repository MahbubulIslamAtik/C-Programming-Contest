#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int n;
    cin >> n;
    int num;
    for(int i = 1; i<=n; i++){
        cin >> num;
        if(num % 2 == 0){
            cout << "Even" <<endl;
        }else{
            cout << "Odd" <<endl;
        }
    }
}