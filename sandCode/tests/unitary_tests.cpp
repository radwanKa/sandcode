#include <iostream>
#include "assert.h"
#include "header.h"
using namespace Fspace;

void printSet(std::set<unsigned int> const & _set, std::string const & prefix = "", std::string const & sufix = "")
{
    std::cout<< "{";
    for (std::set<unsigned int>::const_iterator it = _set.begin(); it != _set.end(); ++it)
    {
        if (it !=  _set.begin()) std::cout <<",";
        std::cout << *it;
    }
    std::cout<< "}"<<std::endl;
}

bool Fspace::emptyTest()
{
    std::cout << "/// Test empty input ///" <<std::endl;
    std::vector<unsigned int> numbers = std::vector<unsigned int>();
    std::set<unsigned int > output = generateFSet(numbers);
    
    std::cout << "\toutput empty : ";
    assert(output.empty());
    assert(0 == funcF(numbers));
    std::cout << "OK"<< std::endl;
    return false;
}

bool Fspace::smallTests()
{
    std::cout << "/// Test small examples ///" <<std::endl;
    std::vector<unsigned int> numbers = std::vector<unsigned int>();
    numbers.push_back(0);
    std::set<unsigned int > output = generateFSet(numbers);
    int res1[]= {0};
    std::set<unsigned int> expectedOutput (res1,res1+1);
    std::cout << "\t{0} : "<<std::endl;;
    std::cout << "\tsize : ";
    assert(1 == funcF(numbers));
    std::cout << "OK"<< std::endl;
    std::cout << "\telements : ";
    assert(expectedOutput == output);
    std::cout << "OK"<< std::endl;
    std::cout << std::endl;
    
    
    int val2[]= {0,1};
    numbers = std::vector<unsigned int>(val2,val2+2);
    output = generateFSet(numbers);
    int res2[]= {0,1,2};
    expectedOutput = std::set<unsigned int>(res2,res2+3);
    
    std::cout << "\t{0,1} : "<<std::endl;;
    std::cout << "\tsize : ";
    assert(3 == funcF(numbers));
    std::cout << "OK"<< std::endl;
    std::cout << "\telements : ";
    assert(expectedOutput == output);
    std::cout << "OK"<< std::endl;
    std::cout << std::endl;
    
    int val3[]= {1,1};
    numbers = std::vector<unsigned int>(val3,val3+2);
    output = generateFSet(numbers);
    int res3[]= {1,2};
    expectedOutput = std::set<unsigned int>(res3,res3+2);
    
    std::cout << "\t{1,1} : "<<std::endl;;
    std::cout << "\tsize : ";
    assert(2 == funcF(numbers));
    std::cout << "OK"<< std::endl;
    std::cout << "\telements : ";
    assert(expectedOutput == output);
    std::cout << "OK"<< std::endl;
    std::cout << std::endl;
    
    return true;
}

bool Fspace::exampleTest()
{
    std::cout << "/// funniest examples ///" <<std::endl;
    unsigned int val1[]= {3,5,8,9};
    std::vector<unsigned int> numbers (val1,val1+4);
    unsigned int res1[]= { 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 24, 25, 27, 40, 45, 64, 72, 81 };
    std::set<unsigned int> expectedOutput (res1,res1+20);
    
    std::set<unsigned int > output = generateFSet(numbers);
    std::cout << "\t{3,5,8,9} : "<<std::endl;
    std::cout << "\tsize : ";
    assert(20 == funcF(numbers));
    std::cout << "OK"<< std::endl;
    std::cout << "\telements : ";
    assert(expectedOutput == output);
    std::cout << "OK"<< std::endl;
    std::cout << std::endl;
    return true;
}
