/*
 * client.cpp
 */

#include "client.h"
  
    /* free up local storage */
	Client::~Client() {
		delete[] iphoneInfo_;
	}
 
    /* Say some thing about object */
	void Client::aboutMe() {
		printf("I am a fervent user of Iphone:(\n");
	}
	/* inform customers about the release of product */
	void Client::informCustomers(const char *iphoneInfo) {
		strncpy(iphoneInfo_, iphoneInfo, 95);
	}
	/* get information from the manufaturer */
	char* Client::getInfo() {
		return iphoneInfo_;
	}