#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, position = -1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    getchar();

    printf("Enter character to search: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            position = i;
            break;
        }
    }

    if(position != -1)
        printf("Character found at position %d", position);
    else
        printf("Character not found");

    return 0;
}