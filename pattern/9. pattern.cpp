#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the number:- "<<endl;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout <<j;
        }
        cout << endl;
    }
    return 0;
}

/*
output:- 
    1
    21
    321
    4321
    54321
    654321
*/