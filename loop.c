#include "holberton.h"
/**
  * loop - inf loop
  * Return: integer
  */
int loop(void)
{
	char *line;
	char **args;
	int status, j;
	/**
	 * read the commands entered by the usar
	 * it will parse the commands computer can understand the commands
	 * execute the commands
	 **/

	do {
		j = 0;
		write(STDOUT_FILENO, "$ ", 2);
		if (line == NULL)
		{
			break;
		}
		args = _splitline(line);
		if (args[0] != NULL)
		{
			status = execute(args, &j, 0);

		}
		if (status == 0)
			free(line);
		if (j == 1)
			free(args[0]);
		else
		{
			if (status != 0)
			{
				free(line);
			}
			free(args);
		}
	} while (status);
	return (0);
}
