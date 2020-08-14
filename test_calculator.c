#include "unity.h"
#include "calculator.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_addition(void)
{
  TEST_ASSERT_EQUAL_INT(99, addition(55,44));
  TEST_ASSERT_EQUAL_INT(210, addition(107,103));
}

void test_subtraction(void)
{
  TEST_ASSERT_EQUAL_INT(55, subtraction(799,744));
  TEST_ASSERT_EQUAL_INT(-1536, subtraction(-512,1024));
}

void test_additionofdifferentsign(void)
{
  TEST_ASSERT_EQUAL_INT(11, addition(88,-77));
  TEST_ASSERT_EQUAL_INT(-210, addition(-99,-111));
}

void test_subtractionofdifferentsign(void)
{
  TEST_ASSERT_EQUAL_INT(211, subtraction(108,-103));
  TEST_ASSERT_EQUAL_INT(512, subtraction(-512,-1024));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_additionofdifferentsign);
  RUN_TEST(test_subtractionofdifferentsign);
  /* Close the Unity Test Framework */
  return UNITY_END();
}
