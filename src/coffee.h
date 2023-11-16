// coffee.h

#ifndef COFFEE_H
#define COFFEE_H

#include "makeDrink.h"

/* makes a coffee */
class Coffee : public Drink
{
public:
	void addIngredient() override;
};

#endif // COFFEE_H