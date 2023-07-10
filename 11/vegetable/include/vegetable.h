#pragma once

#include <iostream>
#include <vector>

class Vegetable
{
public:
    Vegetable();
    void priceUp();
    void priceDown();
    int seePrice(int num);

private:
    std::vector<int> vegetablePrices_;
};