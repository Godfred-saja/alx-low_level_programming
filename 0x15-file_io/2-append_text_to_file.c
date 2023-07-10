#include "main.h"

/**
* append_text_to_file - Function that appends text at the end of a files
* @filename: filenames.
* @text_content: added content.
*
* Return: Return 1 if the file exists. -1 if the fails does not exist
* or if its fails.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f;
int nmletters;
int rw;

if (!filename)
return (-1);

f = open(filename, O_WRONLY | O_APPEND);

if (f == -1)
return (-1);

if (text_content)
{
for (nmletters = 0; text_content[nmletters]; nmletters++)
;

rw = write(f, text_content, nmletters);

if (rw == -1)
return (-1);
}

close(f);

return (1);
}
