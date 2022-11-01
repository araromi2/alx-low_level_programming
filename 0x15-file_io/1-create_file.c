#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content to placed in the file
 *
 * The creted file must have those permissions: rw-------
 * If the file already exists, do not change the permissions
 * If the file already exists, truncate it
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, temp;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{

		for (i = 0; *(text_content + i) != '\0'; i++)
			;
		temp = write(fd, text_content, i);
		if (temp == -1 || i != temp)
			return (-1);
	}
	if (close(fd) < 0)
		return (-1);
	return (1);
}

