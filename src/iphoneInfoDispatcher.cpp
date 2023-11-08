/*
 * iphoneInfoDispatcher.cpp
 */
 
 #include "iphoneInfoDispatcher.h"
 
 /* add clients to dispatch list */
	 void IphoneInfoDispatcher::addClients(Customer *customer) {
		 clientList_.push_back(customer);
	 }
	 
	 /* remove all clients in dispatch list */
	 void IphoneInfoDispatcher::removeClient() {
		 while(clientList_.size()) {
			 clientList_.pop_back();
		 }
	 }
	 
	 /* stores pointer to information from manufacturer */
	 void IphoneInfoDispatcher::receiveInfo(const char *info) {
		 dispatchInfo_ = info;
	 }
	 
	 /* dispatch information to clients */
	 void IphoneInfoDispatcher::dispatchInfo() {
		 for (Customer *customer: clientList_) {
			 customer->informCustomers(dispatchInfo_);
		 }
	 }