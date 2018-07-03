#include "header.h"

std::set<unsigned int> Fspace::generateFSet(std::vector<unsigned int> const & numbers)
{
    size_t numbers_size = numbers.size();
    std::set<unsigned int> result = std::set<unsigned int>();
    
    for (size_t i = 0; i < numbers_size; ++i )
    {
        for (size_t j = i; j < numbers_size; ++j )
        {
            result.insert(numbers.at(i)+numbers.at(j));
            result.insert(numbers.at(i)*numbers.at(j));
        }
    }
    return result;
}

size_t Fspace::funcF(std::vector<unsigned int> const & numbers)
{
    return generateFSet(numbers).size();
}