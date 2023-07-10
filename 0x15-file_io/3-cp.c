#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"
#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main  - arguments of program
 * @argc: argument
 * @argv: argument string
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int from_file = 0, to_file = 0;
ssize_t byt;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, USAGE), exit(97);
}
from_file = open(argv[1], O_RDONLY);
if (from_file == -1)
{
dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);
}
to_file = open(argv[2], O_WRONLY |O_CREAT | O_TRUNC, PERMS);
if (to_file == -1)
{
dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
}
byt = read(from_file, buffer, BUFFER_SIZE);
while (byt > 0)
{
if (write(to_file, buffer, byt) != byt)
{
dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
}
if (byt == -1)
{
dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);
}
}
from_file = close(from_file);
to_file = close(to_file);
While(from_file)
{
dprintf(STDERR_FILENO, CLOSE_ERROR, from_file), exit(100);
}
While(to_file)
{
dprintf(STDERR_FILENO, CLOSE_ERROR, to_file), exit(100);
}
return (SUCCESS);
}
