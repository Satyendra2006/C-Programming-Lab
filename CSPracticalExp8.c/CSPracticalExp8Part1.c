#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[20], str1[20], copy_str[20];
    int length, leng, res;

    printf("Enter the first string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    length = strlen(str);
    leng = strlen(str1);
    printf("Length of the first string is %d\n", length);
    printf("Length of the second string is %d\n", leng);
    res = strcmp(str, str1);
    printf("Compare string result is: %d\n", res);
    strcpy(copy_str, str1);
    printf("Copy of the second string is: %s\n", copy_str);
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase version of the first string is: %s\n", str);
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower(str1[i]);
    }
    printf("Lowercase version of the second string is: %s\n", str1);

    return 0;
}
