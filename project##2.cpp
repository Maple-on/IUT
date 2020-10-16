/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to Calculate Area of Scalene Triangle " 
***/

#include <iostream> 
#include <cmath> // Header file and library for maths functions 

using namespace std;

int main()
{   
    double side1,side2,side3;// variables type of double

    cout << "Here you can Calculate Area of Scalene Triangle\nType the sides of your triangle:\n";
    cin >> side1 >> side2 >> side3;

    double pirimeter = (side1+side2+side3)/2; // finding half perimeter using arithmetic operators
    double area_of_scalene_triangle = sqrt(pirimeter * (pirimeter - side1) * (pirimeter - side2) * (pirimeter - side3));// finding area of scelene triangle using arithmetic operators, function sqrt is used to find the root of the number
    cout << "The area of the scalene triangle is: " << area_of_scalene_triangle << endl;


    system("pause");
    return 0;
}