#include "p001.hpp"

namespace P001
{
    static constexpr unsigned int U{999};
    static constexpr unsigned int X{3};
    static constexpr unsigned int Y{5};

    static constexpr unsigned int son(unsigned int n)
    {
        return n * (n + 1) / 2;
    }

    static constexpr unsigned int nom(unsigned int n) { return U / n; }

    static constexpr unsigned int som(unsigned int n)
    {
        return n * son(nom(n));
    }

    unsigned int aop(void) { return som(X) + som(Y) - som(X * Y); }
}  // namespace P001