#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, len1 = 0, len2 = 0;
    int result = 0;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    /* Find length of first string */
    while(str1[len1] != '\0')
        len1++;

    /* Find length of second string */
    while(str2[len2] != '\0')
        len2++;

    /* Compare strings */
    i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            result = str1[i] - str2[i];
            break;
        }

        i++;
    }

    if(result == 0)
    {
        if(len1 == len2)
            printf("Strings are equal");
        else if(len1 < len2)
            printf("First string comes first lexicographically");
        else
            printf("Second string comes first lexicographically");
    }
    else if(result < 0)
    {
        printf("First string comes first lexicographically");
    }
    else
    {
        printf("Second string comes first lexicographically");
    }

    printf("\nLength of first string = %d", len1);
    printf("\nLength of second string = %d", len2);

    return 0;
}