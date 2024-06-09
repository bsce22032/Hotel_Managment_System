//
// Created by abc1 on 3/28/2023.
//

#ifndef HOTEL_MANAGEMENTSYSTEM_MAINDISH_H
#define HOTEL_MANAGEMENTSYSTEM_MAINDISH_H
#include "RestaurantItem.h"

class MainDish : public RestaurantItem {
    string type;
public:
    MainDish(string n, double p, string t) : RestaurantItem(n, p), type(t) {}
    void display() {
        cout << "Main Dish: " << name << ", " << type << ", $" << price << endl;
    }
};


#endif //HOTEL_MANAGEMENTSYSTEM_MAINDISH_H
