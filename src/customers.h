 /*
 * customers.h
 */
#ifndef CUSTOMERS_H
#define CUSTOMERS_H


class Customer {
public:
	/* inform customers about the release of product */
	virtual void informCustomers(const char *iphoneInfo) = 0;
};
#endif // CUSTOMERS_H
