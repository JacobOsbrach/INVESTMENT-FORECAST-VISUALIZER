#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Jacob Osbrach, 11/18/2023

// Purpose of this programs is to build a shopping calculate and calculate costs using OOP

double a, b, c, d, e, t;
int m;
double amount = 0;
double initial = 0;
double amountTwo = 0;
double initialTwo = 0;
double InterestCheck;
double totalcheck;
double totalcheckTwo;
int yearcheck;
double yearsEarned;



// this calculates the balance and interest using user input
void calculateall() {

    Item calculate(a, b, c, d);
    // sets the variables into the the main method from getters and setters 
    calculate.setInitial(a);
    calculate.setDeposit(b);
    calculate.setInterest(c);
    calculate.setYears(d);

    // these grab vairables from the getters once user input has been validated
    double InterestCheck = calculate.getInterest();
    double totalcheck = calculate.getInitial();
    double totalcheckTwo = calculate.getInitial();
    double depositCheck = calculate.getDeposit();
    int yearcheck = calculate.getYears();

    // loop to calculate based on years. Also doubles the years to trigger the second IF statement and run calculations 
    for (int m = 1; m <= 2 * calculate.getYears(); m++)
    {
        if (m <= yearcheck) // first calculates with monlthy deposites
        {
            yearsEarned = 0; // resets so new year can be calculated
            for (int l = 1; l <= 12; l++)
            {


                amount = (totalcheck + depositCheck) * (InterestCheck / 12); // calculates interest

                totalcheck = amount + totalcheck + depositCheck; // takes the calculated interest and adds it to the deposit

                yearsEarned = yearsEarned + amount; // adds up yearly earned interest

                if (l == 12)
                {
                    cout << "      " << m << "         " << fixed << setprecision(2) << totalcheck; cout << "                   ";
                    cout << yearsEarned; cout << "\n";
                }
            }
        }

        if (m >= 2 * yearcheck) // triggers after the calculation with monthly deposits is finished
        {
            cout << "\n\n   Balance and interest without additional Monthly Deposites\n";
            cout << "  ===========================================================\n";
            cout << "    year    " << "year and balance       " << "Year and Earned Interest\n";
            cout << "  ===========================================================\n";
            for (int u = 1; u <= calculate.getYears(); u++)
            {
                amountTwo = totalcheckTwo * InterestCheck;
                totalcheckTwo = amountTwo + totalcheckTwo;

                cout << "      " << u << "         " << fixed << setprecision(2) << totalcheckTwo; cout << "                      ";
                cout << amountTwo; cout << "\n";
            }
        }



    }
}



// this asks for user input
void userInput() {
    cout << "**************************\n";
    cout << "****** Data Input ********\n";
    cout << "Initial investment amount:\n";
    cin >> a;
    cout << "Monthly Deposit:\n";
    cin >> b;
    cout << "Annual Interest:\n";
    cin >> t;
    cout << "Number of years:\n";
    cin >> d;

    c = t / 100;


    Item calculate(a, b, c, d);


    // sets the variables into getters and setters 
    calculate.setInitial(a);
    calculate.setDeposit(b);
    calculate.setInterest(c);
    calculate.setYears(d);

    // these grab vairables from the getters once user input has been validated
    double InterestCheck = calculate.getInterest();
    double totalcheck = calculate.getInitial();
    double totalcheckTwo = calculate.getInitial();
    int yearcheck = calculate.getYears();


    cout << "\n\n     Balance and interest with additional Monthly Deposites\n";
    cout << "  ===========================================================\n";
    cout << "    year    " << "year and balance       " << "Year and Earned Interest\n";
    cout << "  ===========================================================\n";
}




int main() {
    

    userInput();

    calculateall();

    return 0;

}
