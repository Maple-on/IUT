/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to add first seven terms of the following series using for loop " 
***/
#include <iostream>

using namespace std;

int main()
{   
  double num, factorial,sum=0; // using vaiables type of double

  for (int i = 7; i >= 1; i--) // here I have used nested loops to find the sum
  {
    factorial = i;
    for(int j = factorial - 1; j > 0; j--) // here I have used nested loops to find the factorial
    {
        factorial = factorial * j;
    }
     sum = sum + i/factorial; // here i calculated the sum
  }
   cout << sum << endl; // printing the sum
  system("pause");
  return 0; 
}