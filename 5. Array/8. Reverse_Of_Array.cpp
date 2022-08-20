#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int n)
{
    cout <<"Reverse the Array:- "<<endl;
    int start = 0,end = n-1;
    while(start<=end)
    {
        swap(arr[start++],arr[end--]);
    }
}

void PrintArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
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
    ReverseArray(arr, size);
    PrintArray(arr, size);
    return 0;
}