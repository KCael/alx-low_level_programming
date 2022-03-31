#include "main.h"

/**
 * times_table -prints tables
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int r, cl, pr;

	for (r = 0; r < 10; r++)
	{
		for (cl = 0; cl <= 9; cl++)
		{
			pr = r * cl;
			if (cl == 0)
				_putchar(pr + '0');

			else if (pr < 10 && cl != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(pr + '0');
			}

			else if (pr >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((pr / 10) + '0');
				_putchar((pr % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
