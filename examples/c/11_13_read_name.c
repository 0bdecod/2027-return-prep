#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20];

    printf("이름 입력: ");

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';
    /*This code finds the position of the first '\n' character in a string and replaces it with a '\0'. If there is no newline character, 
    it simply sets the existing null-terminator position to a null character again, ensuring it works safely even with strings that are already properly null-terminated.*/

    printf("문자열: %s\n", name);
    printf("길이: %zu\n", strlen(name));

    return 0;
}
