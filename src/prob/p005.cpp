#include "p005.hpp"

namespace P005
{
    static constexpr unsigned int F{1};
    static constexpr unsigned int U{20};

    static unsigned int gcd(unsigned int x, unsigned int y)
    {
        while (y != 0)
        {
            unsigned int t{y};
            y = x % y;
            x = t;
        }

        return x;
    }

    static unsigned int lcm(unsigned int x, unsigned int y)
    {
        return x * (y / gcd(x, y));
    }

    unsigned int aop(void)
    {
        unsigned int l{1};
        unsigned int f{F};

        while (f <= U)
        {
            l = lcm(l, f);
            ++f;
        }

        return l;
    }
}  // namespace P005
