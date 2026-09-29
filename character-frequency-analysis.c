#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            continue;

        count = 1;

        for (j = 0; j < i; j++)
        {
            if (tolower(str[i]) == tolower(str[j]))
            {
                count = 0;
                break;
            }
        }

        if (count == 1)
        {
            count = 0;

            for (j = 0; str[j] != '\0'; j++)
            {
                if (tolower(str[i]) == tolower(str[j]))
                {
                    count++;
                }
            }

            printf("%c = %d\n", str[i], count);
        }
    }

    return 0;
}