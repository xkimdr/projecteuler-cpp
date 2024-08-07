#include "p004.hpp"

namespace P004
{
    static bool isp(unsigned int n)
    {
        unsigned int s{n};
        unsigned int r{};

        while (n != 0)
        {
            r = r * 10 + n % 10;
            n /= 10;
        }

        return s == r;
    }

    unsigned int aop()
    {
        unsigned int p{};

        for (unsigned int i = 999; i != 99; --i)
        {
            for (unsigned int j = 90; j != 9; --j)
            {
                unsigned int n{11 * j * i};
                if (n > p && isp(n))
                {
                    p = n;
                }
            }
        }

        return p;
    }
}  // namespace P004
