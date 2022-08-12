#include<iostream>
using namespace std;

int main()
{
    int a = 97;
    cout << "the value of a -> "<<a <<endl;
    // a = char(a);
    cout <<"After typecasting the value of a -> "<< char(a)<<endl; 

    char b = 'g';
    cout <<"The value of b -> "<< b <<endl;
    cout <<"After typecasting, The value of b -> "<<int(b)<<endl;
    return 0;
}

// ASCII VALUES----
// A to Z ---> 65 to 90
// a to z ---> 97 to 122