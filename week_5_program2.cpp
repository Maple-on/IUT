/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to print the reverse of a number  " 
***/
#include <iostream>

using namespace std;

int main()
{   
    int num,result; // int type variable
    cout << "Please write a number to reverse it\n";
    cin >> num;
    if (num == 0) // using if statement to check if the number is equal to 0 or not
    {
      cout << num << endl;
    }
    else if( num < 0) // using if statement to check if the number is negative
    {
      cout << "Your number " << num << " is negative\n";
    }
    else
    {
      while (num > 0) // using while loop to find each number and reverse it
      {
        result = num % 10;
        num = num / 10;
        cout << result;
      }
      cout << endl;
    }
    system("pause");
    return 0;
}