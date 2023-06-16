#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'Check for number if it is positive or negative:'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%dis positive \n" , n);
	}
	else if(n == 0)
	{
		printf("%dis zero \n" , n);
	}
	else
	{
		printf("%dis negative \n" , n);
	}
	return (0);
}
