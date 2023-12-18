#include "pch.h"

#include <iostream>
using namespace std;


Item::Item(double ainitial, double adeposit, double ainterest, double ayears)
{
    setInitial(ainitial);
    setDeposit(adeposit);
    setInterest(ainterest);
    setYears(ayears);
}
void Item::setInitial(double ainitial) {
    
    initial = ainitial;
}
void Item::setDeposit(double adeposit) {
    deposit = adeposit;
}
void Item::setInterest(double ainterest) {
    interest = ainterest;
}
void Item::setYears(double ayears) {
    years = ayears;
}
double Item::getDeposit() {

    if (typeid(deposit).name() == "c")
    {
        deposit = NULL;
    }
    else

    return deposit;
}
double Item::getInterest() {

    if (typeid(interest).name() == "c")
    {
        interest = NULL;
    }
    else
    return interest;
}
double Item::getInitial() {

    if (typeid(initial).name() == "c")
    {
        initial = NULL;
    }
    else
        return initial;
    
}
double Item::getYears() {

    if (typeid(years).name() == "c")
    {
        years = NULL;
    }
    else
    return years;
}
