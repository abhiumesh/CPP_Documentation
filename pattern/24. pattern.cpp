#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout <<"Enter the number:- "<<endl;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout <<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout <<count++;
        }
        cout << endl;
    }
    return 0;
}
/*
Pattern:- 
   1
  23
 456
78910
*/