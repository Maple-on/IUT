/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to Calculate Area of Right angle Triangle " 
***/
#include <iostream>

using namespace std;

int main()
{
    double side1,side2;// variables type of double

    cout << "Calculate Area of Right angle Triangle \nType the sides of your triangle:\n";
    cin >> side1 >> side2;

    double area_of_right_angle_triangle = side1 * side2 / 2; // finding the Area of Right angle Triangle using arithmetic operators
    cout << "The area of the right angle triangle is: " << area_of_right_angle_triangle << endl;


    system("pause");
    return 0;

}