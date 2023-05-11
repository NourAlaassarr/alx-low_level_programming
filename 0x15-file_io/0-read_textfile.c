#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - function to read file
 * @filename: file to read
 * @letters: letters in file
 *
 * Return: File content
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int Writeon, Readfile;
	int ptr;
	char *tostore;

	tostore = (malloc(letters * sizeof(char)));

	if (tostore == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	Readfile = read(ptr, tostore, letters);

	if (Readfile == -1)
{
	free(tostore);
	close(ptr);
return (0);
}
Writeon = write(STDOUT_FILENO, tostore, Readfile);

if (Writeon == -1)
{
	free(tostore);
	close(ptr);
	return (0);
}
close(ptr);
return (Readfile);
}
