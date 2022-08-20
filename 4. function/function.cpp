// What is the function and why we use the function??
/* Function :- Function is the block of code, which is only executed when it called.
With the help of function, Piece of code is more readable and more accurate and redundency free also. 
*/
#include<iostream>
using namespace std;

bool isPrime(int a)
{
    bool ans = true;
    if(a==0 || a==1)
    {
        return false;
    }
    else
    {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                ans = false;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    int num;
    cout <<"Enter the number:- "<<endl;
    cin >> num;
    cout <<"Now we want to check, number is prime or not prime---->"<<endl;
    bool ans = isPrime(num);
    if(ans)
        cout <<"Enter Number is Prime."<<endl;
    else
        cout <<"Enter Number is not Prime."<<endl;

    return 0;
}