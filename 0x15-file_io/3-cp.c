#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * main - the main function
 * @argc: arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	const char *from = argv[1];
	int source = open(from, O_RDONLY);
	const char *to = argv[2];
	int destination = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char buf[1024];
	ssize_t bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		close(source);
		exit(99);
	}

	while ((bytes = read(source, buf, sizeof(buf))) > 0)
	{
		if (write(destination, buf, bytes) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			close(source);
			close(destination);
			exit(99);
		}
	}

	if (close(source) == -1 || close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		exit(100);
	}

	return (0);
}
