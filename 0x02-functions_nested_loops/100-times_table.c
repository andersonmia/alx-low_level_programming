#include "main.h"

/**
 * print_times_table - prints times table for counterbers from 0-14
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
	int counter, var2, var3;

	if (n >= 0 && n <= 15)
	{
		for (counter = 0; counter <= n; counter++)
		{
			_putchar('0');

			for (var2 = 1; var2 <= n; var2++)
			{
				_putchar(',');
				_putchar(' ');

				var3 = counter * var2;

				if (var3 <= 99)
					_putchar(' ');
				if (var3 <= 9)
					_putchar(' ');

				if (var3 >= 100)
				{
					_putchar((var3 / 100) + '0');
					_putchar(((var3 / 10)) % 10 + '0');
				}
				else if (var3 <= 99 && var3 >= 10)
				{
					_putchar((var3 / 10) + '0');
				}
				_putchar((var3 % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
