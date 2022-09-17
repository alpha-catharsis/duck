// Standard C++ headers
#include <cstdlib>
#include <iostream>

// Duck headers
#include "../duck-base/base.h"

int main()
{
    std::cout << "duck-cli: " << ok() << std::endl;
    return EXIT_SUCCESS;
}
