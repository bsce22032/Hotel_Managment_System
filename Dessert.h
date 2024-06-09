//
// Created by abc1 on 3/28/2023.
//

#ifndef HOTEL_MANAGEMENTSYSTEM_DESSERT_H
#define HOTEL_MANAGEMENTSYSTEM_DESSERT_H
#include "RestaurantItem.h"

class Dessert : public RestaurantItem {
    bool isVegan;
public:
    Dessert(string n, double p, bool v) : RestaurantItem(n, p), isVegan(v) {}
    void display() {
        cout << "Dessert: " << name << ", " << (isVegan ? "Vegan" : "Non-Vegan") << ", $" << price << endl;
    }
};


#endif //HOTEL_MANAGEMENTSYSTEM_DESSERT_H
