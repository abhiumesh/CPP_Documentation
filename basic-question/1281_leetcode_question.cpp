//Subtract the product and sum of digit of an integer 

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int product=1,sum=0;
    while(number!=0)
    {
        int last_digit = number%10;
        product *= last_digit;
        sum += last_digit;
        number = number/10;
    }
    cout << abs(sum-product);
    return 0;
}