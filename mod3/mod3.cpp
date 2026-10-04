/*
 * mod3.cpp
 *
 *  Created on: Oct 4, 2026
 *      Author: Jeff
 */

#include <iostream>
using namespace std;

// function to read a positive integer
int readPositiveInt(const string& prompt) {
    int value;

    while (true) {
        cout << prompt;

        // checks to see if input is an integer
        if (!(cin >> value)) {
            cout << "Invalid input, please enter a whole number.\n";
            cin.clear();            // clear error flag
            cin.ignore(1000, '\n'); // discard bad input
            continue;
        }

        // checks to make sure input is positive
        if (value <= 0) {
            cout << "Please enter a positive number.\n";
            continue;
        }

        return value;
    }
}

int main() {

    // asks the user for three integers
    int first, second, third;
    first = readPositiveInt("Please enter your first integer: ");
    second = readPositiveInt("Please enter your second integer: ");
    third = readPositiveInt("Please enter your third integer: ");

    // creates pointers in dynamic memory
    int* p1 = new int;
    int* p2 = new int;
    int* p3 = new int;

    // stores values in the pointers
    *p1 = first;
    *p2 = second;
    *p3 = third;

    // displays variable values
    cout << "\nThe values stored in variables:\n";
    cout << "First Value: " << first << endl;
    cout << "Second Value: " << second << endl;
    cout << "Third Value: " << third << endl;

    // displays pointer values and addresses
    cout << "\nThe values stored in dynamic memory:\n";
    cout << "*p1:" << *p1 << " (address: " << p1 << ")" << endl;
    cout << "*p2:" << *p2 << " (address: " << p2 << ")" << endl;
    cout << "*p3:" << *p3 << " (address: " << p3 << ")" << endl;

    // free memory
    delete p1;
    delete p2;
    delete p3;

    // avoid dangling pointers
    p1 = nullptr;
    p2 = nullptr;
    p3 = nullptr;

    // checks that pointers were set to nullptr after deleting memory
    if (p1 == nullptr && p2 == nullptr && p3 == nullptr) {
        cout << "\nMemory clean-up success!\n";
    }

    return 0;
}
