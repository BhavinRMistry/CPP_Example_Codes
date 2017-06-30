//June 30, 2017
/*
The factorial of a positive integer n is equal to 1*2*3*...n.
You will learn to calculate the factorial of a number using for loop in this example.
*/

#include <iostream>

using namespace std;

int main()
{
    int i, n, factor = 1;

    cout << "---Program to find factorial of any integer number---" << endl << endl;
    cout << "Enter any integer number n: " ;
    cin >> n;

    for (i = 1; i <= n; i++){

        factor *= i;
    }

    cout << "The factorial of " << n << " = " << factor << endl;

    return 0;
}
