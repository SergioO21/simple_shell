#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/** Extern Libraries */
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/** Macros */
#define DELIM " ,!¡¿?\'\"\n\t"
#define STDOUT STDOUT_FILENO
#define STDIN STDIN_FILENO
#define STDERR STDERR_FILENO

extern char **environ;

/** Prototypes */
char **tokenize(char *buffer);
char *check_path(char **ar);
void _error(char *command);
int builtins(char **ar, int exit_value, char *line);
int execute(char **ar, int exit_value, char *line);
int _fork(char **ar, int exit_value);
int launch(char **ar, int exit_value);
char *read_line(void);
void _signal(int sig);
char *get_env(void);

/** Clone Functions */
int _strncmp(char *s1, char *s2, int len);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);

#endif /* Holberton Library */
