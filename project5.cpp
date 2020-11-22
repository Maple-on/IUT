/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to find whether given no is even or odd." 
***/

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Please enter the number to check it\n";
    cin >> number;
    if (number % 2 == 0) // using "if" selection statement to check the condition is true or false
    {
        cout << "Your number " << number << " is even" << endl;

    }else // "else" statement runs when IF statement is false
    {
        cout << "Your number " << number << " is odd" << endl;        
    }
    system("pause");
    return 0;
}