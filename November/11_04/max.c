#include <assert.h>
#include <limits.h>
#include <stddef.h>
#include <stdio.h>

static int max_independent(int a, int b, int c)
{
    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    return max;
}

static int max_branch(int a, int b, int c)
{
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

static int max_ternary(int a, int b, int c)
{
    int max = (a > b) ? a : b;
    return (max > c) ? max : c;
}

int main(void)
{
    const int cases[][4] = {
        {3, 2, 1, 3}, {1, 3, 2, 3}, {1, 2, 3, 3},
        {-3, -1, -2, -1}, {2, 2, 1, 2}, {2, 1, 2, 2},
        {1, 2, 2, 2}, {0, 0, 0, 0},
        {INT_MIN, 0, INT_MAX, INT_MAX},
        {INT_MIN, INT_MIN, INT_MIN, INT_MIN}
    };
    for (size_t i = 0; i < sizeof cases / sizeof cases[0]; ++i) {
        int a = cases[i][0], b = cases[i][1], c = cases[i][2];
        int expected = cases[i][3];
        assert(max_independent(a, b, c) == expected);
        assert(max_branch(a, b, c) == expected);
        assert(max_ternary(a, b, c) == expected);
    }

    puts("All checks passed.");
    return 0;
}
