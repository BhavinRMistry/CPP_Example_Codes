//June 29, 2017
/*
This program accepts coefficients of a quadratic equation from the user and displays the roots
(both real and complex roots depending upon the determinant).

To understand this example, you should have the knowledge of following C++ programming topics:

C++ if, if...else and Nested if...else
For a quadratic equation ax2+bx+c = 0 (where a, b and c are coefficients),
it's roots is given by following the formula.

Formula to find root of an quadratic equation
delta = (-b +- sqrt(b^2 - 4ac))/2a

The term b^2-4ac is known as the determinant of a quadratic equation.
The determinant tells the nature of the roots.

If determinant is greater than 0, the roots are real and different.
If determinant is equal to 0, the roots are real and equal.
If determinant is less than 0, the roots are complex and different.
*/

#include <iostream> //including input/output stream header file
#include <cmath>    //including match header file

using namespace std;

int main()
{
    float a, b, c, det, real, img, root1, root2;

    cout << "Enter the value of co-efficient of the quadratic equation." << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    det = pow(b, 2) - (4 * a * c);  //The term b^2-4ac is known as the determinant of a quadratic equation.
                                    //pow(base value, exponent value)

    cout << "Determinant = " << det << endl;

    if (det > 0)
    {
        cout << "The roots are real and different!" << endl;

        root1 = (-b + sqrt(det)) / (2 * a);
        root2 = (-b - sqrt(det)) / (2 * a);

        cout << "The roots are " << root1 << " and " << root2 << endl;
    }
    else if (det == 0)
    {
        cout << "The roots are real and equal!" << endl;

        root1 = (-b + sqrt(det)) / (2 * a);

        cout << "The roots are " << root1 << " and " << root1 << endl;
    }
    else
    {
        cout << "The roots are complex and different!" << endl;

        img = sqrt(-det) / (2 * a);
        real = -b / (2 * a);

        cout << "The complex roots are " << real << " + " << img << " i and " << real << " - " << img << " i";
    }

    return 0;
}
