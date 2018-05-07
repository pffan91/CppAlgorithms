//
// Created by Vladyslav Semenchenko on 5/7/18.
//

#ifndef SELECTION_SORT_SELECTION_SORT_H
#define SELECTION_SORT_SELECTION_SORT_H

#include <vector>
#include <iostream>

namespace ALGS
{
    class SELECTION_SORT
    {
    public:
        template <typename T>
        static std::vector<T> sortAsc(std::vector<T> input)
        {
            for (int i = 0; i < input.size(); i++)
            {
                int minIndex = i;

                for (int j = i + 1; j < input.size(); j++)
                {
                    int value2 = input[j];

                    if (input[j] < input[i])
                    {
                        minIndex = j;
                    }
                }

                std::swap(input[i], input[minIndex]);
            }

            return input;
        }

        template <typename T>
        static std::vector<T> sortDsc(std::vector<T> input)
        {
            for (int i = 0; i < input.size(); i++)
            {
                int minIndex = i;

                for (int j = i + 1; j < input.size(); j++)
                {
                    int value2 = input[j];

                    if (input[j] > input[i])
                    {
                        minIndex = j;
                    }
                }

                std::swap(input[i], input[minIndex]);
            }

            return input;
        }
    };
}

#endif //SELECTION_SORT_SELECTION_SORT_H
