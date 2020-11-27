/***
Name: Bekhzod
My id: U2010280
Programs Statement: 
1. Program in C++ to calculate area of a circle using functions(Write a function with no arguments and no return type)
2. Program in C++ to find factorial of a number using functions(Write a function with arguments and return type).
3. Program in C++ to convert time to minutes using functions(Write a function with arguments but no return type).
4. Program in C++ to sum the series (Write a Function with return type but no arguments)
***/
#include <iostream>
#include <cmath> // using library cmath to be able to use pow() function
using namespace std;

//function definition and declaration in one
void calc_area_of_circle() // using void function to write a function without arguments and return type
{   
    const float PI = 3.14; // constant variable tyoe of float
    int radius;
    cout << "Please enter a radius to calculate are of a circle\n";
    cin >> radius;
    float area_of_circle = PI * radius * radius;
    cout << "The area of the circle with radius " << radius << " is: " << area_of_circle << endl;
}

//function definition and declaration in one
int factorials(int fact) // using function type of integer with argument fact and return type
{   
    int factorial = fact;
    for(int i = factorial - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
//function definition and declaration in one
void convert(int hours, int minutes, int seconds)  // using void function to write a function with no return type but with three arguments 
{   
    int sum;
    hours = hours * 60;
    seconds = seconds / 60;
    sum = hours + minutes + seconds;
    cout << hours << " + " << minutes << " + " << seconds << " = " << sum << endl;
}

//function definition and declaration in one
double sum_of_series() // using function type of double with no arguments but with reply type
{
    double number; // variable type of double
    double sum = 0;
    cout << " Please write a number to calculate its series up to this number\n";
    cin >> number;

    for (int i = number; i > 0; i--)
    {
        sum = sum + (pow(number, number) / factorials(number)); // using pow() function and calling and using factorials function
        number = number - 1;
    }
    return sum;
}

int main()
{   
    int choice,number, num2, num3; 
    do
    { 
        cout << " 1. First program\n 2. Second program\n 3. Third program\n 4. Fourth program\n 0. Quit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            calc_area_of_circle(); // calling function
            break;
        case 2:
            cout << "Please write a number to calculate its factorial:\n";
            cin >> number;
            cout << "The factorial of " << number << " is " << factorials(number); // calling and printing the return of a function 
            break;
        case 3:
            cout << "Please write hours, minutes and seconds in this order\n";
            cin >> number >> num2 >> num3;
            convert(number, num2, num3); // calling function and giving arguments inside of it
            break;
        case 4:
            cout << "Sum of series: " << sum_of_series() << endl; // calling and printing the return of a function 
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