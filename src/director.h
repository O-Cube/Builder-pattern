// director.h

#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "tea.h"
#include "coffee.h"
#include "cappuccino.h"

/* sequentially calls the steps necessary to make a drink */

class Director 
{
public:
	void makeDrink(Drink *drink);
};
#endif // DIRECTOR_H