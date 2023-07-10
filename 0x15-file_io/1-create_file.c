#include "main.h"
/**
 * create_file -  read and print file
 * @filename: file name
 * @text_content: content to be printed
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
int file;
ssize_t byt;
ssize_t len = strlen(text_content);
if (!filename)
{
return (-1);
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
if (len)
{
byt = write(file, text_content, len);
}
close(file);
return (byt == len ? 1 : -1);
}
