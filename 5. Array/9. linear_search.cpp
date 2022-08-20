#include<iostream>
using namespace std;
bool Linear_Search_Array(int arr[], int n, int num)
{
    for(int i=0;i<n;i++)
    {
        if(num == arr[i])
            return true;
    }
    return false;
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
    int num;
    cout <<"Enter the number:- "<<endl;
    cin >> num;
    bool result = Linear_Search_Array(arr,size,num);
    if(result)
    {
        cout <<"Element Founded"<<endl;
    }
    else
    {
        cout <<"Element not Founded"<<endl;
    }
    return 0;
}