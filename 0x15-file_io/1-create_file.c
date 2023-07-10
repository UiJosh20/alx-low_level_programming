#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t bytes_written = write(file_descriptor, text_content, strlen(text_content));

	if (filename == NULL)
	{
		return (-1);
	}
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
