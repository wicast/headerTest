#include <iostream>

struct S
{
    /* data */
    uint32_t aa;

    void ping()
    {
        std::cout<< aa<< ":233" <<std::endl;
    }
};
