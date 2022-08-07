#include<iostream>
using namespace std;

int main()
{
    int number1,number2,reverse_number=0;
    cout <<"Enter the number:- "<<endl;
    cin >> number1;
    number2 = number1;
    while(number1!=0)
    {
        reverse_number = reverse_number*10 + number1%10;
        number1 /= 10;
    }

    // Check the reverse_number is equal to number2 or not??
    if(reverse_number==number2)
    {
        cout <<"Enter Number comes under the palindrome"<<endl;
    }
    else
    {
        cout <<"Enter Number does not come under the palindrome"<<endl;
    }
    return 0;
}