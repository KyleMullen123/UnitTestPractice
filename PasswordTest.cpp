/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

class unique_characters : public ::testing::Test
{
	protected:
		unique_characters(){}
		virtual ~unique_characters(){}
		virtual void Up(){}
		virtual void Down(){}
}

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(unique_characters, multi_letter_password)
{
	unique_character my_char;
	int complete = my_char.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}
