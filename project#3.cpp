/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to Calculate Area of Equilateral Triangle " 
***/
#include <iostream>
#include <cmath>// Header file and library for maths functions 

using namespace std;

int main()
{
    double side1;// variable type of double

    cout << "Here you can Calculate Area of Equilateral Triangle \nType the side of your triangle:\n";
    cin >> side1;

    double area_of_equilateral_triangle = side1 * side1 * sqrt(3) / 4; // finding area of Area of Equilateral Triangle using arithmetic operators, function sqrt is used to find the root of the number 
    cout << "The area of the equilateral triangle with side " << side1 << " is " << area_of_equilateral_triangle << endl;


    system("pause");
    return 0;

}