#include "CppUTest/TestHarness.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

extern "C"
{

}


TEST_GROUP(Test)
{	
    void setup()
    {	

    }

    void teardown()
    {

    }
};

TEST(Test, first_test)
{
	CHECK_TRUE(false);
}
