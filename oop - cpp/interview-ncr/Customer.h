#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Product.h"

class Customer
{
public:
    Customer(std::string newName);

    virtual void printCustomer() = 0;
    void setName(std::string newName);
    std::string getName();

private:
    std::string _name;
};

class LoyaltyCustomer : public Customer
{
public:
    LoyaltyCustomer(std::string name) : Customer(name) {}
    virtual void printCustomer() { std::cout << "Loyalty customer name: " << this->getName() << std::endl; }
};

class RegularCustomer : public Customer
{
public:
    RegularCustomer(std::string name) : Customer(name) {}
    virtual void printCustomer() { std::cout << "Regular customer name: " << this->getName() << std::endl; }
};

class OrderCalculator
{
public:
    float calculateOrder(Customer* customer, std::vector<Product> products);
};
