//June 29, 2017
//Simple program to display 'Hello world' on console without using namespace

#include <iostream>

main()
{
    std::cout << "Hello World!" << endl;

    /*
        Here, we didn't use namespace std.
        So we have to use std:: before cout.
        Everytime for console input-output operations we have to use std::
        That is why we are using 'using namespace std' before 'main' fucntion
    */
}
