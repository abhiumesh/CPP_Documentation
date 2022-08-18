#include<iostream>
using namespace std;
int main()
{
    int a;
    cout <<"Enter the number:- "<<endl;
    cin >> a;
    if(a&1)
    {
        cout <<"Number is odd"<<endl;
    }
    else
    {
        cout <<"Number is even"<<endl;
    }
    return 0;
}