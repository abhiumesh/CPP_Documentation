/*
 Looping----> 1. Entry controlled loop--> 1. while loop 2. for loop
              2. Exit controlled loop--> 1. do-while loop

To understand the looping system, we take a one example
Write a dynamic table..
*/

#include <iostream>
using namespace std;

int main()
{
    int number, i = 1;
    cout << "Enter the number :- " << endl;
    cin >> number;
    cout << "Using While loop" << endl;
    while (i <= 10)
    {
        cout << number << "*" << i << "=" << (number * i) << endl;
        i++;
    }

    cout << endl;

    cout << "Using for loop" << endl;
    for (int i = 1; i < 11; i++)
    {
        cout << number << "*" << i << "=" << (number * i) << endl;
    }

    cout << endl;

    cout << "Using Do-While loop" << endl;
    int j = 1;
    do
    {
        cout << number << "*" << j << "=" << (number * j) << endl;
        j++;
    } while (j <= 10);
    return 0;
}
