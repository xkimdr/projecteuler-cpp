#include "p007.hpp"
#include <cmath>

namespace P007
{
    static constexpr unsigned int N{10'001};

    static unsigned long sf(unsigned long n)
    {
        unsigned long sq{(unsigned long) sqrt((double) n)};
        unsigned long i{2};

        while (i <= sq)
        {
            if (n % i == 0)
            {
                return i;
            }

            ++i;
        }

        return n;
    }

    static bool isp(unsigned int n) { return n == sf(n); }

    unsigned int aop(void)
    {
        unsigned int c{1};
        unsigned int p{2};

        while (c <= N)
        {
            if (isp(p))
            {
                ++c;
            }
            ++p;
        }

        return --p;
    }
}  // namespace P007