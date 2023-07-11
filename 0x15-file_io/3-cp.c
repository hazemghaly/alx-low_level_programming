#include "main.h"
#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main  - arguments of program
 * @argc: argument
 * @argv: argument string
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
int from_file = 0, to_file = 0;
ssize_t byt;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
from_file = open(argv[1], O_RDONLY);
if (from_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
}
to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMS);
if (to_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
byt = read(from_file, buffer, BUFFER_SIZE);
while (byt > 0)
{
if (write(to_file, buffer, byt) != byt)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
}
if (byt == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
}
from_file = close(from_file);
to_file = close(to_file);
if (from_file)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file), exit(100);
if (to_file)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file), exit(100);
return (1);
}
