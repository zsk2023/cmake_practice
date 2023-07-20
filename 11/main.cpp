#include <iostream>
#include "meat/include/meat.h"
#include "vegetable/include/vegetable.h"
#include "people/include/people_single.h"

void getpeoples(){
    People people1;
    people1.changePrices();
    people1.buy(3,2);
    people1.peopleInfo();
    People people2("John");
    people2.changePrices();
    people2.buy(2,7);
    people2.peopleInfo();
<<<<<<< HEAD
    People people3("Ann",30,44);
=======
    People people3("Ann",30,33);
>>>>>>> fe2517bd400f1ab2b53d2f325594ef120081e19c
    people3.changePrices();
    people3.buy(1,5);
    people3.peopleInfo();
    People people4("Anny",10,2);
    people4.changePrices();
    people4.buy(2,3);
    people4.peopleInfo();
    People people5("Sue",15,3,3,0);
    people5.changePrices();
    people5.buy(2,2);
    people5.peopleInfo();
    People people6("Lee",15,4,0,1);
    people6.changePrices();
    people6.buy(2,2);
    people6.peopleInfo();
}

int main(int args,char **argv){
    getpeoples();

    return 0;
}
