#ifndef HEADER
#define HEADER

#include <stdlib.h>
#include <vector>
#include <set>

namespace Fspace
{
    std::set<unsigned int> generateFSet(std::vector<unsigned int> const & numbers);
    size_t funcF(std::vector<unsigned int> const & numbers);

    // TEST UNITAIRES
    bool emptyTest();
    bool smallTests();
    bool exampleTest();
}

#endif