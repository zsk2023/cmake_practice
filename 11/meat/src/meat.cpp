#include "../include/meat.h"

Meat::Meat()
{
    this->meatPrices_.resize(5);
    for(int i = 0; i < 5; i++){
        this->meatPrices_[i] = 5+i;
    }
}
void Meat::priceUp()
{
    for(auto price:this->meatPrices_){
        price += 1;
    }
}
void Meat::priceDown()
{
    for(auto price:this->meatPrices_){
        price -= 1;
    }
}
int Meat::seePrice(int num)
{
    if(num >= this->meatPrices_.size()){
        std::cout << "No such meat" << std::endl;
        return 0;
    }
    return this->meatPrices_[num];
}