#include<iostream>
using namespace std;

// To understand the switch statement, we take a one example.
// Vowel and consonent.
int main()
{
    char a;
    cout <<"Enter the character:- "<<endl;
    cin >> a;
    switch(a)
    {
        case 'a':
            cout <<"Vowel"<<endl;
            break;
        case 'e':
            cout <<"Vowel"<<endl;
            break;
        case 'i':
            cout <<"Vowel"<<endl;
            break;
        case 'o':
            cout <<"Vowel"<<endl;
            break;
        case 'u':
            cout <<"Vowel"<<endl;
            break;
        default:
            cout <<"Consonent"<<endl;
    }
    return 0;
}   