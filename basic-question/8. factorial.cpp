#include<iostream>
using namespace std;
int main()
{
    long int num;
    long long int factorial = 1;
    cout <<"Enter the number:- ";
    cin >> num;
    for(long int i=num;i>0;i--)
    {
        factorial *= i;
    }
    cout << "Factorial of "<<num<<" is "<<factorial<<endl;
    return 0;
}