#include "main.h"
/**
 * append_text_to_file -  append text file
 * @filename: file name
 * @text_content: content to be printed
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
ssize_t byt;
ssize_t len = strlen(text_content);
if (!filename)
{
return (-1);
}
file = fopen(filename, "a+");
if (file == -1)
{
return (-1);
}
if (len)
{
byt = fwrite(file, text_content, len);
}
fclose(file);
return (byt == len ? 1 : -1);
}
