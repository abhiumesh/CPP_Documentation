#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:- "<<endl;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<(n-i+2);j++)
        {
            cout <<j;
        }
        for(int k=1;k<=(2*i-2);k++)
        {
            cout <<"*";
        }
        for(int l=n-i+1;l>0;l--)
        {
            cout <<l;
        }
        cout<<endl;
    }
    return 0;
}
/*
Pattern :- 
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/