#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("verify binary_to_decimal")
{
	REQUIRE(binary_to_decimal("00001010")==10);
	REQUIRE(binary_to_decimal("10101010")==170);
	REQUIRE(binary_to_decimal("11111111")==255);
}

TEST_CASE("verify checkFor1and0")
{
	REQUIRE(checkFor1and0("abcdekldfj")==false);
	REQUIRE(checkFor1and0("100110")==true);
	REQUIRE(checkFor1and0("111111")==true);
	REQUIRE(checkFor1and0("a")==false);
	REQUIRE(checkFor1and0("0000000")==true);
}