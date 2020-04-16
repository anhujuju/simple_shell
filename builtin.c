#include "holberton.h"

/**
  * builtins - set built-in commdss
  * @arg: commands passed
  * Return: 0 || 1
**/
int _builtins(char **args)
{
	int i = 0;
	char *builts[] = {"exit", "env", NULL};

	while (builts[i])
	{
		if (_strcmp(args[0], builts[i]) == 0)
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		return (0);
	case 1:
		env();
		return (1);
	default:
		return (2);
	}
}