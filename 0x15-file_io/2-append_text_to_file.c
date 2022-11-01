#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at th end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fh, i, temp;

	if (filename == NULL)
		return (-1);
	fh = open(filename, O_APPEND | O_WRONLY);
	if (fh == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; *(text_content + i); i++)
			;
		temp = write(fh, text_content, i);
		if (temp == -1 || i != temp)
			return (-1);
	}
	if (close(fh) < 0)
		return (-1);
	return (1);
}

