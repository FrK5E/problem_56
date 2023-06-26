#include <iostream>
#include <NTL/ZZ.h>
#include "utils.h"

using namespace NTL;

int main()
{

    size_t max = 0;

    size_t count{0};
    for (size_t i = 2; i < 100; i++)
    {
        for (size_t j = 1; j < 100; j++)
        {

            NTL::ZZ n = NTL::power( NTL::to_ZZ(i), j );
            size_t trial = Utils::get_sum_of_digits(n);
            if (trial > max)
            {
                max = trial;
            }
        }
    }

    std::cout << max << std::endl;
}
