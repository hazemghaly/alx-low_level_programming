#include "main.h"
/**
 * read_textfile -  read and print file
 * @filename: file name
 * @letters: letters to be printed
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
ssize_t byt;
char buffer[READ_BUF_SIZE * 8];
if (!filename || !letters)
{
return(0);
}
file = open(filename, O_RDONLY);
if (file == NULL)
{
return (0);
}
byt = read(file, &buf[0], letters);
byt = write(STDOUT_FILENO, &buf[0], bytes);
close(fd);
return (byt);
}
