//
// Created by Vladyslav Semenchenko on 4/30/18.
//

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include <vector>
#include "INSERTION_SORT.h"

TEST_CASE("INSERTION_SORT tests")
{
    std::vector<int> testInput1 = {4, 5, 6, 8, 1, 9};
    std::vector<int> testOutput1 = {1, 4, 5, 6, 8, 9};
    REQUIRE(INSERTION_SORT::insertionSortAsc(testInput1) == testOutput1);
}