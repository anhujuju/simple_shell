#include "holberton.h"
/**
  * execute - wether or not exec
  * @args: arguments passed
  * @flag: -flag
  * @mode: mode, interactive or not interactive
  * Return: integer
  */
int execute(char **args, int *flag, int mode)
{
	pid_t pid;
	int status;
	int status2 = 0;
	int k = 0;
	int flagfinder = 0;

	if (args == NULL)
		return (1);
	status2 = _builtins(args);
	if (status2 < 2)
		return (status2);
	for (k = 0; *(args[0] + k) != '\0'; k++)
	{
		if (*(args[0] + k) == '/')
		{
			flagfinder = 1;
			break;
		}
	}
	if (flagfinder == 0)
	{
		args[0] = finder(args[0], mode);
		*flag = 1;
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror("ERROR: Couldn't execute program");
			free(args[0]);
			free(args);
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
		perror("ERROR: Child couldn't be created");
	else
		wait(&status);
return (1);
}
