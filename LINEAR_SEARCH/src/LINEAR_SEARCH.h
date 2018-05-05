//
// Created by Vladyslav Semenchenko on 29/04/2018.
//

#include <vector>

class LINEAR_SEARCH
{
public:
    template <typename T>
    static int search(std::vector<T> input, T target)
    {
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == target)
            {
                return i;
            }
        }

        return -1;
    }
};