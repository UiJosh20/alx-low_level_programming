#include <stdio.h>
/**
 * main - print number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("Number of arguments: %d\n", argc - 1);
	return (0);
}
