#include "holberton.h"
/**
  * No_interactive - wether interactive or not
  * @line: line
  * @args: arguments passed
  * Return: nothing
  */
void No_interactive(char *line, char **args)
{
	int status, j;
	size_t len;

	while (getline(&line, &len, stdin) != EOF)
	{
		args = _splitline(line);
		if (args[0] != NULL)
		{
			status = execute(args, &j, 1);
		}
		if (status == 0)
		{
			if (j == 1)
			{
				free(args[0]);
			}
			free(args);
		}
		free(line);
	}
}
