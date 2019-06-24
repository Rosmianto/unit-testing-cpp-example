#include "catch2/catch.hpp"
#include "Arduino.h"
#include "modules/SimpleModule.h"

TEST_CASE("String Processing", "[SimpleModule]") {
	SimpleModule module;

	REQUIRE(module.CutInHalf("This is an example test") == "This is an ");
	REQUIRE(module.CutInHalf("Hello World!") == "Hello ");
	REQUIRE(module.DoubleIt("Hello World!") == "Hello World!Hello World!");
}