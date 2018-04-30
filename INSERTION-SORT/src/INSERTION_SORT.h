//
// Created by Vladyslav Semenchenko on 29/04/2018.
//

#include <vector>

class INSERTION_SORT
{
public:
    template <typename T>
    static std::vector<T> insertionSortAsc(std::vector<T> input)
    {
        for (int j = 1; j < input.size(); j++)
        {
            T key = input[j];
            int i = j - 1;

            while (i >= 0 && input[i] > key)
            {
                input[i + 1] = input[i];
                i = i - 1;
            }

            input[i + 1] = key;
        }

        return input;
    }

    template <typename T>
    static std::vector<T> insertionSortDsc(std::vector<T> input)
    {
        for (int j = 1; j < input.size(); j++)
        {
            T key = input[j];
            int i = j - 1;

            while (i >= 0 && input[i] < key)
            {
                input[i + 1] = input[i];
                i = i - 1;
            }

            input[i + 1] = key;
        }

        return input;
    }
};