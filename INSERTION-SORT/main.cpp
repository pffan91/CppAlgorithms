#include <iostream>
#include <vector>
#include "INSERTION_SORT.h"

int main() {
    std::vector<int> input = {5, 2, 4, 6, 1, 3};
    std::vector<int> output = INSERTION_SORT::insertionSortAsc(input);

    for (int i = 0; i < output.size(); i++)
    {
        std::cout << "output: " << output[i] << std::endl;
    }

    return 0;
}