#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: num argument
 * @argv: string argument
 * Return: 1 on success 0 on failure
 */
int main(int argc, char *argv[])
{
	int from_file = 0, to_file = 0;
	ssize_t b;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
	if (to_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((b = read(from_file, buf, 1024)) > 0)
		if (write(to_file, buf, b) != b)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

	from_file = close(from_file);
	to_file = close(to_file);
	if (from_file)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file), exit(100);
	if (to_file)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file), exit(100);
	return (EXIT_SUCCESS);
}
