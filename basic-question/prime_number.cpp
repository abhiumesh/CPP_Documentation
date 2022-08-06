#include <iostream>  
using namespace std;  
int main()
{
    int a;
    bool check = true;
    cout <<"Enter the number:- "<<endl;
    cin >> a;
    if(a<2)
    {
        cout <<"Number is not prime number.s"<<endl;
    }
    else
    {
        for(int i=2;i<a;i++)
        {
            if(a%i==0){
                check = false;
                break;
            }
        }
        if(check==true)
        {
            cout <<"Number is Prime Number."<<endl;
        }
        else
        {
            cout <<"Number is not prime number."<<endl;
        }
    }
}
