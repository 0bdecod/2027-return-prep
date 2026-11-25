#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main(void){
    char name1[20];
    char name2[20];

    printf("name1: ");
    fgets(name1, sizeof(name1), stdin);
    printf("name2: ");
    fgets(name2, sizeof(name2), stdin);

    if(strcmp(name1, name2) == 0){
        printf("Same name\n");
    }
    return 0;
}
