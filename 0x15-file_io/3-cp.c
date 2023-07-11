#include "main.h"
#define BUFFER_SIZE 1204
/**
 * print_error_and_exit - prints error and exits
 * @message: message to display
 * Return: void
 */
void print_error_and_exit(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(EXIT_FAILURE);
}
/**
 * copy_file - copys file
 * @file_from: where to copied from
 * @file_to: where to be copied to
 * Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t b_read, b_write;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit("Error: Can't read from file");
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit("Error: Can't write to file");
	}

	while ((b_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		b_write = write(fd_to, buffer, b_read);
		if (b_write == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit("Error: Can't write to file");
		}
	}

	if (b_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit("Error: Can't read from file");
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error_and_exit("Error: Can't close fd");
	}
}
/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		print_error_and_exit("Usage: cp file_from file_to");
	}

	copy_file(file_from, file_to);
	return (EXIT_SUCCESS);
}

