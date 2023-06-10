#include <stdio.h>
/**
 * main - prints all arg it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		main(argc -1, argv + 1);
	}
	return (0);
}
