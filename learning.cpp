// learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //variabls
    int first_number;
    int second_number;
    int signs;
    //variabls
    //head line
    cout << "Calculator\n";
    //head line
    //inputs & outputs
    cout << "please enter the first number: ";
    cin >> first_number;
    cout << "please enter the second number: ";
    cin >> second_number;
    cout << "1  +\n"<<"2  -\n"<<"3  *\n"<<"4  /\n";
    cout << "Enter any number from 1 to 4: ";
    cin >> signs;
    //inputs & outputs
    // switch statement
    switch (signs)
    {
    case 1:
        cout << "the sum= " << first_number + second_number;
        break;
    case 2:
        cout << "the subtract= " << first_number - second_number;
        break;
    case 3:
        cout << "the multiplication= " << first_number * second_number;
        break;
    case 4:
        cout << "the devide= " << first_number / second_number;
    default:
        cout << "sorry we don't have any results about that";
        break;
    }
}
