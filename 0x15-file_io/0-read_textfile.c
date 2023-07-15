#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: filename
 * @letters: letters
 * Return: 1 if cannot be oppened or read 0, if is NULL 0, if writes fail 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdecr; /* File decriptor index */
	ssize_t rd, wr;
	char *buf; /* buffer of File Stream*/

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fdecr = open(filename, O_RDONLY);
	if (fdecr == -1)
	{
		free(buf);
		return (0);
	}
	rd = read(fdecr, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fdecr);
		return (0);
	}
	close(fdecr);/*Close the file with this file descriptor*/
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	if (wr != rd)
		return (0);
	return (rd);
}
