#include<bits/stdc++.h>
using namespace std;

int main(){

    // int n=4;
    // int n =10;
    // int n = 5;
    int n = 20;
    // cout << "Enter Number: ";
    // cin >> n;

    for(int i=0; i<n; i++){
        for(int j= n-i - 1; j>0; j--){
            cout << " ";
        }
        cout << "*";
        if(i != 0)
        {
            for(int j=0; j< 2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0; i < n - 1; i++){
        for(int j = 0; j <=i; j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j = 2*(n-i-1)-1; j > 2 ; j--){
            cout<<" ";
        }
        if(i == n-2){
            continue;
        }
        cout<<"*";
        cout<<endl;
    }

    return 0;
}