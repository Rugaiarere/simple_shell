#include "shell.h"

/**
 * get_sigint -
 * @sig: variable
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
