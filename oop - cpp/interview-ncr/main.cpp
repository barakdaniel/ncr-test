#include <iostream>
#include <vector>
#include <string>
#include "Customer.h"
#include "Product.h"

/**
*	Main demo for running orderCaulculator for 2 types of customers
*	The order total amount is: 7,060
*	Loyal expected amount: 6,001
*	Regular expected amount: 6,707
*/

int main() {
	
	std::vector<Product> prods;								// Vector to hold our product.
	
	prods.push_back(Product(2500.0, "PS5"));					//Inserting 4 new items into products vector.
	prods.push_back(Product(4150.0, "DJI Air2"));
	prods.push_back(Product(350.0, "Groovy Streamer"));
	prods.push_back(Product(60.0, "Type C cable"));

	LoyaltyCustomer* loyal = new LoyaltyCustomer("Barak");		//Create 2 customers, one is loyal and one is regular.
	RegularCustomer* regular = new RegularCustomer("Daniel");

	OrderCalculator calculator;

	std::cout << "Order total price: " << calculator.calculateOrder(loyal, prods) << std::endl ;		//Calculate the same order for two of the customers.
	std::cout << "Order total price: " << calculator.calculateOrder(regular, prods) << std::endl ;

	delete loyal;
	delete regular;

	//Throw - Catch example:
	/*
	try	{
		Product p1(-10, "Dyson");
	}
	catch(std::string e) {
		std::cout << e << std::endl;
	}
	*/

	std::cin.get();

	return 0;
}