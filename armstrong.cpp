#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int pass = 0;
    cout << "Enter number: ";
    cin >> n;
    int copy = n, sum = 0, digit = 0,power =0;
    
    while(copy != 0)
    {
            power++;
        copy = copy/10;
    }
    copy = n;
    for(int i=0; i<power; i++)
    {
        digit = copy%10;
        sum = pow(digit,power) + sum;
        copy = copy/10;
    }
    if(sum == n)
    {
        cout << "Number is Armstrong";
    }
    else cout << "Number is not Armstrong";

    return 0;
}