#include <iostream>  
using namespace std;  
int main()
{
    int number,total_sum=0;
    cout <<"Enter the number:- "<<endl;
    cin >> number;
    while(number!=0)
    {
        total_sum += number%10;
        number /= 10;
    }
    cout <<"Sum of digit:- "<<total_sum<<endl;
    return 0;
}