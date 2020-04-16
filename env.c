#include "holberton.h"
/**
 * env - function to print env
 * Return: void
 */
void env(void)
{
int j = 0, k = 0;

	while (environ[j])
	{
		k = _strlen(environ[j]);
		write(STDOUT_FILENO, environ[j], k);
		write(STDOUT_FILENO, "\n", 1);
		j++;
	}
}
