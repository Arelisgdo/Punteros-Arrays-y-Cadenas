#include <unistd.h>
#include <stdio.h>
#include "main.h"
void puts2(char *str)
{
    if (str == NULL)
        return;

    int len = 0;
    while (str[len] != '\0')
        len++;

    for (int i = 0; i < len; i += 2)
        _putchar(str[i]);

    _putchar('\n');
}
