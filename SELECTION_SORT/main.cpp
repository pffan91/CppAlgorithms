#include <iostream>
#include <vector>
#include "SELECTION_SORT.h"

int main()
{
    std::vector<int> input = {3, 5, 6, 2, 8};
    std::vector<int> output = ALGS::SELECTION_SORT::sortDsc(input);

    for (int value : output)
    {
        std::cout << "Output: " << value << std::endl;
    }

    return 0;
}