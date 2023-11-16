// makeDrink.cpp

#include "makeDrink.h"

    Drink::Drink() {
		step_ = {};
	}
    
    /* add water in the process */
	void Drink::addWater() {
		step_.push_back(WATER);
	}
	/* add sugar in the process */
	void Drink::addSugar() {
		step_.push_back(SUGAR);
	}
	
	vector<int>::iterator Drink::stepHead() {
		return step_.begin();
	}
	vector<int>::iterator Drink::stepEnd() {
		return step_.end();
	}