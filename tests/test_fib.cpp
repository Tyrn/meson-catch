#include <catch2/catch.hpp>

#include "fibonacci.hpp"

TEST_CASE("Simple test case calculating fibonacci for 10th element","[fibonacci]") {
    REQUIRE(fibonacci(9) == 34);
    REQUIRE(fibonacci(10) == 55);
}

