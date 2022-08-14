#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i = 0,ans = 0;
    cout <<"Enter the number:- "<<endl;
    cin >> n ;
    while(n!=0)
    {
        if(n&1)
        {
            ans += pow(2, i);
        }
        i++;
        n = n/10;
    }
    cout << ans;
}