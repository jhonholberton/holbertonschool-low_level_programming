#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: pointer
 *@letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, w, c;
	char *buf = malloc(sizeof(char) * letters);
	ssize_t r;

	if (!filename || !buf)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	c = close(o);
	if (r < (ssize_t)w)
		return (0);
	if (o == -1 || r == -1 || w == -1 || c == -1)
		return (0);
	free(buf);
	return (r);
}
