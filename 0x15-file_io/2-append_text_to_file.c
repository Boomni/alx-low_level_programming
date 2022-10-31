#include "main.h"

/**
 * append_text_to_file - appends text to file
 *
 * @filename: is the file to read
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_status, words = 0;

	/* check if filename is present */
	if (filename == NULL)
		return (-1);

	/* open file and redirect the return value of file into fd */
	file = open(filename, O_CREAT | O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	/* check if open was successful */
	if (file == -1)
		return (-1);

	if (text_content) /*write content to file if its not NULL*/
	{
		while (text_content[words] != '\0') /*find number of words*/
			words++;

		/*write to file*/
		write_status = write(file, text_content, words);
		if (write_status == -1) /*check if write was a succesful */
			return (-1);
	}

	close(file);

	return (1);
}

