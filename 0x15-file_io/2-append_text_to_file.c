#include "main.h"
/**
 * append_text_to_file - appends text to the end of the file
 * @filename: filename
 * @text_content: string to append
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, written, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
	{
		return (-1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
	{
		;
	}

	written = write(file, text_content, i);
	if (written == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
}
