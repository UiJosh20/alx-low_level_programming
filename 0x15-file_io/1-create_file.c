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
	int file, r, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		r = write(file, text_content, i);
		if (r == -1)
			return (-1);
	}
	close(file);
	return (1);
}
