#include "../include/people_single.h"

People::People()
{
    this->name_ = "AAAA";
    this->money_ = 0;
    this->cookingLevel_ = 0;
    this->recipeRank_ = 0;
    this->foods_.resize(2);
    this->ptr_meat_ = new Meat();
    this->ptr_vegetable_ = new Vegetable();
    this->status_ = false;
    this->priceUpTimes_ = 0;
    this->priceDownTimes_ = 0;
}
People::People(std::string name){
    this->name_ = name;
    this->money_ = 20;
    this->cookingLevel_ = 1;
    this->recipeRank_ = 0;
    this->foods_.resize(2);
    this->ptr_meat_ = new Meat();
    this->ptr_vegetable_ = new Vegetable();
    this->status_ = false;
    this->priceUpTimes_ = 0;
    this->priceDownTimes_ = 0;
}
People::People(std::string name,int money,int level)
{
    this->name_ = name;
    this->money_ = money;
    this->cookingLevel_ = level;
    this->recipeRank_ = 0;
    this->foods_.resize(2);
    this->ptr_meat_ = new Meat();
    this->ptr_vegetable_ = new Vegetable();
    this->status_ = false;
    this->priceUpTimes_ = 0;
    this->priceDownTimes_ = 0;
}
People::People(std::string name,int money,int level,int priceUpTimes,int priceDownTimes)
{
    this->name_ = name;
    this->money_ = money;
    this->cookingLevel_ = level;
    this->recipeRank_ = 0;
    this->foods_.resize(2);
    this->ptr_meat_ = new Meat();
    this->ptr_vegetable_ = new Vegetable();
    this->status_ = false;
    this->priceUpTimes_ = priceUpTimes;
    this->priceDownTimes_ = priceDownTimes;
}
void People::addMoney(int add)
{
    this->money_ += add;
}
void People::buy(int vegetableLabel,int meatLabel)
{
    int meatPrice = (*ptr_meat_).seePrice(meatLabel);
    int vegetablePrice = (*ptr_vegetable_).seePrice(vegetableLabel);
    if(money_ >= meatPrice){
        money_ -= meatPrice;
        std::cout << name_ << " buy meat successfully" << std::endl;
        foods_[0] = true;
    }
    else{
        std::cout << name_ << " buy meat fail" << std::endl;
    }
    if(money_ >= vegetablePrice){
        money_ -= vegetablePrice;
        std::cout << name_ << " buy vegetable successfully" << std::endl;
        foods_[1] = true;
    }
    else{
        std::cout << name_ << " buy vegetable fail" << std::endl;
    }
}
void People::makeRecipe(){
    int levelRequired = 0;
    levelRequired += foods_[0]?2:0;
    levelRequired += foods_[1]?1:0;
    if(cookingLevel_ >= levelRequired){
        recipeRank_ = levelRequired;
        status_ = true;
    }
}
void People::peopleInfo()
{
    makeRecipe();
    std::cout << "This is " << name_ << std::endl;
    std::cout << "He now still has " << money_ << " dollars" << std::endl;
    if(status_){
        std::cout << "His recipe can get " << recipeRank_ << " grades" << std::endl;
    }
    else{
        std::cout << "It's a pity that he cannot finish his recipe" << std::endl;
    }
}
void People::changePrices()
{
    for(int i = 1; i <= priceUpTimes_; i++){
        (*ptr_meat_).priceUp();
        (*ptr_vegetable_).priceUp();
    }
    for(int i = 1; i <= priceDownTimes_; i++){
        (*ptr_meat_).priceDown();
        (*ptr_vegetable_).priceDown();
    }
}