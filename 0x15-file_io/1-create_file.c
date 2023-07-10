#include "main.h"

/**
* create_file - Function that creates a file
* @filename: filenames.
* @text_content: contents writed in the file.
*
* Return: 1 if it success. -1 if it fails.
*/
int create_file(const char *filename, char *text_content)
{
int f;
int nmletters;
int rw;

if (!filename)
return (-1);

f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (f == -1)
return (-1);

if (!text_content)
text_content = "";

for (nmletters = 0; text_content[nmletters]; nmletters++)
;

rw = write(f, text_content, nmletters);

if (rw == -1)
return (-1);

close(f);

return (1);
}
