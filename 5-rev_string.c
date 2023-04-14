#include <unistd.h>
#include <stdio.h>
#include "main.h"
void rev_string(char *s)
{
    if (s == NULL)
        return;

    int len = 0;
    while (s[len] != '\0')
        len++;

    for (int i = 0; i < len / 2; i++) {
        char tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
    }
}
