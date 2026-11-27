#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[8] = {0};

    printf("Enter your name: ");

     if (fgets(name, sizeof(name), stdin) == NULL){
        printf("Input failed\n");
        return 1;
    }

    size_t before = strlen(name);

    char *newline = strchr(name, '\n');

    if (newline != NULL){
        *newline = '\0';
    }

    size_t after = strlen(name);

    printf("Name: %s\n", name);
    printf("Before Length: %zu\n", before); 
    printf("After Length: %zu\n", after);
    printf("Array Size: %zu\n", sizeof(name));

    return 0;
}
