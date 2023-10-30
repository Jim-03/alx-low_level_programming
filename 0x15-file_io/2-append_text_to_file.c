#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - adds text to file
 * @filename: the name of the file
 * @text_content: the text to append
 * Return: -1 or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptr;

	if (filename == NULL)
		return (-1);

	ptr = fopen(filename, "a");

	if (ptr == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	fprintf(ptr, "%s", text_content);

	fclose(ptr);
	return (1);
}
