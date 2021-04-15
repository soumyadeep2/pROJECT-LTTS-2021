#include <unity.h>
#include "Calendar.h"
#define PROJECT_NAME    "Calendar"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void Test_getDaynumber(){
    TEST_ASSERT_EQUAL(5,getDaynumber(1,1,2021));
    TEST_ASSERT_EQUAL(6, getDaynumber(2,1,2021));
    TEST_ASSERT_EQUAL(0, getDaynumber(3,1,2021));
    TEST_ASSERT_EQUAL(1, getDaynumber(4,1,2021));
    TEST_ASSERT_EQUAL(2, getDaynumber(5,1,2021));
    TEST_ASSERT_EQUAL(3, getDaynumber(6,1,2021));
    TEST_ASSERT_EQUAL(4, getDaynumber(7,1,2021));
}
void Test_getName(){
 TEST_ASSERT_EQUAL_CHAR_ARRAY("January",getname(0),7);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("February",getname(1),8);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("March",getname(2),5);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("April",getname(3),5);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("May",getname(4),3);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("June",getname(5),4);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("July",getname(6),4);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("August",getname(7),6);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("September",getname(8),9);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("October",getname(9),7);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("November",getname(10),8);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("December",getname(11),8);

}
void Test_Days(){
    TEST_ASSERT_EQUAL(31,days(0,2021));
    TEST_ASSERT_EQUAL(28,days(1,2021));
    TEST_ASSERT_EQUAL(31,days(2,2021));
    TEST_ASSERT_EQUAL(30,days(3,2021));
    TEST_ASSERT_EQUAL(31,days(4,2021));
    TEST_ASSERT_EQUAL(30,days(5,2021));
    TEST_ASSERT_EQUAL(31,days(6,2021));
    TEST_ASSERT_EQUAL(31,days(7,2021));
    TEST_ASSERT_EQUAL(30,days(8,2021));
    TEST_ASSERT_EQUAL(31,days(9,2021));
    TEST_ASSERT_EQUAL(30,days(10,2021));
    TEST_ASSERT_EQUAL(31,days(11,2021));

}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(Test_getDayNumber);
  RUN_TEST(Test_getName);
  RUN_TEST(Test_Days);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
