#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0;
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fh, nb_read = -1, count = 0, temp;
	char *buf = malloc(sizeof(*buf) * letters);

	if (filename == NULL)
		return (0);
	fh = open(filename, O_RDONLY);
	if (fh == -1)
		return (0);
	nb_read = read(fh, buf, letters);
	if (nb_read == -1)
		return (0);
	buf[nb_read] = '\0';
	temp = write(STDOUT_FILENO, buf, nb_read);
	if (temp == -1)
		return (0);
	count += temp;
	free(buf);
	return (count);
}

