#include <iostream>  
using namespace std;  
int main()
{
    int number1,number2,count=0;
    cout <<"Enter the number:- "<<endl;
    cin >> number1;
    number2 = number1;
    while(number1!=0)
    {
        int num = number1%10;
        count += (num*num*num);
        number1 /= 10;
    }
    if(count==number2)
    {
        cout <<"Enter number is Armstrong number"<<endl;
    }
    else
    {
        cout <<"Enter number is not Armstrong number"<<endl;
    }
    return 0;
}