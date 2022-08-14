#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,ans = 0,i=0;
    cout <<"Enter the number:- "<<endl;
    cin >> a;
    while (a != 0)
    {
        int rem = a%2;
        ans += rem * pow(10,i);
        i++;
        a = a/2;
    }
    cout <<"Binery :- "<< ans;
    return 0;
}