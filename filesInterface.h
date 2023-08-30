#include <stdio.h>

#ifndef _file_h
#define _file_h

#define WORDS_FILE "/path/to/nouns.txt"
#define PASS_FILE "/path/to/passwords.txt"

static FILE *open_file_read();
static FILE *open_file_write();
char* read_line(int line);
static void close_file(FILE *file);

#endif 
