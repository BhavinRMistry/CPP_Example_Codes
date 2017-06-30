//June 29, 2017
//Program to perform  multiplication of two numbers entered by user

#include <iostream>

using namespace std;

int main()
{
    float r1, r2, mul;

    cout << "---Program  to multiply any two real numbers---" << endl << endl;
    cout << "Enter any two real numbers: ";
    cin >> r1 >> r2;

    mul = r1 * r2;  //multiplication

    cout << r1 << " x " << r2 << " = " << mul << endl;

    return 0;
}
