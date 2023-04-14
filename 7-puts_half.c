#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include "main.h"
void puts_half(char *str)
{
    if (str == NULL)
        return;

    int len = 0;
    while (str[len] != '\0')
        len++;

    int start = len / 2;
    if (len % 2 != 0)
        start++;

    for (int i = start; i < len; i++)
        _putchar(str[i]);

    _putchar('\n');
}
