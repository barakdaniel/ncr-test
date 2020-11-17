#include "Customer.h"

Customer::Customer(std::string newName) {
    this->setName(newName);
}

void Customer::setName(std::string newName) {
    if(newName != "")
        _name = newName;
}

std::string Customer::getName() {
    return _name;
}


float OrderCalculator::calculateOrder(Customer* customer, std::vector<Product> products) {
    float orderTotal = 0.0;

    for (auto it = products.begin(); it != products.end(); it++) {
        orderTotal += it->getPrice();
    }

    if (typeid(*customer) == typeid(LoyaltyCustomer))
    {
        orderTotal = orderTotal - (orderTotal * 0.15);
    }
    else if (typeid(*customer) == typeid(RegularCustomer))
    {
        orderTotal = orderTotal - (orderTotal * 0.05);
    }

    return orderTotal;

}
