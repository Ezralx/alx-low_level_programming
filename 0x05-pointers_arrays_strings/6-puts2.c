#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str:String
 */
void puts2(char *str)
{
	int count = 0;
	int n;

	while (str[count] != '\0')
	{

		count++;
	}

	for (n = 0; n < count; n += 2)

	{

		_putchar(str[n]);
	}

	_putchar('\n');

}

