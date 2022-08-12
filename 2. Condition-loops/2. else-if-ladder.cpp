#include<iostream>
using namespace std;

// To understand the else-if ladder, we take one example.
// student and them marks...

int main()
{
    int marks;
    cout <<"Enter the marks :- "<<endl;
    cin >> marks;
    if(marks>90)
    {
        cout <<"<<You got A grade"<<endl;
    }
    else if(marks>75)
    {
        cout <<"You gor B grade"<< endl;
    }
    else if(marks>60)
    {
        cout <<"You got C grade"<<endl;
    }
    else if(marks>35)
    {
        cout <<"You got D grade"<<endl;
    }
    else
    {
        cout <<"Better luck next time"<<endl;
    }
    return 0;
}