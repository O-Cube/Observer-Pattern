/*
 * iphoneManufacturer.h
 */
 
 #ifndef IPHONEMANUFACTURER_H
 #define IPHONEMANUFACTURER_H
 
 #include "iphoneInfoDispatcher.h"
 /* represents iphone manufacturer */
 
 class Manufacturer {
public:
    /* constructor */
	Manufacturer(IphoneInfoDispatcher *dispatcher);
	/* dispatch information to iphone dispatcher class */
    void sendInfo(const char *info); 
	
private:
IphoneInfoDispatcher *dispatcher_;
 };
 #endif // IPHONEMANUFACTURER_H