#include <stdio.h>
/**
 * main - prints out the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int inc;
	unsigned long n1 = 0, n2 = 1, n3;
	for (inc = 0; inc < 98; inc++)

	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
		printf(", ");
	}
	return (0);
}

