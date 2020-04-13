#include "holberton.h"
/**
  * _builtins - set built-in commds
  * @arg: commands passed
  * Return: 0 || 1
  */
int _builtins(char **arg)
{
	int i = 0;
	char *builts[] = {"exit", "env", NULL};

	while (builts[i])
	{
		if (_strcmp(arg[0], builts[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
