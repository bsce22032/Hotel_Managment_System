//
// Created by abc1 on 3/28/2023.
//

#include "OrderItem.h"


void OrderItem::display() const {
    item->display();
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: $" << getPrice() << endl;
}
void OrderItem::save(ofstream& file) const {
    file << item->name << "," << quantity << "," << getPrice() << endl;
}

// Function to save restaurant data to a file
void OrderItem::saveOrder(const vector<OrderItem>& order, double total) {
    ofstream file("restaurant_order.txt");
    if (file.is_open()) {
        for (auto item : order) {
            item.save(file);
        }
        file << "Total: $" << total << endl;
        file.close();
        cout << "Order saved to file." << endl;
    }
    else {
        cout << "Unable to open file." << endl;
    }
}

// Function to add a new dish to the menu
void OrderItem::addDish(vector<RestaurantItem*>& items) {
    cout << "Enter the name of the new dish: ";
    string name;
    cin >> name;
    cout << "Enter the price of the new dish: ";
    double price;
    cin >> price;
    cout << "Enter the type of the new dish (e.g. Pasta, Japanese, etc.): ";
    string type;
    cin >> type;
    items.push_back(new MainDish(name, price, type));
    cout << "New dish added to the menu." << endl;
}

double OrderItem::getPrice() const {
    return item->getPrice() * quantity;
}