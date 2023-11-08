/*
 * iphoneInfoDispatcher.h
 */
 
 #ifndef IPHONE_INFO_DISPATCHER_H
 #define IPHONE_INFO_DISPATCHER_H
 
 #include <list>
 #include <cstring>
 #include "iphoneShop.h"
 #include "client.h"
 
 class IphoneInfoDispatcher {
public:
     /* add clients to dispatch list */
	 void addClients(Customer *customer);
	 
	 /* remove all clients in dispatch list */
	 void removeClient();
	 
	 /* dispatch information to clients */
	 void dispatchInfo();
	 
	 /* gets information from manufacturer */
	 void receiveInfo(const char *info);
     
	 /* stores pointer to received information */
	 const char *dispatchInfo_;
	 
	 /* store pointers of objects to send dispatch information */
	 std::list<Customer *> clientList_ = { };
 };
 
 #endif // IPHONE_INFO_DISPATCHER_H