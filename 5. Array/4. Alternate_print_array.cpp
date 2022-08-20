#include<iostream>
using namespace std;
void AlternatePrintArray(int arr[],int n)
{
    cout <<"Elements of Alternate element in array:- "<<endl;
    for(int i=0;i<n;i+=2)
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
    AlternatePrintArray(arr,size);

    return 0;
}