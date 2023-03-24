#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character specified by the argument char to stdout.
 * @c: Character  printing
 * Return:1 sucssess and 0 different
 * Error returns -1
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}

