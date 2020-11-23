#include <iostream>

using namespace std;

const double PI = 3.14;

void calc_area_of_circle(double radius)
{   
    double area_of_circle = PI * radius * radius;
    cout << "The area of the circle with radius " << radius << " is: " << area_of_circle << endl;
}

int main()
{
    double number;
    cout << "Write a number to calculate radius of a circle\n";
    cin >> number;
    calc_area_of_circle(number);

    system("pause");
    return 0;
}