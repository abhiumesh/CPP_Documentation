#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:- "<<endl;
    cin >> n;
    for(int i=n;i>0;i--)
    {
        int a = n-i+1;
        for(int j=1;j<n-i+1;j++)
        {
            cout <<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout <<a;
        }
        cout << endl;
    }
    return 0;
}

/*
Pattern :- 
11111
 2222
  333
   44
    5
*/