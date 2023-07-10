#include "main.h"

/**
* read_textfile - Function that reads a text file and prints the letters
* @filename: filenames.
* @letters: numbers of letters printed.
*
* Return: Return numbers of letters printed. It fails, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t nr, nw;
char *buf;

if (!filename)
return (0);

f = open(filename, O_RDONLY);

if (f == -1)
return (0);

buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);

nr = read(f, buf, letters);
nw = write(STDOUT_FILENO, buf, nr);

close(f);

free(buf);

return (nw);
}
