#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        count = 0;

        /* Check whether this character appeared earlier */
        for(j = 0; j < i; j++)
        {
            char previous = str[j];

            if(previous >= 'A' && previous <= 'Z')
                previous = previous + 32;

            if(previous == ch)
                break;
        }

        if(j != i)
            continue;

        /* Count frequency */
        for(j = 0; str[j] != '\0'; j++)
        {
            char current = str[j];

            if(current >= 'A' && current <= 'Z')
                current = current + 32;

            if(current == ch)
                count++;
        }

        printf("%c = %d\n", ch, count);
    }

    return 0;
}