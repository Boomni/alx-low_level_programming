#include "main.h"

#define S_E STDERR_FILENO

/**
 * main - a program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	ssize_t input_fd, output_fd, rstatus, ostatus, wstatus;
	char buf[1024];

	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* if argument count is not 3 return an error */
	if (argc != 3)
		dprintf(S_E, "Usage: cp file_from file_to\n"), exit(97);

	/* set input file descriptor */
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(S_E, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* set output file descriptor v*/
	output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_fd == -1)
		dprintf(S_E, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* read file */
	rstatus = read(input_fd, buf, 1024);
	if (rstatus == -1)
		dprintf(S_E, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (rstatus > 0)
	{
		wstatus = write(output_fd, buf, (ssize_t) rstatus);
		if (wstatus == -1)
			dprintf(S_E, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	rstatus = close(input_fd);
	if (rstatus == -1)
		dprintf(S_E, "Error: Can't close fd %d\n", input_fd), exit(100);
	ostatus = close(output_fd);
	if (ostatus == -1)
		dprintf(S_E, "Error: Can't close fd %d\n", output_fd), exit(100);
	return (0);
}

