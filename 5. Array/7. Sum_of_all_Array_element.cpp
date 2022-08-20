#include<iostream>
using namespace std;
void SumOfArrayElement(int arr[],int n)
{
    int Total = 0;
    for(int i=0;i<n;i++)
    {
        Total += arr[i];
    }
    cout <<"Sum of Array Element is "<< Total <<endl;
}
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
    SumOfArrayElement(arr,size);
    return 0;
}