#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    // Length
    len = strlen(str);
    printf("Length = %d\n", len);

    // Reverse
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    // Palindrome
    if(strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // Equality check
    printf("Enter another string: ");
    scanf("%s", str2);

    if(strcmp(str, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // Substring check
    if(strstr(str, str2))
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}
