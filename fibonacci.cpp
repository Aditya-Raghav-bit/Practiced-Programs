#include<bits/stdc++.h>
using namespace std;

int fib_num( int n)
{
    if( n<=1) return n;
    return fib_num(n-1) + fib_num(n-2);
}


int main()
{
    int n, sum = 0, sum1 =0, sum2 =1, temp;
    cout << "Enter range: ";
    cin >> n;

    if(n <= 1) cout << n;
    // else {
    //     for(int i=0; i<=n ; i++)
    // {
    //     cout << sum << endl;
    //     sum = sum1 + sum2;

    //     temp = sum1;
    //     sum1 = sum;
    //     sum2 = temp;
    //     }
    // }
    else{

        for(int i = 0; i<=n; i++)
        {
            cout << fib_num(i) << endl;
        }

    }

    return 0;
}