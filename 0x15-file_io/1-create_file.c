#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - create file
 * @filename: filee name
 * @text_content: string
 *
 * Return: created file
 */
int create_file(const char *filename, char *text_content)
{
mode_t mode = S_IRUSR | S_IWUSR;
	int ptr, writeon;
	int size = 0;

if (filename == NULL)
	return (-1);
ptr = open(filename, O_CREAT | O_RDWR, mode);
if (ptr < 0)
	return  (-1);
if (text_content == NULL)
{
	close(ptr);
	return (1);
}
if (text_content)
{
while (text_content[size])
	size++;
writeon = write(ptr, text_content, size);

if (writeon != size)
	return (-1);
}
close(ptr);
return (1);
}
