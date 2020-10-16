/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to Calculate Area and Circumference of Circle " 
***/

#include <iostream>

using namespace std;

int main()
{   
    double radius; // variable type of double
    const double PI = 3.14; //constant veriable with type of double which collects float and whole numbers
    cout << "Here you can Calculate Area and Circumference of Circle\n Type the radius of your circle:\n ";
    cin >> radius;

    double area_of_circle = PI * radius * radius; // for calculating the area of circle using arithmetic operators
    cout << "The area of the circle with radius " << radius << " is: " << area_of_circle << endl;

    double circumference_of_circle = 2 * PI * radius; // for calculating the circumference of the circle using arithmetic operators
    cout << "The circumference of the circle with radius " << radius << " is " << circumference_of_circle << endl;

    system("pause");
    return 0;
}