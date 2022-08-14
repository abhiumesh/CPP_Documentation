#include<iostream>
using namespace std;
int main()
{
    int rupees;
    cout <<"Enter the rupees:- ";
    cin >> rupees;
    int hundred = 0,fifty = 0,twenty = 0,ten = 0;
    switch (1)
    {
    case 1:
        hundred = rupees/100;
        rupees = rupees%100;
    case 2:
        fifty = rupees/50;
        rupees = rupees%50;
    case 3:
        twenty = rupees/20;
        rupees = rupees%20;
    case 4:
        ten = rupees/10;
        rupees = rupees%10;
    }
    cout <<"Hundred Notes "<< hundred<<endl;
    cout <<"Fifty Notes "<< fifty<<endl;
    cout <<"twenty Notes "<< twenty <<endl;
    cout <<"Ten Notes "<<ten<<endl;
    return 0;
}