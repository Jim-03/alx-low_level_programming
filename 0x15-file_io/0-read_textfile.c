#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: the file name
 * @letters: number of letters to read
 * Return: 0 or number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *let = malloc(letters);
	ssize_t read, write;
	FILE *ptr;

	if (filename == NULL)
		return (0);
	if (let == NULL)
		return (0);

	ptr = fopen(filename, "r");

	if (!ptr)
	{
		free(let);
		return (0);
	}

	read = fread(let, 1, letters, ptr);

	if (read < 1)
	{
		fclose(ptr);
		free(let);
		return (0);
	}

	write = fwrite(let, 1, read, stdout);
	fclose(ptr);
	free(let);

	if (write < read)
		return (0);

	return (write);
}
