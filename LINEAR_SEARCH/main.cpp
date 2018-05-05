#include <iostream>
#include <vector>
#include "LINEAR_SEARCH.h"

int main() {
    std::vector<int> input = {5, 2, 4, 6, 1, 3};

    int index = LINEAR_SEARCH::search(input, 10);

    if (index != -1)
    {
        std::cout << "Index found: " << index << std::endl;
    }
    else
    {
        std::cout << "Index not found" << std::endl;
    }

    return 0;
}