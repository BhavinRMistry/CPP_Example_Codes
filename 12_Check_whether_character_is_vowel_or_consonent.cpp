//June 29, 2017
//Program to check whether entered character is vowel or consonent

#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Enter any character to check whether it is vowel or consonent:";
    cin >> c;

    if(c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e')
    {
        cout << "Entered charcter is vowel!" << endl;
    }
    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "Entered charcter is vowel!" << endl;
    }
    else
    {
        cout << "Entered character is consonent." << endl;
    }

    return 0;
}
