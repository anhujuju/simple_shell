#include "holberton.h"
/**
  * execute - wether or not exec
  * @args: arguments passed
  * @flag: -flag
  * @mode: mode
  * Return: integer
  */
int execute(char **args, int *flag, int mode)
{
	pid_t child;
	int status = 0, status2 = 0, counter = 0, finderflag = 0;

	if (args == NULL)
	{
		return (1);
	}
	status2 = builtins(args);
	if (status2 < 2)
		return (status2);
	for (counter = 0; *(args[0] + counter) != NULL; counter++)
	{
		if ((*args[0] + counter) == '/')
		{
			finderflag = 1;
			break;
		}
	}
	if (finderflag == 0)
	{
		args[0] = finder(args[0], mode);
		*flag = 1;
	}
	child = fork();
	if (child == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror("ERROR");
			free(args[0]);
			exit(EXIT_FAILURE);
		}
	}
	else if (child < 0)
		perror("Child couldn´t be created");
	else
		wait(&status);
	return (1);
}
