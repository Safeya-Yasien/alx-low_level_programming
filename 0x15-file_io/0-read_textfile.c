#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: const char type pointer to file to be read
 *
 * @letters: size_t type
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int fopen;
	ssize_t fread, fwrite, fclose;

	if (filename == NULL)
	{
		return (0);
	}

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
		return (0);
	}

	fopen = open(filename, O_RDONLY);

	if (fopen == -1)
	{
		free(text);
		return (0);
	}

	fread = read(fopen, text, letters);

	if (fread == -1)
	{
		return (-1);
	}

	fwrite = write(STDOUT_FILENO, text, fread);

	if (fwrite == -1)
	{
		return (-1);
	}

	fclose = close(fopen);

	if (fclose == -1)
	{
		return (-1);
	}

	return (fread);
}
