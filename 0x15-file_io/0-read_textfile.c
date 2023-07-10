/*
 * file_io, Task 0: function that reads a text file and prints it to
 * the POSIX standard output.
 */
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: number of letters the function should read and print.
 * Return: actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_opn, f_read, f_wrt;
	char *buffer = malloc(sizeof(char) * letters);

	/* condition: filename is NULL return 0. */
	if (filename == NULL)
	{
		return (0);
	}

	/* condition: file cannot be opened or read, return 0. */
	if (buffer == NULL)
	{
		return (0);
	}

	/* condition: write fails or doesn't write expected bytes, return 0 */
	f_opn = open(filename, O_RDONLY);
	f_read = read(f_opn, buffer, letters);
	f_wrt = write(STDOUT_FILENO, buffer, f_read);

	if (f_opn == -1 || f_read == -1 || f_wrt == -1 || f_wrt != f_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(f_opn);

	return (f_wrt);
}
