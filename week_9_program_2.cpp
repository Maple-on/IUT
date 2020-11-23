#include <iostream>

using namespace std;

int factorials(int fact)
{   
    int factorial = fact;
    for(int i = factorial - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    cout << factorial;
    return factorial;
}
// void fact_num(int fact)
// {

//     int myfact = factorials(fact);
//     cout << "the factorial of " << fact <<" is " << myfact << endl;
// }

int main()
{
    int number;
    cout << "Write a number to calculate its factorial\n";
    cin >> number;
    cout << "The factorial of "<< number << " is "; 
    factorials(number);
    cout << endl;

    system("pause");
    return 0;
}