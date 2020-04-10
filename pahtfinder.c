#include "holberton.h"

char *finder(char *command, int mode)
{
	int i = 0, j = 0, flagcurr = 0;
	char *completepath = NULL, *envcpy = NULL, *token = NULL;
	char **tokens = NULL;

	tokens = (char **)malloc(sizeof(char *) * 1024);
	if (tokens == NULL)
		return (NULL);

	while (environ[i])
	{
		if (_strcmp_path(environ[i], "PATH=") == 0)
			break;
		i++;
	}
	envcpy = malloc(sizeof(char) * _strlen(environ[i]) + 1);
	if (envcpy == NULL)
		return (NULL);

	_strcpy(envcpy, environ[i]);
	token = _strtok(envcpy, "=\n\r");
	if (environ[i][5] == ':')
		flagcurr = 1;
	while (token != NULL)
	{
		tokens[j] = token;
		token = _strtok(NULL, ":\n\r");
		j++;
	}
	if (flagcurr == 1)
		tokens[0] = "./";

	completepath = _catpath(tokens, command);
	free(tokens);
	free(token);
	free(envcpy);
	if (mode == 0)
		free(command);

return (completepath);
}

char *_catpath(char **uncatpath, char *command)
{
	int i = 0;
	char *path = NULL;

	path = malloc(sizeof(char) * 1024);
	if (path == NULL)
		return (NULL);

	for (i = 0; i < 1024; i++)
		path[i] = '\0';

	i = 0;
	while (uncatpath[i] != NULL)
	{
		_strcpy(path, uncatpath[i]);
		_strcat(path, "/");
		_strcat(path, command);
		if (access(path, F_OK & X_OK) != -1)
			break;
		i++;
	}
return (path);
}

int _strcmp_path(char *s1, char *s2)
{
	int i = 0;
	int c = 1;
	int result = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && c < 5)
	{
		result = s1[i] - s2[i];
		if (result == 0)
			i++;
		else
			c++;
	}

return (result);
}