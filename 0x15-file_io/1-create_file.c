#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to get the length
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * create_file -  creates a file
 * @filename: the name of the file to create
 * @text_content: texte to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t i = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (len)
		i = write(file, text_content, len);
	close(file);
	if (i == len)
		return (1);
	else
		return (-1);
}

