// makeDrink.h

#ifndef MAKEDRINK_H
#define MAKEDRINK_H

#include <vector>

using namespace std;

/* enumeration of the items that are going to be used to produce the different drinks */

enum { WATER = 1,
       SUGAR,
	   TEA,
	   COFFEE,
       CAPPUCCINO };

class Drink {
public:
    Drink();
	void addWater();
	void addSugar();
	virtual void addIngredient() = 0;
	/* to be used to loop through contents of step_ */
	vector<int>::iterator stepHead();
	vector<int>::iterator stepEnd();
protected:
    vector<int> step_;
};

#endif // MAKEDRINK_H