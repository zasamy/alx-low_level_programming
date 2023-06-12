#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to read
 * @letters: size letters
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl, rd, wt;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fl = open(filename, O_RDONLY);

	if (fl == -1)
	{
		free(text);
		return (0);
	}
	rd = read(fl, text, letters);
	wt = write(STDOUT_FILENO, text, rd);
	close(fl);
	return (wt);
}
