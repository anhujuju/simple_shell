#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>

extern char **enviroment;

char *_getline(void);
char **_splitline(char *line_buf);
void _promp(int error)
int _execute(char **args, int *flag, int mode);
char *_pathfinder(char *command, int mode);
char *_catpath(char **uncatpath, char *command);
int _builtins(char **args);
void _cd(char **args);
void _env(void);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *str1, char *str2);
int _strcmp_path(char *s1, char *s2);
unsigned int _strcspn(char *s, char *pre);
int _strspn(char *s, const char *delimiter);
void _nointeractive(char *line, char **args);
char *_strchr(char *s, char b);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
char *_strtok_r(char *s, const char *delimiter, char **save_str);
char *_strtok(char *s, char *delimiter);

#endif