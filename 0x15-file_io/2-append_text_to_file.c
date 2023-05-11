#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - fun to append
 * @filename:file name
 * @text_content: string
 * Return: 1 if succeed
 */

int append_text_to_file(const char *filename, char *text_content)
{
int ptr, writein;
int size = 0;

if (filename == NULL)
	return (-1);
ptr = open(filename, O_WRONLY | O_APPEND);

if (ptr < 0)
	return (-1);
if (text_content == NULL)
	text_content = "";
if (text_content)
{
	while (text_content[size])
		size++;
	writein = write(ptr, text_content, size);
	if (writein != size)
		return (-1);
}
close(ptr);
return (1);
}
