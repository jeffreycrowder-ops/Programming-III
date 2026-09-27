/*
 * mod2ct.cpp
 *
 *  Created on: Sep 27, 2026
 *      Author: Jeff
 */
#include <iostream>
#include <string>

using namespace std;

int main() {

    // loop to repeat the process+prompt 3 times
    for (int i = 1; i <= 3; i++) {

        cout << "Concatenate " << i << ": Please enter a string: ";
        string first;
        getline(cin, first);

        cout << "Please enter a second string: ";
        string second;
        getline(cin, second);

        // concatenate the two strings together, and adds a space in between for clarity
        string combined = first + " " + second;

        // prints the result
        cout << "Combined string: " << combined << endl << endl;
    }

    return 0;
}



