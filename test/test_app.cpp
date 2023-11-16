// test_app.cpp

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "tea.h"
#include "coffee.h"
#include "cappuccino.h"
#include "director.h"


/* testing components in tea */
TEST(DrinkTest, Tea)
{
	/* create tea object to be used for testing */
	Drink *tea_ = new Tea();
	/* director object to be used to make up tea */
	Director *director_ = new Director();
	/* make up tea */
	director_->makeDrink(tea_);
	/* test components that make up tea */
	auto item = tea_->stepHead();
	
	/* test water component */
	EXPECT_EQ(WATER, *item);
	/* move iterator one step ahead */
	item+=1;
	/* test sugar component */
	EXPECT_EQ(SUGAR, *item);
	/* move iterator one step ahead */
	item+=1;
	/* test tea component */
	EXPECT_EQ(TEA, *item);
}

/* testing components in coffee */
TEST(DrinkTest, Coffee)
{
	/* create coffee object to be used for testing */
	Drink *coffee_ = new Coffee();
	/* director object to be used to make up coffee */
	Director *director_ = new Director();
	/* make up coffee */
	director_->makeDrink(coffee_);
	/* test components that make up coffee */
	auto item = coffee_->stepHead();
	
	/* test water component */
	EXPECT_EQ(WATER, *item);
	/* move iterator one step ahead */
	item+=1;
	/* test sugar component */
	EXPECT_EQ(SUGAR, *item);
	/* move iterator one step ahead */
	item+=1;
	/* test coffee component */
	EXPECT_EQ(COFFEE, *item);
}

/* testing components in cappuccino */
TEST(DrinkTest, Cappuccino)
{
	/* create cappuccino object to be used for testing */
	Drink *cappuccino_ = new Cappuccino();
	/* director object to be used to make up cappuccino */
	Director *director_ = new Director();
	/* make up cappuccino */
	director_->makeDrink(cappuccino_);
	/* test components that make up cappuccino */
	auto item = cappuccino_->stepHead();
	
	/* test water component */
	EXPECT_EQ(WATER, *item);
	/* move iterator one step ahead */
	item+=1;
	/* test sugar component */
	EXPECT_EQ(SUGAR, *item);
	/* move iterator one step ahead */
	item+=1;
	/* test cappuccino component */
	EXPECT_EQ(CAPPUCCINO, *item);
}