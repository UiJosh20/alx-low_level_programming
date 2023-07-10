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
	FILE *file = fopen(filename, "r");
	ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);
	ssize_t bytes_written;

	if (file == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	if (bytes_read < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';
	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
	if (bytes_written != bytes_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (bytes_read);

}
