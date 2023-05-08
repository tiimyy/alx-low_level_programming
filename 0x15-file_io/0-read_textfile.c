#include "main.h"
/**
 * read_textfile- this function reads a text file and prints the letters
 * @fn: parameter of a filename.
 * @letter:parameter for letters number
 * Return: a number and zero(0) if it fails
 */
ssize_t read_textfile(const char *fn, size_t letter)
{
	int fd;
	ssize_t nread, nwrite;
	char *buff;

	if (!fn)
		return (0);

	fd = open(fn, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letter));
	if (!buff)
		return (0);

	nread = read(fd, buff, letter);
	nwrite = write(STDOUT_FILENO, buff, nread);

	close(fd);

	free(buff);

	return (nwrite);
}
