#ifndef ITEM_TO_calculate_H
#define ITEM_TO_calculate_H

#include <string>
using namespace std;

class Item {
private:
	double initial;
	double deposit;
	double interest;
	double years;
public:
	Item (double ainitial, double adeposit, double acost, double ayears);
	void setInitial(double ainitial);
	void setDeposit(double adeposit);
	void setInterest(double ainterest);
	void setYears(double ayears);
	double getInitial();
	double getDeposit();
	double getInterest();
	double getYears();

};
#endif