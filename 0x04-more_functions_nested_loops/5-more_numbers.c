#include "main.h"

/**
* more_numbers - prints 10 times the number
* from 0 to 14
* Return: no return
*/
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (x = 0; y < 15; y++)
		{
			if (y => 10)
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
