#include<iostream>
using namespace std;

// To understand the condtional statement, we use the if-else statement.
// if condition is true, then code under if statement is executed other wise code under the else statement is executed.

// we take a one example....(check number is positive or negative)
int main()
{
    int a;
    cout <<"Enter the number:- "<<endl;
    cin >> a ;
    if(a>0)
    {
        cout <<"Number is positive"<<endl;
    }
    else
    {
        cout <<"Number is negative"<<endl;
    }
}