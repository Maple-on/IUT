/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to Calculate Area of Rectangle " 
***/
#include <iostream>

using namespace std;

int main()
{
    double side1,side2;// variables type of double

    cout << "Here you can Calculate Area of Rectangle \nType the sides of your rectangle:\n";
    cin >> side1 >> side2;

    double area_of_rectangle = side1 * side2; // finding the Area of Rectangle using arithmetic operators
    cout << "The area of the rectangle is: " << area_of_rectangle << endl;

    system("pause");
    return 0;
}