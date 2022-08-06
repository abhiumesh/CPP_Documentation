#include<iostream>
using namespace std;

int main()
{
    int a=10;
    float b= 2.5;
    char c = 'A';
    double d = 45.36;
    cout << "a - "<< a <<endl;
    cout << "b - "<< b <<endl;
    cout << "c - "<< c <<endl;
    cout << "d - "<< d <<endl;

    cout << "\n";

    cout << " size of interger - "<< sizeof(a)<<endl;
    cout << " size of float - "<< sizeof(b)<<endl;
    cout << " size of character - "<< sizeof(c)<<endl;
    cout << " size of double - "<< sizeof(d)<<endl;
    return 0;
}

