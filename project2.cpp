/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to show swap of two no’s without using third variable" 
***/
#include <iostream>

using namespace std;

int main()
{
    double x,y;

    cout << "Enter the number for X\n";
    cin >> x;
    cout << "Enter the number for Y\n";
    cin >> y;
    y = x++;

    cout << "X= " << x << endl << "Y= " << y << endl;

    system("pause");
    return 0;



}