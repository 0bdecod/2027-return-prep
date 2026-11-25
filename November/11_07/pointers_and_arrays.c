#include <assert.h>
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int value = 10;
    int *pointer = &value;
    printf("value address: %p\n", (void *)pointer);
    assert(*pointer == 10);

    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (size_t i = 0; i < sizeof array / sizeof array[0]; ++i) {
        sum += array[i];
    }
    assert(sum == 15);
    puts("All checks passed.");
    return 0;
}
