//June 29, 2017
/*
This example contains two different techniques to swap numbers in C programming.
The first program uses temporary variable to swap numbers,
whereas the second program doesn't use temporary variables.
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 10, c, p = 20, q = 30;

    cout << "----Program to swap two variables----" << endl << endl;
    cout << "Method: 1" << endl;
    cout << "Before swap!" << endl;
    cout << "A = " << a << " and B = " << b << endl;

    c = b;
    b = a;
    a = c;

    cout << "After swap!" << endl;
    cout << "A = " << a << " and B = " << b << endl << endl;

    cout << "Method: 2" << endl;
    cout << "Before swap!" << endl;
    cout << "P = " << p << " and Q = " << q << endl;

    p = p + q;  //p = 50, q = 30
    q = p - q;  //p = 50, q = 20
    p = p - q;  //p = 30, q = 20

    cout << "After swap!" << endl;
    cout << "P = " << p << " and Q = " << q << endl;

    return 0;

}
