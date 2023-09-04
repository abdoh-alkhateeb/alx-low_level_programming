#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of input file.
 * @letters: number of characters to read.
 *
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_written, bytes_read;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(fd);
	free(buffer);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}
