#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "/home/zhangshukai/desk/11/meat/include/meat.h"
#include "/home/zhangshukai/desk/11/vegetable/include/vegetable.h"

class People
{
public:
    People();
    People(std::string name);
    People(std::string name,int money,int level);
    People(std::string name,int money,int level,int priceUpTimes,int priceDownTimes);
    void addMoney(int add);
    void buy(int vegetableLabel,int meatLabel);
    void makeRecipe();
    void peopleInfo();
    void changePrices();

private:
    std::string name_;
    int money_;
    int cookingLevel_;
    int recipeRank_;
    std::vector<bool> foods_;
    Meat* ptr_meat_;
    Vegetable* ptr_vegetable_;
    bool status_;
    int priceUpTimes_;
    int priceDownTimes_;
};