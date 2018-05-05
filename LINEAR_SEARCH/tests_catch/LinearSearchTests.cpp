//
// Created by Vladyslav Semenchenko on 4/30/18.
//

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include <vector>
#include "LINEAR_SEARCH.h"

TEST_CASE("LINEAR_SEARCH tests")
{
    std::vector<int> testInput1 = {4, 5, 6, 8, 1, 9};
    REQUIRE(LINEAR_SEARCH::search(testInput1, 10) == -1);
}