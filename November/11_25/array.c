#include <stdio.h>
#include <stddef.h>
#include <string.h>

int sum_array(const int *arr, int len){
    int sum = 0;

    for(int i = 0; i < len; i++){
        sum += arr[i];
    }
    return sum;
}

int main(void){
    int arr[5] = {3, 6, 9, 12, 15};

    int TotalSum = sum_array(arr, 5);

    int LastThreeSum = sum_array(arr + 2, 3);

    printf("Total Sum: %d\n", TotalSum);
    printf("Last Three Sum: %d\n", LastThreeSum);

    printf("arr     : %p\n", (void *)arr);
    printf("arr + 1 : %p\n", (void *)(arr + 1));
    printf("arr + 2 : %p\n", (void *)(arr + 2));

    printf("sizeof(int): %zu\n", sizeof(int));

    printf("First Two Sum: %d\n", sum_array(arr, 2));
    printf("Two-Four Sum: %d\n", sum_array(arr + 1, 3));
    printf("Last One Sum: %d\n", sum_array(arr + 4, 1));
    printf("Total Sum: %d\n", sum_array(arr, 5));
    printf("Sum of 0 length: %d\n", sum_array(arr, 0));

    return 0;
}
