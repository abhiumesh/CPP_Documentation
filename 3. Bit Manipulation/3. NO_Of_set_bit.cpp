#include<iostream>
using namespace std;
int main()
{
    int num,temp;
    cout <<"Enter the number:- "<<endl;
    cin >> num;
    temp = num;
    int count = 0;
    while(num!=0)
    {
        if(num&1)
        {
            count++;
        }
        num = num >>1;
    }
    cout <<"Number of set bit in "<<temp<< " is "<<count <<endl;
    return 0;
}