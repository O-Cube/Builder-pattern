// drink.cpp

#include "director.h"

void Director::makeDrink(Drink *drink) {
		drink->addWater();
		drink->addSugar();
		drink->addIngredient();
}