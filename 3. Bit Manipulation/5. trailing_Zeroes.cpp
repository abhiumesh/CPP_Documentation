//Given an integer a, count and return the number of trailing zeroes.
// Let suppose, a = 18, 18 in binery no. - 10010, here 1 trailing zeroes.
#include<iostream>
using namespace std;
int main()
{
    int a,temp;
    cout << "Enter the number:- "<<endl;
    cin >> a;
    temp = a;
    int count = 0;
    while(a)
    {
        if(a&1)
        {
            break;
        }
        else
        {
            count++;
            a = a>>1;
        }
    }
    cout <<"Trailing Zeroes in "<<temp<<" is "<<count<<endl;
    return 0;
}