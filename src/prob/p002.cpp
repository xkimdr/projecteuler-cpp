#include "p002.hpp"

namespace P002
{
    static constexpr unsigned int U{4'000'000};

    static unsigned int n(unsigned int x, unsigned int y) { return x + 4 * y; }

    unsigned int aop(void)
    {
        unsigned int x{2};
        unsigned int y{8};
        unsigned int z{n(x, y)};
        unsigned int sum{x + y};

        while (z <= U)
        {
            sum += z;
            x = y;
            y = z;
            z = n(x, y);
        }

        return sum;
    }
}  // namespace P002