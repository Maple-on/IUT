/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to find that entered year is leap year or not." 
***/

#include <iostream>

using namespace std;

int main()
{
    int leap_year;
    cout << "Enter a year to chech it\n";
    cin >> leap_year;

    if (leap_year % 400 == 0)  // using if selection statement to check the condition is true or false
    {
        cout << "It is a leap year\n";    
        
    }
    else if (leap_year % 4 == 0 && leap_year % 100 != 0)  // using "else if" double selection statement to check the condition is true or false and using conditional operator "!" to check that it does not equal
    {
        cout << "It is a leap year\n";
    }
    else // "else" statement runs when IF statement is false
    {
    cout << "It is not a leap year\n";
    }
    
    system("pause");
    return 0;
}