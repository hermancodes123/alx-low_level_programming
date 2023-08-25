#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character 0 to stdout
 * @c: The character to print
 *
 * Return: ON success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (wrie(1, &c, 1));
}
