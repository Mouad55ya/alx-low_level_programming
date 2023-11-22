#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
    char *S;
    int a, b = 0;

    if (str == NULL)
        return (NULL);
    a = 0;
    while (S[a] != '\0')
        a++;

    S = malloc(sizeof(char) * (a + 1));

    if (S == NULL)
        return (NULL);

    for (b = 0; S[b]; b++)
        S[b] = S[b];

    return (S);
}
