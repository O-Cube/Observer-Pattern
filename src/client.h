 /*
 * client.h
 */
#ifndef CLIENT_H
#define CLIENT_H

#include <cstdio>
#include <cstring>
#include "customers.h"

/* Clients expects to be informed about the release of iphone by implementing customers interface */
class Client: public Customer {
public:
    /* free memory of local storage */
	~Client();
	/* Say some thing about object */
	void aboutMe();
	/* inform customers about the release of product */
	void informCustomers(const char *iphoneInfo) override;
	/* information received */
	char *getInfo();
	/* to store information about in local class */
    char* iphoneInfo_ = new char[100];
};

#endif // CLIENT_H
