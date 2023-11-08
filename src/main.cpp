/*
 *
 */
#include <cstdio>
#include <iostream>

#include "client.h"
#include "iphoneInfoDispatcher.h"
#include "iphoneShop.h"
#include "iphoneManufacturer.h"


int main()
{
	/* client objects */
	Client john;
	Client mary;
	Client jerry;
	
	/* iphone shops */
	IphoneShop ishop;
	IphoneShop bakerShop;
	IphoneShop supermarket;
	
	/* observer */
	IphoneInfoDispatcher observer;
	
	/* add clients and shops into observer list */
	observer.addClients(&john);
	observer.addClients(&mary);
	observer.addClients(&jerry);
	observer.addClients(&ishop);
	observer.addClients(&bakerShop);
	observer.addClients(&supermarket);
	
	/* manufacturer instance to dispatch information to clients */
	Manufacturer manufacturer(&observer);
	manufacturer.sendInfo("I am sure you all are waiting anxiously for the release of the new iphone");
	/* dispatch information to every customer */
	observer.dispatchInfo();
	
	std::cout << john.getInfo() << "\n";
	std::cout << mary.getInfo() << "\n";
	std::cout << jerry.getInfo() << "\n";
	std::cout << ishop.getInfo() << "\n";
	std::cout << bakerShop.getInfo() << "\n";
	std::cout << supermarket.getInfo() << "\n";
	
	return( 0 );
}
 
