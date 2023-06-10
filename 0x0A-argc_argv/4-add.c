#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two positive number
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int valid, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	valid = 1;
	i = 1;
	if (i < argc)
	{
		int j = 0;

		if (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				valid = 0;
			}
			j++;

		}
		if (valid)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;

	}


	printf("%d\n", sum);
	return (0);
}
