#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fopen, len = 0, fwrite;

	if (filename == NULL)
		return (-1);

	fopen = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fopen == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	fwrite = write(fopen, text_content, len);

	if (fwrite == -1)
		return (-1);

	close(fopen);
	return (1);
}
