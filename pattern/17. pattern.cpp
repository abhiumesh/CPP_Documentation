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
        char ch = 'A'-1+i;
        for(int j=1;j<=n;j++)
        {
            cout << ch++;
        }
        cout << endl;
    }
    return 0;
}

/*
Pattern:- 
    ABCDE
    BCDEF
    CDEFG
    DEFGH
    EFGHI
*/