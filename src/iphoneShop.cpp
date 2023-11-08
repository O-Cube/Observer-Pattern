/*
 * iphoneShop.cpp
 */
 
 #include <cstdio>
 #include <cstring>
 #include "iphoneShop.h"
 
    /* free memory used for local storage */
	IphoneShop::~IphoneShop() {
		delete[] iphoneInfo_;
	}
 
    /* Say some thing about current object */
	void IphoneShop::aboutMe() {
		printf("We are Iphone retailers, we sell every brand of Iphone:(\n");
	}
	
	/* inform customers about the release of product */
	void IphoneShop::informCustomers(const char *iphoneInfo) {
		strncpy(iphoneInfo_, iphoneInfo, 95);
	}
	
	/* information received */
	char* IphoneShop::getInfo() {
		return iphoneInfo_;
	}