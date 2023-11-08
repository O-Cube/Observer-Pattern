 /*
 * iphoneShop.h
 */
#ifndef IPHONE_SHOP_H
#define IPHONE_SHOP_H

#include <cstdio>
#include <cstring>
#include "customers.h"

/* Iphone shops exoects to be informed about the release of iphone by implementing customers interface */
class IphoneShop: public Customer {
public:
	/* free memory used for local storage */
	~IphoneShop();
	/* Say some thing about current object */
	void aboutMe();
	/* inform customers about the release of product */
	void informCustomers(char const *iphoneInfo) override;
	/* information received */
	char *getInfo();
	
	/* stores information about iphone locally */
    char* iphoneInfo_ = new char[100];
};

#endif // IPHONE_SHOP_H
