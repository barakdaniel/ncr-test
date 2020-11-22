#include "Product.h"

Product::Product(float price, std::string name) {
	try {
		this->setName(name);
	}
	catch (std::string e) {
		throw e;
	}
	this->setPrice(price);
}

void Product::setPrice(float newPrice) {
	if (newPrice < 0)
		throw std::string("Bad price parameter");
	
	_price = newPrice;
}

float Product::getPrice() {
	return _price;
}

void Product::setName(std::string newName) {
	_name = newName;
}

std::string Product::getName() {
	return _name;
}
