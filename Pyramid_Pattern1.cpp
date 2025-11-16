#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j< ((n*2)-1)-i*2; j++){ //2*(n-i)-1
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}