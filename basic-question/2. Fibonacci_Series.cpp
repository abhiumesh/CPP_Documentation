#include <iostream>  
using namespace std;  
int main()
{
    int number;
    cout <<"Enter the number of element :- ";
    cin >> number;
    int a = 0,b = 1,c;
    cout << a <<" "<<b;
    for(int i=2;i<number;i++)
    {
        c = a+b;
        cout <<" "<<c;
        a = b;
        b = c;
    }
    return 0;
}