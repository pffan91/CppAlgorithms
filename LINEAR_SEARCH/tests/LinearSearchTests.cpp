//
// Created by Vladyslav Semenchenko on 4/30/18.
//

#include <vector>
#include "gtest/gtest.h"
#include "LINEAR_SEARCH.h"

TEST(testLinearSearch, search)
{
    std::vector<int> testInput1 = {4, 5, 6, 8, 1, 9};
    EXPECT_EQ(-1, LINEAR_SEARCH::search(testInput1, 10));
}