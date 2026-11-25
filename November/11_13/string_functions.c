#include <stdio.h>
#include <string.h>

int main(void) {
    {
char str[] = "Hello";

printf("%zu\n", strlen(str)); // 5
printf("%zu\n", sizeof(str)); // 6
    }

    {
char a[] = "apple";
char b[] = "banana";

printf("%d\n", strcmp(a, b));
    }

    {
char src[] = "Hello";
char dest[10];

strcpy(dest, src);

printf("%s\n", dest); // Hello
    }

    return 0;
}
