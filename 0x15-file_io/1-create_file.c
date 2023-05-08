#include "main.h"

/**
 * creat_file - This function creates a file
 * @fn: parameter for file name
 * @textContent: conttent to be written
 * Return: it prints 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletter;
	int rwrite;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (nletter = 0; text_content[nletter]; nletter++)
		;
	rwrite = write(fd, text_content, nletter);
	if(rwrite == -1)
		return(-1);
	close (fd);
	return (1);
}
