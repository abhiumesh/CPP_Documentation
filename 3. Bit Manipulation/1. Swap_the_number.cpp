#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<"Enter the number:- "<<endl;
    cin >> a >> b;
    cout <<"Before swaping ---> "<<endl;
    cout <<"Value of a = "<< a << endl;
    cout <<"Value of b = "<< b << endl;
    cout <<"After swaping ---> "<<endl;
    // There are three approch to solve this question
    // 1. using temp variable
        // int temp;
        // temp = a;
        // a = b;
        // b = temp;
    // 2. Without using temp variable 
        // a = a+b;
        // b = a-b;
        // a = a-b;
    // 3. using bit manipulation 
    a = a^b;
    b = a^b;
    a = a^b;
    cout <<"Value of a = "<< a << endl;
    cout <<"Value of b = "<< b << endl;
    return 0;
}