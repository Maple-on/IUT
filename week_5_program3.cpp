/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the a Program to print stars Sequence
*
**
***
****
***** 

***/
#include <iostream>

using namespace std;

int main()
{   
  // here I have used nested loops to print out the sequence of stars
  for (int i = 1; i <= 5; i++) // usign first loop for the number of stars vertically(rows)
  { 
    for (int h = 1; h <= i; h++)// usign second loop for the number of stars horizontally 
    {
      cout << "*"; // printing the stars
    }
    cout << endl; // space after each new row
  }
  system("pause");
  return 0;
}