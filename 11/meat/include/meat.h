#pragma once

#include <iostream>
#include <vector>

class Meat
{
public:
    Meat();
    void priceUp();
    void priceDown();
    int seePrice(int num);

private:
    std::vector<int> meatPrices_;
};