#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("verify get_primes function")
{
	const vector<int> t1{2,3,5,7};
	const vector<int> t2{2,3,5,7,11,13};
	const vector<int> t3{2,3,5,7,11,13,17,19,23,29};
	const vector<int> t4{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

	REQUIRE(get_primes(10)==t1);
	REQUIRE(get_primes(15)==t2);
	REQUIRE(get_primes(30)==t3);
	REQUIRE(get_primes(50)==t4);
}