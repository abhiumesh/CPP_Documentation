#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:- "<<endl;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        char ch = 'A'+i-1;
        for(int j=1;j<=n;j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}

/*
Output:- 
    AAAAA
    BBBBB
    CCCCC
    DDDDD
    EEEEE
*/