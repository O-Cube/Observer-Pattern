/*
 * iphoneManufacturer.cpp
 */
 
#include "iphoneManufacturer.h"
 
 /* constructor */
	Manufacturer::Manufacturer(IphoneInfoDispatcher *dispatcher) { 
		  dispatcher_ = dispatcher;
		 }
		
 /* sends information to observer class without saving information locally */
    void Manufacturer::sendInfo(const char *info) {
		dispatcher_->receiveInfo(info);
	}