#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];

  
    // Using strcpy
    strcpy(str3, str1);
    printf("After strcpy: %s\n", str3);
    // Using strncpy
    strncpy(str3, str1, sizeof(str3) - 1);
    printf("After strncpy: %s\n", str3);

    // Using strcat
    strcat(str1, " ");
    strcat(str1, str2);
    printf("After strcat: %s\n", str1);

    // Using strncat
    strncat(str3, str2, 5);
    printf("After strncat: %s\n", str3);

    // Using strcmp
    int cmpResult = strcmp(str1, str2);
    printf("strcmp result: %d\n", cmpResult);

    // Using strncmp
    cmpResult = strncmp(str1, "Hello", 5);
    printf("strncmp result: %d\n", cmpResult);

    // Using strlen
    size_t len = strlen(str1);
    printf("Length of str1: %zu\n", len);

    return 0;
}
