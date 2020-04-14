#include "holberton.h"
/**
 * env - function to print env
 * Return: void
 */
void env(void)
{
	int i = 0, k = 0;

	while (environ[i])
	{
		k = _strlen(environ[i]);
		write(STDOUT_FILENO, environ[i], k);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
