#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    j = i - 1;
    i = 0;

    while(i < j)
    {
        char a = str[i];
        char b = str[j];

        if(a >= 'A' && a <= 'Z')
            a = a + 32;

        if(b >= 'A' && b <= 'Z')
            b = b + 32;

        if(a != b)
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}