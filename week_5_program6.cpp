/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the a Program to print stars Sequence 
*
**
***
****
*****
*****
****
***
**
* 
***/
#include <iostream>

using namespace std;

int main()
{   
    cout << "You have entered an even number, please enter the odd number instead\n";
    // here I have used nested loops to print out the sequence of stars from 1 to 5
    for (int i = 1; i <= 5; i++) // usign first loop for the number of stars vertically 
    { 
      for (int h = 1; h <= i; h++) // usign second loop for the numbers of stars horizontally(rows) 
      {
        cout << "*"; // printing the stars
      }
      cout << endl; // space after each new row
    }
    // here I have used nested loops to print out the sequence of stars from 5 to 1
    for (int i=5; i >= 1; i--) // usign first loop for the number of stars vertically 
    { 
      for (int h = 1; h <= i; h++) // usign second loop for the numbers of stars horizontally 
      {
        cout << "*"; // printing the stars
      }
      cout << endl;// space after each new row
    }
  system("pause");
  return 0; 
}