#include<iostream>
using namespace std;
int main()
{
    int n,count = 1;
    cout <<"Enter the number:- "<<endl;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout <<count++;
        }
        cout << endl;
    }
    return 0;
}
/*
Pattern:- 
    123
    456
    789
*/