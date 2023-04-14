#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: points to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: 1 if the files exist otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_opn, f_wrt, count = 0;

	/* condition: return -1 if filename is NULL */
	if (filename == NULL)
	{
		return (-1);
	}
	/* condition: don't write on file if text_content is NULL */
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	f_opn = open(filename, O_WRONLY | O_APPEND);
	f_wrt = write(f_opn, text_content, count);

	/* condition: return 1 if the file exists otherwise -1 */
	if (f_opn == -1 || f_wrt == -1)
	{
		return (-1);
	}

	close(f_opn);

	return (1);
}
