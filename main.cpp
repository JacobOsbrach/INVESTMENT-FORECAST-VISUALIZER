#include "pch.h"
#include <iostream>
using namespace std;

/* Jacob Osbrach, October 24 2023 */

/* The purpose of this activty is to prompt a user for his/her input to create a clock in a 12-hour & AM/PM format */

int m = 0, s = 0;
int input = 0;
int inputH = 0;
int inputM = 0;
int inputS = 0;
int newH1 = 0;
int newH = 0;


void time() /* This function ensures that the regular time (AM/PM) is calculated */
{
    while (newH >= 24)
    {
        newH1 = newH1 - 12;
        newH = newH - 24;
    }

    if (newH < 12)
    {
        cout << "**********************\n";
        cout << "* regular:  " << newH1 << ":" << m << ":" << s << " AM *" << "\n";
        cout << "**********************\n";
    }
    else if (newH > 12)
    {
        newH1 = newH - 12;
        cout << "**********************\n";
        cout << "* regular:  " << newH1 << ":" << m << ":" << s << " PM *" << "\n";
        cout << "**********************\n";
    }
    else {
        cout << "**********************\n";
        cout << "* regular:  " << newH1 << ":" << m << ":" << s << " PM *" << "\n";
        cout << "**********************\n";
    }
}

void twelveHour() /* This function resets the 12-hour time */
{
    while (newH >= 24) /* Every time the day resets it subtracts 24, this allows a user to keep adding time */
    {
        newH = newH - 24;
    }
        cout << "****************************\n";
        cout << "* Twelve hour time:  " << newH << ":" << m << ":" << s << " *" << "\n";
        cout << "****************************\n";
}

void call()
{
    cout << "Here is the current time: ";

    cout << newH << ":" << m << ":" << s << "\n\n"; /* displays null time */

    cout << "Enter a new time (in 12-hour format)\n\n";

    /* collecting user input */
    cout << "hours: ";
    cin >> newH;
    cout << "minutes: ";
    cin >> m;
    cout << "Seconds: ";
    cin >> s;
    cout << "\n";

    newH1 = newH;

    /* calls functions to calculate both times */
    time(); 
    twelveHour();
}


void callTwo()
{
    bool exit = false;
    while (exit = true) /* while loop to keep the proccess going */
    {
        /* displays menu */
        cout << "\n       Add time?\n\n";

        cout << "**********************\n";

        cout << "*   1: Add hours     *\n" << "*   2: Add Minutes   *\n" << "*   3: Add Seconds   *\n" << "*   4: exit          *\n";

        cout << "**********************\n\n";
        
        cout << "Selection: ";


        /* collects user input for menu and calls functions */
        cin >> input;
        if (input == 1)
        {
            cout << "\nHours: ";
            cin >> inputH;
            newH = inputH + newH;
            newH1 = inputH + newH1;
            cout << "\n";
            /* calls functions to calculate both times */
            time();
            twelveHour();
        }
        if (input == 2)
        {
            cout << "\nMinutes: ";
            cin >> inputM;
            m = inputM + m;
            cout << "\n";
            /* calls functions to calculate both times */
            time();
            twelveHour();
        }
        if (input == 3)
        {
            cout << "\nSeconds: ";
            cin >> inputS;
            s = inputS + s;
            cout << "\n";
            /* calls functions to calculate both times */
            time();
            twelveHour();
        }
        if (input == 4)
        {
            cout << "\nHave a good day\n\n";
            break; /* exists the loop */
        }
    }

}

int main() { /* Calls both functions, user input and menu loop */

    call();

    callTwo();
}

