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
    int key,count = 0;
    cout <<"Enter the Element:- "<<endl;
    cin >> key;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
    cout <<key<<", "<<count<<" times repeat in array"<<endl;

    return 0;
}