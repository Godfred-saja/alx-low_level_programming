#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Function reads a text file and prints it to POSIX stdout.
* @filename: A pointer to the name of the files
* @letters: The number of letters to be printed
* Return: If the function fails or filename is NULL 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t op, rd, wn;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

op = open(filename, O_RDONLY);
rd = read(op, buf, letters);
wn = write(STDOUT_FILENO, buf, rd);

if (op == -1 || rd == -1 || wn == -1 || wn != rd)
{
free(buf);
return (0);
}

free(buf);
close(op);

return (wn);
}
