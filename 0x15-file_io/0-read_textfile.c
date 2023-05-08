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
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return(0);

	fd = open(fn, 0_RDONLY);

	if (fd == -1)
		return(0);
	buf = malloc(sizeof(char) * (letter));
	if (!buf)
		return (0);

	nrd = read(fd, buf,letter);
	nwr = wite(STDOUT_FILENO, buff, nrd);

	close (fd);

	free(buf);

	return (nwr);
}
