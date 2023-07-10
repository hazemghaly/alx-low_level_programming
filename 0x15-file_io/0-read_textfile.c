#include "main.h"
/**
 * read_textfile -  read and print file
 * @filename: file name
 * @letters: letters to be printed
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t byt;
char buffer[BUFFER_SIZE * 8];
if (!filename || !letters)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
byt = read(file, &buffer[0], letters);
byt = write(STDOUT_FILENO, &buffer[0], byt);
close(file);
return (byt);
}
