//  Find the sum of even element and product of odd element in array.
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
    int even_sum=0,odd_prdct=1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]&1)
        {
            odd_prdct *= arr[i];
        }
        else
        {
            even_sum += arr[i];
        }
    }
    cout <<"Sum of Even number in array:- "<<even_sum<<endl;
    cout <<"Product of Odd number in array:- "<<odd_prdct<<endl;

    return 0;
}