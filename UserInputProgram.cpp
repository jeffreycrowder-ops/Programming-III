/*
 * UserInputProgram.cpp
 *
 *  Created on: Oct 18, 2026
 *      Author: Jeff
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// function to reverse a string
string reverseString(const string &text) {
    string reversed = text;
    int start = 0;
    int end = reversed.length() - 1;

    while (start < end) {
        char temp = reversed[start];
        reversed[start] = reversed[end];
        reversed[end] = temp;
        start++;
        end--;
    }

    return reversed;
}

int main() {

    // string inputs for user inputs
    string input1, input2, input3;

    // LOOP: keep asking until all inputs are valid
    while (true) {
        cout << "What is your name? ";
        getline(cin, input1);

        cout << "What is today's date? ";
        getline(cin, input2);

        cout << "What is your favorite color? ";
        getline(cin, input3);

        // check for empty inputs
        if (input1.empty() || input2.empty() || input3.empty()) {
            cout << "\nError: Please make sure inputs are not left blank." << endl;
            cout << "Please Try Again.\n\n";
        } else {
            break; // all inputs valid, exit loop
        }
    }

    // appends user input to the provided txt file
    ofstream outFile("CSC450_CT5_mod5.txt", ios::app);
    if (!outFile) {
        cerr << "Error opening CSC450_CT5_mod5.txt" << endl;
        return 1;
    }

    // write all inputs on their own lines
    outFile << "Name: " << input1 << endl;
    outFile << "Date: " << input2 << endl;
    outFile << "Favorite Color: " << input3 << endl;
    outFile << "-------------------------" << endl;

    outFile.close();

    // reads the entire file contents
    ifstream inFile("CSC450_CT5_mod5.txt");
    if (!inFile) {
        cerr << "Error opening CSC450_CT5_mod5.txt" << endl;
        return 1;
    }

    string fileContents;
    string line;
    while (getline(inFile, line)) {
        fileContents += line + "\n";
    }
    inFile.close();

    // checks to see if file is empty before reversing
    if (fileContents.empty()) {
        cerr << "Error: The file is empty, cannot reverse." << endl;
        return 1;
    }

    // reverses the file contents
    string reversedText = reverseString(fileContents);

    // writes the reversed text to a new file
    ofstream reverseFile("CSC450-mod5-reverse.txt");
    if (!reverseFile) {
        cerr << "Error opening CSC450-mod5-reverse.txt" << endl;
        return 1;
    }
    reverseFile << reversedText;
    reverseFile.close();

    cout << "CSC450_CT5_mod5.txt has been appended, and CSC450-mod5-reverse.txt has been created successfully!" << endl;

    return 0;
}
