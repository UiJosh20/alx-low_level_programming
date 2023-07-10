#include "main.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters + 1);
	int file = open(filename, O_RDWR);
	ssize_t bytes_read = read(file, buffer, letters);
	ssize_t bytes_written;

	if (file == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	if (bytes_read == -1)
	{
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		return (0);
	}

	free(buffer);
	close(file);
	return (bytes_written);

}
