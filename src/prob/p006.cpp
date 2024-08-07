#include "p006.hpp"

namespace P006
{
    static constexpr unsigned int N{100};

    unsigned int aop(void) { return (N - 1) * N * (N + 1) * (3 * N + 2) / 12; }
}  // namespace P006