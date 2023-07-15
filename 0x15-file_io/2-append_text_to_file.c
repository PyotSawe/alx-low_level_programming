#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: given filename
 * @text_content: ptr of char
 * Return: -1 if NULL in FN, 1 on sucess
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdecr, final_out, file_off = 0;

	fdecr = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (fdecr == -1)
	return (-1);
	if (text_content == NULL)
		return (1);
	while (*(text_content + file_off) != '\0')
		file_off++;
	final_out = write(fdecr, text_content, file_off);
	if (final_out == -1)
		return (-1);
	return (1);
}
