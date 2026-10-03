#include <stdio.h>

int main()
{
    char first[50], last[50], full[100];
    int i = 0, j = 0;

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    /* Copy first name */
    while(first[i] != '\0')
    {
        full[i] = first[i];
        i++;
    }

    /* Add space */
    full[i] = ' ';
    i++;

    /* Copy last name */
    while(last[j] != '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }

    full[i] = '\0';

    printf("Complete name: %s", full);

    return 0;
}