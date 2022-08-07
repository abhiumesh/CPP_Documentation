#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:- "<<endl;
    cin >> n;
    char ch = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << ch++;
        }
        cout << endl;
    }
    return 0;
}

/*
Output :- 
    A
    BC
    DEF
    GHIJ
    KLMNO
*/