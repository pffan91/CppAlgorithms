//
// Created by Vladyslav Semenchenko on 4/30/18.
//

#include <vector>
#include "gtest/gtest.h"
#include "SELECTION_SORT.h"

TEST(testInsertionSort, asc)
{
    std::vector<int> testInput1 = {4, 5, 6, 8, 1, 9};
    std::vector<int> testOutput1 = {1, 4, 5, 6, 8, 9};
    EXPECT_EQ(testOutput1, ALGS::SELECTION_SORT::sortAsc(testInput1));
}