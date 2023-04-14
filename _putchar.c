#include <unistd.h>
/**
 * _putchar - esta funcion recibe un caracter y retorna un entero
 * @character
 * return int
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
