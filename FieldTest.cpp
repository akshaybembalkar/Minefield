/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST (FieldTest, isSafe)
{
	Field minefield;

	ASSERT_TRUE(minefield.isSafe(4,5));
}

TEST (FieldTest, isSafeNot)
{
	Field minefield;
	ASSERT_TRUE(minefield.isSafe(5,10));
}
/*
TEST (FieldTest, isSafeIllegal)
{
	Field minefield;
	ASSERT_TRUE(minefield.isSafe(5,-10));
}*/
