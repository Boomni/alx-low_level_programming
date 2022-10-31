#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * prints it to POSIX standard output.
 *
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount;
	char *buffer;

	/* check if filename is present */
	if (filename == NULL)
		return (0);

	/* open file and redirect the return value of file into fd */
	fd = open(filename, O_RDWR);
	/* if -1 open failed */
	if (fd == -1)
		return (0);

	/* get buffer size from letters */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	/* read file */
	rcount = read(fd, buffer, letters);
	if (rcount == -1)
		return (0);

	/* write to POSIX */
	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);

	free(buffer);

	close(fd);

	return (wcount);
}

