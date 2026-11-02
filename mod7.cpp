/*
 * mod7.cpp
 *
 *  Created on: Oct 31, 2026
 *      Author: Jeff
 */

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// the thread function to count from 0 to 20
void countUp()
{
    cout << "Thread 1 Start: Begin Counting Up to 20" << endl;

    for (int i = 0; i <= 20; i++)
    {
        cout << i << endl;

        // pauses execution for 250 milliseconds between counts for better count visibility
        this_thread::sleep_for(chrono::milliseconds(250));
    }
}

// the thread function to count from 20 to 0
void countDown()
{
    cout << "Thread 2 Start: Begin Counting Down to 0" << endl;

    for (int i = 20; i >= 0; i--)
    {
        cout << i << endl;

        // pauses execution for 250 milliseconds between counts for better count visibility
        this_thread::sleep_for(chrono::milliseconds(250));
    }
}

int main()
{
    cout << "Launching Counter Application!" << endl;

    // create the first thread
    thread thread1(countUp);

    // waits for thread 1 to finish
    thread1.join();

    // creates a second thread
    thread thread2(countDown);

    // waits for thread 2 to finish
    thread2.join();

    cout << "Program Complete!" << endl;

    return 0;
}


