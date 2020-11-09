/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the a Program to print stars Sequence 
*
***
*****

***/
#include <iostream>

using namespace std;

int main()
{   
  int num; // variable type of int
  cout << "Please enter an odd number\n";
  cin >> num;

  if (num % 2 == 0) // using if statement to check if it is odd or even
  {
    cout << "You have entered an even number, please enter the odd number instead\n";
  }else // using else statement if user enters odd number
  {
    // here I have used nested loops to print out the sequence of stars
    for (int i = 1; i <= num; i++) // usign first loop for the number of stars vertically(rows) 
    { 
      for (int h = 1; h <= i; h++) // usign second loop for the numbers of stars horizontally 
      {
        cout << "*"; // printing the stars
      }
      i++; // incrementing the value by one to get rid of even numbers
      cout << endl; // space after each new row
    }
  }
  system("pause");
  return 0; 
}