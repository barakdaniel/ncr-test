#pragma once
#include <string>

class Product {
public:
	Product(float price, std::string name);
	void setPrice(float newPrice);
	float getPrice();
	void setName(std::string newName);
	std::string getName();

private:
	float _price;
	std::string _name;
};