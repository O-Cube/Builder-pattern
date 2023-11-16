// main.cpp

#include <iostream>

#include "tea.h"
#include "coffee.h"
#include "cappuccino.h"
#include "director.h"

int main() {
	
	Drink *tea = new Tea();
	Drink *coffee = new Coffee();
	Drink *cappuccino = new Cappuccino();
	
	/* director object to be used to make drink from start to end */
	Director director;
	
	director.makeDrink(tea);
	director.makeDrink(coffee);
	director.makeDrink(cappuccino);
	
	/* loop through different components that make tea */
	auto item = tea->stepHead();
	while (item != (tea->stepEnd())) {
		cout << *item << "\n";
		item++;
	}
	
	/* loop through different components that make coffee */
	item = coffee->stepHead();
	while (item != (coffee->stepEnd())) {
		cout << *item << "\n";
		item++;
	}
	
	/* loop through different components that make cappuccino */
	item = cappuccino->stepHead();
	while (item != (cappuccino->stepEnd())) {
		cout << *item << "\n";
		item++;
	}
	
	return(0);
}