/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to calculate pow(x,n) i.e. to calculate xn  " 
***/
#include <iostream>

using namespace std;

int main()
{   
    int base, exponent, result = 1; // int type variables
    cout << "Please write base and exponent\n";
    cin >> base >> exponent;
    for(int i = 0; i < exponent; i++ ) // using for loop to calculate base in power of exponent
    {
        result = result * base;
    }
    cout << result << endl; // printing the result
    system("pause");
    return 0;
}