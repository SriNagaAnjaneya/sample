#include "unity.h"
	#include "jewel.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_jewel(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}
	void test_jewel1(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_jewel);
		RUN_TEST(test_jewel1);

  		return UNITY_END();
	}
