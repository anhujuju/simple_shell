# Shell Project - Simple Shell

Simply put, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. In the old days, it was the only user interface available on a Unix-like system such as Linux. Nowadays, we have graphical user interfaces (GUIs) in addition to command line interfaces (CLIs) such as the shell.

# Shell will be compiled this way

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

# Testing

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit

# Libraries

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <sys/wait.h>

#include "myshell.h"

# Authors

- Andres Felipe Rodríguez (@anhujuju)

- Juan José Gómez (@JuanJoseGomezR)
