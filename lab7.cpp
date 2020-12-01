/***
Name: Bekhzod
My id: U2010280
Programs Statement: 
1. WAP to calculate area of following figures using function overloading: Area()
    1.	Circle
    2.	Rectangle
    3.	Triangle
    4.	Square
2. WAP to calculate circumference of the following figures using function overloading: circumference()
3.WAP using function overloading:
- To find largest among three integers
- To find largest among three floating point numbers
4. Convert  function template for  problem 3.
***/
#include <iostream>
#include <cmath>
using namespace std;

float Area()
{
    const float PI = 3.14; // constant variable tyoe of float
    int radius;
    cout << "Please enter a radius to calculate are of a circle:\n";
    cin >> radius;
    cout << "Area of a circle: ";
    return (PI * radius * radius);
}

int Area(int side1, int side2)
{
    return (side1 * side2);
}

double Area(int side1, int side2, int side3)
{
    double pirimeter = (side1+side2+side3)/2;
    double area = sqrt(pirimeter * (pirimeter - side1) * (pirimeter - side2) * (pirimeter - side3));
    return area;
}

int Area(int side1)
{
    return (side1 * side1);
}

double Circumference()
{
    const float PI = 3.14; // constant variable tyoe of float
    int radius;
    cout << "Please enter a radius to calculate a Circumference of a circle:\n";
    cin >> radius;
    cout << "Circumference of a circle: ";
    return (2* PI * radius);
}

int Circumference(int side1, int side2)
{
    return ( 2*(side1 + side2) );
}

double Circumference(int side1, int side2, int side3)
{
    return(side1+side2+side3);
}

int Circumference(int side1)
{
    return (4*side1);
}

int main()
{
    int choice; 
    float side1, side2, side3;
    do
    { 
        cout << " 1. First program\n 2. Second program\n 3. Third program\n 4. Fourth program\n 0. Quit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << Area() << endl;
            cout << "Please enter two sides of a rectangle to calculate its area:\n";
            cin >> side1 >> side2;
            cout << "Area of a rectangle: " << Area(side1,side2) << endl;
            cout << "Please enter three sides of a triangle to calculate its area:\n";
            cin >> side1 >> side2 >> side3;
            cout << "Area of a tringle: " << Area(side1,side2,side3) << endl;
            cout << "Please enter a side of a square to calculate its area:\n";
            cin >> side1;
            cout << "Area of a square: " << Area(side1) << endl;
            break;
        case 2:
            cout << Circumference() << endl;
            cout << "Please enter two sides of a rectangle to calculate its Circumference:\n";
            cin >> side1 >> side2;
            cout << "Circumference of a rectangle: " << Circumference(side1,side2) << endl;
            cout << "Please enter three sides of a triangle to calculate its Circumference:\n";
            cin >> side1 >> side2 >> side3;
            cout << "Circumference of a tringle: " << Circumference(side1,side2,side3) << endl;
            cout << "Please enter a side of a square to calculate its Circumference:\n";
            cin >> side1;
            cout << "Circumference of a square: " << Circumference(side1) << endl;
            break;
        case 3:
            
            break;
        case 4:
             
            break;
        case 0:
            return 0;
        default:
            cout << "Please choose possible options\n";
            break;
        }
    } while (choice != 0);

    system("pause");
    return 0;    
}