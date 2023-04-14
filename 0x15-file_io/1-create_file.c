#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f_opn, f_wrt, count = 0;
	/* condition: filename is NULL */
	if (filename == NULL)
	{
		return (-1);
	}

	/* condition: text_content is NULL */
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	f_opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f_wrt = write(f_opn, text_content, count);

	if(f_opn == -1 || f_wrt == -1)
	{
		return (-1);
	}

	close(f_opn);

	return (1);
}
