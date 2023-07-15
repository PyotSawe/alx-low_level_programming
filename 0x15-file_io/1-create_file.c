#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: filename
 * @text_content: msg_content
 * Return: -1 if NULL in FN, 1 on sucess
 */

int create_file(const char *filename, char *text_content)
{
	int final_out = 0;
	int  fdecr = 0;
	int  file_off = 0;

	if (filename == NULL)
		return (-1);
	fdecr = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdecr == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + file_off) != '\0')
		{
			file_off++;
		}
		final_out = write(fdecr, text_content, file_off);
	}
	if (final_out == -1 && final_out != file_off)
		return (-1);
	return (1);
}
