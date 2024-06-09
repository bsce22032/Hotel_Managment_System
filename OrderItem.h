//
// Created by abc1 on 3/28/2023.
//

#ifndef HOTEL_MANAGEMENTSYSTEM_ORDERITEM_H
#define HOTEL_MANAGEMENTSYSTEM_ORDERITEM_H
#include "Dessert.h"
#include "MainDish.h"
class OrderItem {
    RestaurantItem* item;
    int quantity;
public:
    OrderItem(RestaurantItem* i, int q) : item(i), quantity(q) {}
    double getPrice() const ;
    void display() const ;
    void save(ofstream& file) const ;
void saveOrder(const vector<OrderItem>& order, double total) ;
void addDish(vector<RestaurantItem*>& items) ;
};

#endif //HOTEL_MANAGEMENTSYSTEM_ORDERITEM_H
