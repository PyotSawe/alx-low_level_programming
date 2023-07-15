#include "main.h"

#define BUFFER_SIZE 1024
/**
 * close_w - close function
 * @fdread: read
 * @fdwrite: write
 */
void close_w(int fdread, int fdwrite)
{
	if (close(fdwrite) == -1)/*Close the file and if errors report*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdwrite);
		exit(100); }
	if (close(fdread) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdread);
		exit(100); }
}

/**
 * main - Function that copies the content of a file to another file
 * @argc: argument of count
 * @argv: argument of array
 * Return: exit_success if success, exit error 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	char *src_file, *dest_file;
	int fdread, fdwrite;
	ssize_t rd = 1024, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src_file = argv[1];
	dest_file = argv[2];
	fdread = open(src_file, O_RDONLY);
	if (fdread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98); }
	fdwrite = open(dest_file, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fdwrite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99); }
	while (rd == BUFFER_SIZE)
	{
		rd = read(fdread, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
			exit(98); }
		wr = write(fdwrite, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			exit(99); }}
	close_w(fdread, fdwrite);
	return (0);
}
