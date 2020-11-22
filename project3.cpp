/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to find greatest in 3 numbers" 
***/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3;
    cout << "Write three numbers\n";
    cin >> num1 >> num2 >> num3;
    double great = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3); // using conditional operators "?" and ":" to take the answer when the condition satisfies the condition and when it does not

    cout << "The greatest number is: " << great << endl;

    system("pause");
    return 0;
}