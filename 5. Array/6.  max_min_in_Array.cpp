#include<bits/stdc++.h>
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
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0;i<size;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    cout <<"Maximum element in Array is "<< max<<endl;
    cout <<"Minimum element in Array is "<<min<<endl;
    return 0;
}