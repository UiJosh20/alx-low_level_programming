#include <stdio.h>
#include <stdlib.h>

/**
 * mul - multiplies two numbers
 * @n1: number 1
 * @n2: number 2
 * Return: void
 */
int mul(int n1, int n2)
{
	return (n1 * n2);
}

/**
 * main - program that multiplies two number
 * @argc: argument count
 * @argv: argument vector
 * Return: Alawys 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = mul(n1, n2);

	printf("%d\n", result);
	return (0);
}
