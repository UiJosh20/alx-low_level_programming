#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int add(int n1, int n2)
{
	return (n1 + n2);
}
/**
 * main - adds two positive number
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum, n1, n2;
	int i = 1, j = 2;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	n1 = atoi(argv[i]);
	n2 = atoi(argv[j]);

	sum = add(n1, n2);
	printf("%d\n", sum);
	return (0);
}
