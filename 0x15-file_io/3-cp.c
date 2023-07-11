#include "main.h"
#define MAXSIZE 1204
#define SE STDERR_FILENO
/**
 * main - main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ifo, ofo, iw, ow;
	char buffer[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	}
	ifo = open(argv[1], O_RDONLY);
	if (ifo == -1)
		dprintf(SE, "Error: Can't write to %s\n", argv[1]), exit(98);
	ofo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (ofo == -1)
		dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
	do
	{
		iw = read(ifo, buffer, MAXSIZE);
		if (iw == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (iw > 0)
		{
			ow = write(ofo, buffer, (ssize_t)iw);
			if (ow == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (iw > 0);
	iw = close(ifo);
	if (iw == -1)
		dprintf(SE, "Error: Can't close fd %d\n", ifo), exit(100);
	ow = close(ofo);
	if (ow == -1)
		dprintf(SE, "Error: Can't close fd %d\n", ofo), exit(100);

	return (0);
}
