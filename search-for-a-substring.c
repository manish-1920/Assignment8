#include <stdio.h>

int main()
{
    char str[200], word[100];
    int i, j, found = 0, position = -1;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    getchar();

    printf("Enter word to search: ");
    scanf("%[^\n]", word);

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(word[j] != '\0' && str[i + j] == word[j])
        {
            j++;
        }

        if(word[j] == '\0')
        {
            found = 1;
            position = i;
            break;
        }
    }

    if(found == 1)
        printf("Word found at position %d", position);
    else
        printf("Word not found");

    return 0;
}