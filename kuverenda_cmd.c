#include "shell.h"

/**
 * read_line - function that reads line
 *
 * @i_eof: var
 * Return: return 0 if true
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
