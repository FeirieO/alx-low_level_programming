#include <stdio.h>
/**
 * main - Entry point
 * Description 'print alphabets except q and e'
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (j = 0; j < 99; j++)
	{
		for (j = 0; j < 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
