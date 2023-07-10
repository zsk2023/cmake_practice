#include "../include/vegetable.h"

Vegetable::Vegetable()
{
    this->vegetablePrices_.resize(5);
    for(int i = 0; i < 5; i++){
        this->vegetablePrices_[i] = 2+i;
    }
}
void Vegetable::priceUp()
{
    for(auto price:this->vegetablePrices_){
        price += 1;
    }
}
void Vegetable::priceDown()
{
    for(auto price:this->vegetablePrices_){
        price -= 1;
    }
}
int Vegetable::seePrice(int num)
{
    if(num >= this->vegetablePrices_.size()){
        std::cout << "No such vegetable" << std::endl;
        return 0;
    }
    return this->vegetablePrices_[num];
}