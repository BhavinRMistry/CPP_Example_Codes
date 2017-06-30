//June 29, 2017
/*
In this program we are defining variables using different data types.
Then we are displating their size using sizeof (dayaType) function.
We are also displaying the address of variables using &(variableName).
&: ampersand
*/

#include <iostream>

using namespace std;

int main()
{
    int n1 = 10, n2 = -43;
    short n3 = 32, n4 = -2433;
    long n5 = 435385, n6 = - 3492384;

    signed int n7 = -345, n8 = 8439;
    unsigned int n9 = 23000, n10 = 9;

    float r1 = 3.14, r2 = 22.0001;
    double r3 = 12345.67890, r4 = 0.00000000001;

    char c1 = 'X', c2 = 'Y';
    signed char c3 = 'X', c4 = 'Y';
    unsigned char c5 = 'X', c6 = 'Y';

    bool b1 = 4738 /* any non-zero value */, b2 = 0;
    bool b3 = true, b4 = false;

    cout << "A program to display size of different Datatypes and address of variables." << endl << endl;
    cout << "integer: " << sizeof (int) << " bytes" << endl;
    cout << "short ineteger: " << sizeof (short) << " bytes" << endl;
    cout << "long ineteger: " << sizeof (long) << " bytes" << endl;
    cout << "signed integer: " << sizeof (signed int) << " bytes" << endl;
    cout << "unsigned integer: " << sizeof (unsigned int) << " bytes" << endl;
    cout << "floating point: " << sizeof (float) << " bytes" << endl;
    cout << "double float: " << sizeof (double) << " bytes" << endl;
    cout << "boolean:" << sizeof (bool) << " bytes" << endl;
    cout << "character: " << sizeof (char) << " bytes" << endl;
    cout << "signed character: " << sizeof (signed char) << " bytes" << endl;
    cout << "unsigned character:" << sizeof (unsigned char) << " bytes" << endl << endl;

    cout << "Value: " << n1 << " Address: " << &n1 << endl;
    cout << "Value: " << n2 << " Address: " << &n2 << endl;
    cout << "Value: " << n3 << " Address: " << &n3 << endl;
    cout << "Value: " << n4 << " Address: " << &n4 << endl;
    cout << "Value: " << n5 << " Address: " << &n5 << endl;
    cout << "Value: " << n6 << " Address: " << &n6 << endl;
    cout << "Value: " << n7 << " Address: " << &n7 << endl;
    cout << "Value: " << n8 << " Address: " << &n8 << endl;
    cout << "Value: " << n9 << " Address: " << &n9 << endl;
    cout << "Value: " << n10 << " Address: " << &n10 << endl << endl;
    cout << "Value: " << r1 << " Address: " << &r1 << endl;
    cout << "Value: " << r2 << " Address: " << &r2 << endl;
    cout << "Value: " << r3 << " Address: " << &r3 << endl;
    cout << "Value: " << r4 << " Address: " << &r4 << endl << endl;
    cout << "Value: " << c1 << " Address: " << (void*)&c1 << endl;  //only &c1 will not give the address
    cout << "Value: " << c2 << " Address: " << (void*)&c2 << endl;  //for the address of character variable
    cout << "Value: " << c3 << " Address: " << (void*)&c3 << endl;  //always put (void*) before &
    cout << "Value: " << c4 << " Address: " << (void*)&c4 << endl;
    cout << "Value: " << c5 << " Address: " << (void*)&c5 << endl;
    cout << "Value: " << c6 << " Address: " << (void*)&c6 << endl << endl;
    cout << "Value: " << b1 << " Address: " << &b1 << endl;
    cout << "Value: " << b2 << " Address: " << &b2 << endl;
    cout << "Value: " << b3 << " Address: " << &b3 << endl;
    cout << "Value: " << b4 << " Address: " << &b4 << endl;

    return 0;
}
