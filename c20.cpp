#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> vec = {{1, 0}, {0, 1}};

    for (std::vector<std::vector<int>>::iterator i = vec.begin(); i != vec.end(); ++i)
    {
        for (std::vector<int>::const_iterator j = i->begin(); j != i->end(); ++j)
        {
        }
    }
    return 0;
}