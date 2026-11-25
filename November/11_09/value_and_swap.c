#include <assert.h>
#include <stdio.h>

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
    int value = 10;
    int *pointer = &value;
    change_value(value);
    assert(value == 10);
    change_pointer(pointer);
    assert(value == 100);

    int other = -5;
    swap(&value, &other);
    assert(value == -5 && other == 100);
    swap(&value, &value);
    assert(value == -5);

    puts("All checks passed.");
    return 0;
}
