/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to Calculate Area of Square " 
***/
#include <iostream>

using namespace std;

int main()
{
    double side1;// variable type of double

    cout << "Here you can Calculate Area of Square  \nType the side of your square:\n";
    cin >> side1;

    double area_of_square = side1 * side1; // finding the Area of Square using arithmetic operators
    cout << "The area of the square is: " << area_of_square << endl;

    system("pause");
    return 0;
}