#include <stdio.h>
#include <stddef.h>

int sum(const int *p, size_t length){
    int sum = 0; 
    
    for(size_t i = 0; i < length; i++){
        sum += *(p + i);
    }

    return sum;
}

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    int result = sum(arr, 5);

    printf("%d\n", result);

    printf("%zu\n", sizeof(arr));
    printf("%zu\n", sizeof(p));

    printf("%d\n", arr[2]);
    printf("%d\n", *(p + 2));
    return 0;
}
