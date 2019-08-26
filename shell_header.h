#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#define BUFSIZE 1024
#define TOK_BUFSIZE 1024
#define TOK_DELIM " \t\r\n\a"

#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* missing ctr c */
int funcion_clear(char **args);
int funcion_cd(char **args);
int funcion_exit(char **args);
int funcion_ls(char **args);
int funcion_pause(char **args);
int funcion_echo(char **args);
int main(int argc, char **argv);

#endif
