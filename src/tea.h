// tea.h

#ifndef TEA_H
#define TEA_H

#include "makeDrink.h"

/* makes a tea */
class Tea : public Drink
{
public:
	void addIngredient() override;
};

#endif // TEA_H