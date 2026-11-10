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

static void change_value(int x)
{
    x = 100;
    (void)x;
}

/* x must point to a live, writable int. */
static void change_pointer(int *x)
{
    *x = 100;
}

/* Both arguments must point to live, writable ints. Aliasing is allowed. */
static void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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

    int value = 10;
    int *pointer = &value;
    printf("value address: %p\n", (void *)pointer);
    assert(*pointer == 10);
    change_value(value);
    assert(value == 10);
    change_pointer(pointer);
    assert(value == 100);

    int other = -5;
    swap(&value, &other);
    assert(value == -5 && other == 100);
    swap(&value, &value);
    assert(value == -5);

    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (size_t i = 0; i < sizeof array / sizeof array[0]; ++i) {
        sum += array[i];
    }
    assert(sum == 15);
    puts("All checks passed.");
    return 0;
}
