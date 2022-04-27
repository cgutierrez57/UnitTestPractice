/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, sortDescending){
	int i = 1;
	int j = 2;
	int k = 3;
	//sortDescending(i, j, k);
	Practice testObject;
	testObject.sortDescending(i, j, k);
	ASSERT_EQ(i,3);
	ASSERT_EQ(j,2);
	ASSERT_EQ(k, 1);
}

TEST(PracticeTest, isPalindrome){
	char one[] = "apple";
	char two[] = "eattae";
	Practice testObject;
	ASSERT_EQ(testObject.isPalindrome(one), false);
	ASSERT_EQ(testObject.isPalindrome(two), true);
}

TEST(PracticeTest, count_starting_repeats){
	char one[] = "aaron";
	char two[] = "tttttttttttturtle";
	Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats(one), 2);
	ASSERT_EQ(testObject.count_starting_repeats(two), 12);
}
