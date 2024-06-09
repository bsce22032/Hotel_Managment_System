//
// Created by abc1 on 3/28/2023.
//

#ifndef HOTEL_MANAGEMENTSYSTEM_RESTAURANTITEM_H
#define HOTEL_MANAGEMENTSYSTEM_RESTAURANTITEM_H
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class RestaurantItem {
public:
    string name;
    double price;
public:
    RestaurantItem(string n, double p) : name(n), price(p) {}
    virtual void display() = 0;
    virtual double getPrice() const {
        return price;
    }
};


#endif //HOTEL_MANAGEMENTSYSTEM_RESTAURANTITEM_H
