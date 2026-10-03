#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;
    int count = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    printf("\nWords:\n");

    while(str[i] != '\0')
    {
        /* Skip spaces */
        while(str[i] == ' ')
        {
            i++;
        }

        if(str[i] == '\0')
            break;

        /* Print one word */
        while(str[i] != ' ' && str[i] != '\0')
        {
            printf("%c", str[i]);
            i++;
        }

        printf("\n");
        count++;
    }

    printf("\nTotal number of words = %d", count);

    return 0;
}