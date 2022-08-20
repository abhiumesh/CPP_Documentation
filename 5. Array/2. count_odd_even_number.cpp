#include<iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter the size of Array:- "<<endl;
    cin >> size;
    int arr[size];
    cout <<"Now its time to enter the element in array:- "<<endl;
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    cout <<"Now we are counting the even and odd number in array:- "<<endl;
    int odd=0,even=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]&1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    cout <<"Total Even number in Array:- "<<even<<endl;
    cout <<"Total Odd number in Array:- "<<odd<<endl;
    return 0;
}