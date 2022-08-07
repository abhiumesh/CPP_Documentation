#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:- "<<endl;
    cin >> n;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout <<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout <<k;
        }
        cout << endl;
    }
    return 0;
}
/*
Pattern:- 
12345
 1234
  123
   12
    1
*/