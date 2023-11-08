/*
 * fsm_test.cpp - uses google test ( and mock) frame work to perform test application
 */
 
 #include "gtest/gtest.h"
 #include "gmock/gmock.h"
 
 #include "customers.h"
 #include "client.h"
 #include "iphoneInfoDispatcher.h"
 #include "iphoneManufacturer.h"
 #include "iphoneShop.h"


/* test fixture to be used for testing */

class ObserverTest : public testing::Test
{
public: 
	void SetUp() override {
		/* iphone info dispatcher */
		observer_= new IphoneInfoDispatcher();
		/* add clients and shops into observer list */
	    observer_->addClients(&john);
	    observer_->addClients(&mary);
	    observer_->addClients(&jerry);
	    observer_->addClients(&ishop);
	    observer_->addClients(&bakerShop);
	    observer_->addClients(&supermarket);
		/* iphone manufacturer object to be used to setup individual tests */
		manufacturer_ = new Manufacturer(observer_);
		/* send out "Today is going to be a good day!" to clients and shops */
		manufacturer_->sendInfo("Today is going to be a good day!");
		/* dispatch information */
		observer_->dispatchInfo();
	}
protected:
    IphoneInfoDispatcher *observer_;
	Manufacturer *manufacturer_;
	/* client objects */
	Client john;
	Client mary;
	Client jerry;
	
	/* iphone shops */
	IphoneShop ishop;
	IphoneShop bakerShop;
	IphoneShop supermarket;
};

/* test if client john got the message from the manufacturer */
TEST_F(ObserverTest, JohnTest)
{
    EXPECT_STREQ("Today is going to be a good day!", john.getInfo());
}

/* test if client mary got the message from the manufacturer */
TEST_F(ObserverTest, MaryTest)
{
    EXPECT_STREQ("Today is going to be a good day!", mary.getInfo());
}

/* test if client jerry got the message from the manufacturer */
TEST_F(ObserverTest, JerryTest)
{
    EXPECT_STREQ("Today is going to be a good day!", jerry.getInfo());
}

/* test if ishop got the message from the manufacturer */
TEST_F(ObserverTest, IshopTest)
{
    EXPECT_STREQ("Today is going to be a good day!", ishop.getInfo());
}

/* test if client bakershop got the message from the manufacturer */
TEST_F(ObserverTest, BakerShopTest)
{
    EXPECT_STREQ("Today is going to be a good day!", bakerShop.getInfo());
}

/* test if supermarket got the message from the manufacturer */
TEST_F(ObserverTest, SupermarketTest)
{
    EXPECT_STREQ("Today is going to be a good day!", supermarket.getInfo());
}




