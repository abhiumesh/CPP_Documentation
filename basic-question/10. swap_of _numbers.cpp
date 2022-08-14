#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<"Enter the number(a and b respectivily):- "<<endl;
    cin >> a >> b;
    // we have two way to swap the number :- 
    // 1. using temp variable 
        // int temp = a;
        // a = b;
        // b = temp;
    // 2. using without temp variable
        // a = a+b;
        // b = a-b;
        // a = a-b;
    int temp = a;
    a = b;
    b = temp;
    cout <<"After swaping two number:- "<<endl;
    cout <<"Value of a:- "<< a<<endl;
    cout <<"Value of b:- "<< b<<endl;
    return 0;
}