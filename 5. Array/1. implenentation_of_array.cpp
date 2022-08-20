#include<iostream>
using namespace std;
void PrintArray(int arr[],int n)
{
    cout <<"Elements of array:- "<<endl;
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
    PrintArray(arr,size);

    return 0;
}