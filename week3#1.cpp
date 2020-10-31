/***
Name: Bekhzod
My id: U2010280
Program Statement: It is a Program to convert temperature from degree centigrade to Fahrenheit" 
***/

#include <iostream>

using namespace std;

int main()
{
    double temperature;
    double fahrenheit;
    int choice;
    cout << "Enter the temperature\n";
    cin >> temperature;

    cout << "Is it in degree centigrade or in degree Fahrenheit ?\n 1. Centigrade \n 2. Fahrenheit\n";
    cin >> choice;
    if (choice == 1) // using "if" selection statement to check the condition is true or false
    {   
        fahrenheit = ( temperature * 9/5) + 32; // making calculations 
        cout << "The temperature in Fahrenheit is:" << fahrenheit << " F" << endl;

    }else if (choice == 2) // using "else if" double selection statement to check the condition is true or false
    {
        temperature = (temperature - 32) * 5/9; // making calculations 
        cout << "The temperature in degree centigrade is:" << temperature << " C" << endl;
    }
system("pause");
return 0;

}