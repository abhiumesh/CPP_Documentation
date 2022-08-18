// Question :- find the number of bits to change to convert num1 to num2;

#include<iostream>
using namespace std;
int main()
{
    int num1, num2,count = 0;
    cout <<"Enter the number:- "<<endl;
    cin >> num1 >> num2;
    int num = num1^num2;
    while(num)
    {
        if(num&1)
        {
            count++;
        }
        num = num>>1;
    }
    cout <<count<<" set of bits are required to change to convert "<<num1<<" to "<<num2<<endl;
}