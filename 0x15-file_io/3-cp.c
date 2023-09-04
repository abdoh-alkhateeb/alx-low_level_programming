#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * main - a program that copies a file into another file.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: 0 on success, and 97 through 100 on failure.
 */
int main(int ac, char *av[])
{
	int fd_source, fd_dest;
	char buffer[BUFSIZE];
	ssize_t bytes_read, bytes_written;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_source = open(av[1], O_RDONLY);
	if (fd_source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
				   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while (1)
	{
		bytes_read = read(fd_source, buffer, BUFSIZE);
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		else if (bytes_read > 0)
		{
			bytes_written = write(fd_dest, buffer, bytes_read);
			if (bytes_written == -1 || bytes_written != bytes_read)
				dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
		}
		else
			break;
	}

	if (close(fd_source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source), exit(100);
	if (close(fd_dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest), exit(100);

	return (0);
}
