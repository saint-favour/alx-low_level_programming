#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: the character to printet number.
 *
 * Return: on success 1.
 * on error, -1 is returned, and erro is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
