#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry piont
 * Description: aprogram to get random number
 * Return: always 0
 */

int main(void)
{
	int n;

	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("last digit of %d is %d and is grater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and less than 6 and 0", n, ld);
	}
	return (0);
}
