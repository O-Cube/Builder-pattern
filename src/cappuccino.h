// cappuccino.h

#ifndef CAPPUCCINO_H
#define CAPPUCCINO_H

#include "makeDrink.h"

/* makes a cappuccino */
class Cappuccino : public Drink
{
public:
	void addIngredient() override;
};

#endif // CAPPUCCINO_H