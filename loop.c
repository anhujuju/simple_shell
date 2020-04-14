#include "holberton.h"
/**
  * main - inf loop
  * Return: integer
  */
int main(void)
{
	char *line = NULL;
	char **args = NULL;
	int status = 0, j;
	/**
	 * read the commands entered by the user
	 * it will parse the commands computer can understand the commands
	 * execute the commands
	 **/
	signal(SIGINT, _promp);
	if (isatty(STDERR_FILENO) != 1)
	{
		No_interactive(line, args);
	}
	else
	{
	do {
		j = 0;
		write(STDOUT_FILENO, "$ ", 2);
		line = _getline();
		if (line == NULL)
		{
			break;
		}
		args = _splitline(line);
		if (args[0] != NULL)
			status = execute(args, &j, 0);
		if (status == 0)
			free(line);
		if (j == 1)
			free(args[0]);
		else
		{
			if (status != 0)
				free(line);
			free(args);
		}
	} while (status);
}
return (0);
}
