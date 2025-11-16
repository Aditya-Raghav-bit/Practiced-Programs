#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j< (n-1)-i; j++){
            cout << " ";
        }
        for(int j=0; j< (i*2)+1; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j< ((n*2)-1)-i*2; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}