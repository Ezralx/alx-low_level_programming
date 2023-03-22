#include "main.h"
/**
 *jack_bauer - pints every minute of the day(00:00 to 23:59)
 *of jack bauer
 *Return: sucessful
 */
void jack_bauer(void)
{
	int n = 0, m;

	while (n < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((n / 10) + '0');
			_putchar((n / 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		n++;
	}
}

