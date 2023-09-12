#include <stdio.h>

#ifndef _file_h
#define _file_h

#define WORDS_FILE "./nouns.txt"
#define PASS_FILE "/home/patrick/passwords.txt"

static FILE *open_file_read();
static FILE *open_file_write();
char* read_line(int line);
char* read_whole_file();
static void close_file(FILE *file);
int write_line(char *line);

#endif 
