#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file -creates a file
 * @filename: the name of the file
 * @text_content: null terminated string
 * Return: 1 on success -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int add;
	ssize_t len, rite;

	if (filename == NULL)
		return (-1);

	add = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (add == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		rite = write(add, text_content, len);

		if (rite == -1)
		{
			close(add);
			return (-1);
		}
	}

	close(add);
	return (1);
}
